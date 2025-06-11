#ifdef __CLING__
#pragma cling optimize(0)
#endif
void i_leak_run3_vs_fill_number()
{
//=========Macro generated from canvas: i_leak_run3/
//=========  (Mon Jun  9 23:51:26 2025) by ROOT version 6.32.04
   TCanvas *i_leak_run3 = new TCanvas("i_leak_run3", "",0,0,700,500);
   gStyle->SetOptFit(1);
   i_leak_run3->SetHighLightColor(2);
   i_leak_run3->Range(7548.21,-6,9567.81,34);
   i_leak_run3->SetFillColor(0);
   i_leak_run3->SetBorderMode(0);
   i_leak_run3->SetBorderSize(2);
   i_leak_run3->SetLeftMargin(0.15);
   i_leak_run3->SetBottomMargin(0.15);
   i_leak_run3->SetFrameBorderMode(0);
   i_leak_run3->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   Double_t i_leak_run3_graph_1_fill_fx2[326] = { 8210, 8211, 8212, 8214, 8216, 8220, 8221, 8222, 8223, 8225, 8226, 8228, 8230, 8232, 8233, 8236, 8238,
   8245, 8247, 8248, 8253, 8260, 8263, 8267, 8269, 8272, 8273, 8274, 8276, 8289, 8293, 8295, 8297,
   8299, 8301, 8302, 8304, 8305, 8306, 8307, 8309, 8311, 8312, 8313, 8314, 8315, 8316, 8317, 8319,
   8320, 8321, 8322, 8324, 8327, 8330, 8331, 8333, 8334, 8335, 8342, 8345, 8347, 8379, 8381, 8383,
   8385, 8387, 8389, 8392, 8395, 8398, 8399, 8401, 8402, 8412, 8413, 8456, 8471, 8474, 8479, 8484,
   8489, 8491, 8496, 8540, 8541, 8542, 8550, 8558, 8559, 8580, 8637, 8639, 8642, 8644, 8645, 8654,
   8675, 8685, 8686, 8690, 8691, 8692, 8695, 8696, 8701, 8723, 8724, 8725, 8728, 8729, 8730, 8731,
   8736, 8738, 8739, 8741, 8746, 8750, 8754, 8771, 8773, 8775, 8778, 8782, 8786, 8794, 8796, 8804,
   8807, 8811, 8816, 8817, 8821, 8822, 8850, 8853, 8858, 8860, 8863, 8865, 8866, 8870, 8872, 8873,
   8877, 8880, 8882, 8885, 8887, 8891, 8894, 8895, 8896, 8901, 8997, 8999, 9007, 9014, 9016, 9017,
   9019, 9022, 9023, 9029, 9031, 9035, 9036, 9043, 9044, 9045, 9046, 9049, 9050, 9055, 9056, 9057,
   9059, 9062, 9063, 9066, 9067, 9068, 9070, 9072, 9073, 9095, 9128, 9132, 9135, 9136, 9138, 9153,
   9154, 9156, 9159, 9162, 9168, 9192, 9193, 9194, 9197, 9200, 9201, 9206, 9209, 9212, 9213, 9216,
   9217, 9218, 9220, 9222, 9223, 9225, 9226, 9231, 9232, 9234, 9235, 9237, 9239, 9240, 9242, 9245,
   9246, 9247, 9250, 9251, 9252, 9254, 9256, 9258, 9260, 9263, 9267, 9268, 9269, 9270, 9271, 9273,
   9279, 9281, 9282, 9283, 9284, 9285, 9288, 9289, 9291, 9292, 9294, 9296, 9297, 7920, 7921, 7923,
   7960, 7963, 7965, 7966, 7967, 7969, 7978, 8007, 8016, 8017, 8018, 8019, 8020, 8022, 8023, 8027,
   8030, 8033, 8043, 8046, 8057, 8058, 8059, 8062, 8063, 8067, 8068, 8072, 8073, 8076, 8078, 8079,
   8081, 8083, 8087, 8088, 8091, 8094, 8098, 8099, 8100, 8102, 8103, 8106, 8108, 8111, 8112, 8113,
   8115, 8118, 8120, 8121, 8124, 8125, 8128, 8132, 8136, 8142, 8143, 8144, 8146, 8147, 8148, 8149,
   8151, 8177, 8178, 8181, 8184 };
   Double_t i_leak_run3_graph_1_fill_fy2[326] = { 158.7656, 163.375, 175.5625, 184.7812, 196.9219, 243.6406, 265.7188, 278.1094, 289.4375, 299.75, 224.3594, 322.6875, 271.8125, 231.1406, 238.9375, 318.7031, 253.25,
   380.7969, 365.6875, 412.6875, 409.25, 422.25, 416.1719, 448.1562, 428.0781, 441.7812, 451.0625, 437.1406, 484.5312, 361.8594, 357.7344, 486.2344, 496.1406,
   382.4531, 378.7031, 516.7656, 529.2812, 560.9062, 556.0625, 449.5781, 427.0156, 588.375, 477.5312, 469.7812, 564.2031, 592.75, 613.2031, 611.3281, 650.4531,
   623.1719, 654.1094, 663.3438, 679.1719, 500.0625, 686.2969, 597.6562, 709.875, 710.125, 738.5938, 725.8125, 766.9531, 780.1875, 559.25, 555.5312, 612.1406,
   731.6406, 817.8438, 839.7031, 806.0312, 816.9688, 235.8906, 854.0781, 882.9219, 860.9844, 622.9375, 628, 662.2031, 949.9844, 937.7188, 693.0312, 937.2812,
   968.6094, 991.8438, 992.5938, 494.4062, 489.1875, 490.0469, 476.7656, 497.7969, 505.3438, 495.8438, 501.6719, 500.8125, 503.4375, 504.2031, 504.9062, 505.7344,
   490.3906, 503.1875, 523.7344, 532.0469, 546.0469, 546.4219, 562.2188, 578.8281, 592.6875, 524.3125, 599.2188, 601.2969, 607.2188, 625.2969, 626.8125, 669.375,
   653.0312, 701.4531, 678.6094, 689.3594, 714.5, 764.5, 754.7344, 783.5156, 799.8125, 819.25, 659.7969, 822.7969, 847.0938, 854.0938, 885.4062, 841.1719,
   873.7031, 874.1406, 893.9688, 892.4219, 931.7969, 937.3594, 782.7812, 811.5312, 836.7344, 856.2344, 856.7656, 888.3594, 930.625, 916.5938, 982.2656, 784.9219,
   954.2188, 999.1562, 1034.828, 1042.516, 1032.031, 1130.516, 1093.297, 1085.203, 881.1875, 1125.5, 896.4531, 893.5156, 893.6094, 0, 886.3125, 927.9531,
   981.8594, 1003.734, 1065.422, 893.7344, 1158.453, 1187.578, 1239.938, 1259.531, 1266.312, 999.5469, 1327.094, 1332.469, 1312, 1327.875, 1019.703, 1342.656,
   1349.781, 1333.312, 1354.875, 1079.453, 1345.562, 1402.25, 1380.281, 1427.156, 1157.516, 927.8906, 935.6875, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 920.0312, 933.0312, 928.9062, 928.5781, 922.3906, 924.8125, 0, 928.0312, 933.3281, 953.4844, 929.9219, 941.8594,
   938.8125, 920.8594, 918.9531, 921.0781, 935.8125, 931.3906, 925.0156, 921.5312, 920.5469, 923.2188, 921.1719, 921.3438, 920.8906, 921.1094, 925.875, 923.2969,
   925.7812, 927.4219, 926.5312, 937.6719, 927.5, 928.5781, 928.1875, 922.4375, 931.5625, 923.1719, 929.2344, 930.8594, 923.7656, 929.5, 931.2031, 927.9844,
   915.5625, 920.5938, 922.9375, 924.4844, 929.125, 934.1719, 926.0469, 927.2969, 928.5781, 922.7656, 925.25, 929.4844, 928.2656, 10.625, 10.25, 11,
   10.25, 11, 11.26667, 11.11111, 11.21429, 14.07143, 12, 12.10714, 18.19643, 18.60714, 20.80357, 21.375, 21.92857, 16.75, 16.66072, 23.69643,
   28.37931, 29, 20.34483, 31.7931, 32.84483, 28.01724, 34.63793, 23.65517, 37.5, 43.09375, 50.26562, 49.09375, 55.95312, 61.90625, 65.04688, 67,
   66.6875, 76.25, 90.57812, 91.79688, 105.3281, 101.25, 121.7031, 124.8438, 112.0938, 118.1094, 130.0469, 133.5938, 94.53125, 95.89062, 141.7344, 152.7188,
   171.0312, 182.1094, 184.1562, 178.6094, 199.0781, 139.3125, 140.7031, 174.0469, 190.9062, 179.9688, 231.1719, 245.9844, 251.2188, 246.9219, 268.5156, 265.5625,
   238.7656, 156.125, 154.6094, 102.2344, 156.9062 };
   TGraph *graph = new TGraph(326,i_leak_run3_graph_1_fill_fx2,i_leak_run3_graph_1_fill_fy2);
   graph->SetName("i_leak_run3_graph_1_fill");
   graph->SetTitle("Layer 1");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#000099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_i_leak_run3_graph_1_fill2 = new TH1F("Graph_i_leak_run3_graph_1_fill2","Layer 1",326,7782.3,9434.7);
   Graph_i_leak_run3_graph_1_fill2->SetMinimum(0);
   Graph_i_leak_run3_graph_1_fill2->SetMaximum(1569.872);
   Graph_i_leak_run3_graph_1_fill2->SetDirectory(nullptr);
   Graph_i_leak_run3_graph_1_fill2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_i_leak_run3_graph_1_fill2->SetLineColor(ci);
   Graph_i_leak_run3_graph_1_fill2->GetXaxis()->SetTitle("Fill Number");
   Graph_i_leak_run3_graph_1_fill2->GetXaxis()->SetLabelFont(42);
   Graph_i_leak_run3_graph_1_fill2->GetXaxis()->SetLabelSize(0.045);
   Graph_i_leak_run3_graph_1_fill2->GetXaxis()->SetTitleSize(0.05);
   Graph_i_leak_run3_graph_1_fill2->GetXaxis()->SetTitleOffset(1.2);
   Graph_i_leak_run3_graph_1_fill2->GetXaxis()->SetTitleFont(42);
   Graph_i_leak_run3_graph_1_fill2->GetYaxis()->SetTitle("Leakage current I [#mu A / cm^{3}]");
   Graph_i_leak_run3_graph_1_fill2->GetYaxis()->SetLabelFont(42);
   Graph_i_leak_run3_graph_1_fill2->GetYaxis()->SetLabelSize(0.045);
   Graph_i_leak_run3_graph_1_fill2->GetYaxis()->SetTitleSize(0.05);
   Graph_i_leak_run3_graph_1_fill2->GetYaxis()->SetTitleOffset(1.35);
   Graph_i_leak_run3_graph_1_fill2->GetYaxis()->SetTitleFont(42);
   Graph_i_leak_run3_graph_1_fill2->GetZaxis()->SetLabelFont(42);
   Graph_i_leak_run3_graph_1_fill2->GetZaxis()->SetTitleOffset(1);
   Graph_i_leak_run3_graph_1_fill2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_i_leak_run3_graph_1_fill2);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetLimits(7851.15, 9365.85);
   multigraph->GetXaxis()->SetTitle("Fill number");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("I_{leak} [#muA]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.045);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.35);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.17,0.82,0.35,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.043);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("i_leak_run3_graph_1_fill","Layer 1","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.53,0.83,"CMS Barrel Pixel Detector");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.043);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.53,0.77,"Leakage Current");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.043);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.53,0.71,"July 2022 - Nov 2022");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.043);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.92,"CMS");
   tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.92,"Preliminary");
   tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9,0.92,"(2022) 13.6 TeV");
   tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   i_leak_run3->Modified();
   i_leak_run3->SetSelected(i_leak_run3);
}
