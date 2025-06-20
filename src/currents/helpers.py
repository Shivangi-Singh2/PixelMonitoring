import math

from utils import pixelDesignUtils as designUtl
from utils import eraUtils as eraUtl
from utils.constants import K_B, E_G_EFF


def get_average_leakage_current_per_layer(
        fill,
        z_side,
        sub_system,
        layer,
        currents_directory,
        temperatures_directory,
        target_temperature,
        normalize_to_unit_volume,
        normalize_to_number_of_rocs,
    ):
    """???"""

    leakage_current_per_readout_group, _ = \
        get_leakage_currents_and_temperatures_per_readout_group(
            fill,
            z_side,
            sub_system,
            layer,
            currents_directory,
            temperatures_directory,
            target_temperature,
            normalize_to_unit_volume,
            normalize_to_number_of_rocs,
        )

    values = leakage_current_per_readout_group.values()
    average_leakage_current = sum(values) / len(values) if len(values) else 0

    return average_leakage_current


def get_leakage_currents_and_temperatures_per_readout_group(
        fill,
        z_side,
        sub_system,
        layer,
        currents_directory,
        temperatures_directory,
        target_temperature,
        normalize_to_unit_volume,
        normalize_to_number_of_rocs,
    ):
    """Get currents versus azimuth phi for minus or plus z-side.
    
    Args:
        fill (int or castable to str): Fill number
        z_side (str): "m" or "p" for minus or plus side, None for both sides.
        sub_system (str): "Barrel" or "EndCap". Only "Barrel" suported.
        layer (int): 1 to 4
        currents_directory (str): Directory with "processed" currents
        target_temperature (float or None):
            Temperature in K at which to rescale the leakage current
        normalize_to_unit_volume (bool):
            Set to True/False to normalize or not to sensor volume. 
            Cannot be True together with normalize_to_number_of_rocs.
        normalize_to_number_of_rocs (bool): 
            Set to True/False to normalize or not to number of rocs. 
            Cannot be True together with normalize_to_unit_volume.
    """

    if ((normalize_to_unit_volume or normalize_to_number_of_rocs)
         and (normalize_to_unit_volume and normalize_to_number_of_rocs)):
         print("Error: normalize_to_unit_volume and normalize_to_number_of_rocs cannot be used at the same time!")
         exit(1)

    # Layer string to find in current file
    layer = "LYR" + str(layer)

    # Sensor temperature to correct leakage current for temperature change
    sub_system_2 = "BPix" if sub_system == "Barrel" else "FPix"
    temperatures_file_name = "%s/%s/%s.txt" % (temperatures_directory, sub_system_2, fill)
    temperatures_file = open(temperatures_file_name, 'r+')
    sensor_temperatures = dict(map(lambda x: [x.split()[0], float(x.split()[1])], temperatures_file.readlines()))

    # Open leakage currents file and read current vs phi
    currents_file_name = currents_directory + "/" + str(fill) + "_" + sub_system + "_HV_ByLayer.txt"
    print(currents_file_name)
    currents_file = open(currents_file_name, 'r+')
    leakage_currents = dict(map(lambda x: x.split(), currents_file.readlines()))

    leakage_current_per_readout_group = {}
    temperature_per_readout_group = {}

    for readout_group_name, leakage_current in leakage_currents.items():
        sensor_temperature = sensor_temperatures[readout_group_name]

        if readout_group_name in leakage_current_per_readout_group.keys():
            print("Error: {readout_group_name} already added to dict!")
            exit(0)

        _, half_cylinder, _, layer_candidate = readout_group_name.split("_")
        z_side_candidate = half_cylinder[1]
        if layer_candidate != layer: continue
        if z_side is not None and z_side_candidate != z_side: continue

        leakage_current = float(leakage_current)
        if target_temperature is not None:
            leakage_current = normalize_leakage_current_to_temperature(
                leakage_current,
                sensor_temperature,
                target_temperature,
            )
        if normalize_to_number_of_rocs or normalize_to_unit_volume:
            phase = eraUtl.get_phase_from_fill(fill)
            if phase != 1:
                raise NotImplementedError
            n_rocs = designUtl.get_number_of_rocs(phase, sub_system)[readout_group_name]
        if normalize_to_number_of_rocs:
            leakage_current = leakage_current / n_rocs
        if normalize_to_unit_volume:
            leakage_current = normalize_leakage_current_to_unit_volume(leakage_current, n_rocs=n_rocs)
        leakage_current_per_readout_group[readout_group_name] = leakage_current
        temperature_per_readout_group[readout_group_name] = sensor_temperature
        #print(readout_group_name, leakage_current, fill)

    return leakage_current_per_readout_group, temperature_per_readout_group


def normalize_leakage_current_to_temperature(
        leakage_current,
        measurement_temperature,
        target_temperature,
    ):
    """Rescale leakage current to target temperature.
    
    Args:
        leakage_current (float or numpy.ndarray)
        measurement_temperature (float): Temperature at which the leakage current was measured
        target_temperature (float): Temperature at which the leakage current is normalized
    """

    a = -E_G_EFF / (2*K_B)
    b = (1./target_temperature) - (1./measurement_temperature)
    temperature_ratio = target_temperature/measurement_temperature
    scaled_leakage_current = leakage_current * temperature_ratio**2 * math.exp(a*b)

    return scaled_leakage_current


# TODO: This is only for phase-1, add an argument?

def normalize_leakage_current_to_unit_volume(
        leakage_current,
        roc_volume=0.01869885,
        n_rocs=1,
    ):
    """Normalize leakage current to unit volume.
    
    The active area of 1 ROC is composed of:
        * 52 columns
        * 80 rows
        * Columns 0 and 51 are 300 microns wide
        * Columns 1..50 are 150 microns wide
        * Row 79 is 200 microns wide
        * Rows 0..78 are 100 microns wide
    A ROC has a thickness of 285 +/- 5 microns.
    One sensor/module is made of 8*2 = 16 ROCs.
    
    So one ROC has an active volume of:
        V = (52+2) * 150 * (80+1) * 100 * 285  microns cube
        V = 8100 * 8100 * 285  microns cube
        V = 0.81 * 0.81 * 0.0285  cm3
        V = 0.01869885  cm3

    Args:
        leakage_current (float or numpy.ndarray)
        roc_volume (float): ROC volume in cm3
        n_rocs (float): Number of ROCs
    """

    return leakage_current / (n_rocs * roc_volume)

