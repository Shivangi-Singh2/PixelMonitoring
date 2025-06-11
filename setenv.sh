source /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.32.04/x86_64-almalinux9.4-gcc114-opt/bin/thisroot.sh


source venv/bin/activate

export PIXEL_MONITORING_DIR=${PWD}

export PYTHONPATH=${PYTHONPATH}:${PWD}
export PYTHONPATH=${PYTHONPATH}:${PWD}/external
export PYTHONPATH=${PYTHONPATH}:${PWD}/src

#source brilwsenv.sh

