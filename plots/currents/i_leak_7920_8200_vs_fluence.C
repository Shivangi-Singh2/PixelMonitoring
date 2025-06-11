#ifdef __CLING__
#pragma cling optimize(0)
#endif
void i_leak_7920_8200_vs_fluence()
{
//=========Macro generated from canvas: i_leak_7920_8200/
//=========  (Fri Apr  4 20:32:54 2025) by ROOT version 6.34.04
   TCanvas *i_leak_7920_8200 = new TCanvas("i_leak_7920_8200", "",0,0,700,500);
   gStyle->SetOptFit(1);
   i_leak_7920_8200->SetHighLightColor(2);
   i_leak_7920_8200->Range(-1.122808e+13,-8,4.976396e+13,45.33333);
   i_leak_7920_8200->SetFillColor(0);
   i_leak_7920_8200->SetBorderMode(0);
   i_leak_7920_8200->SetBorderSize(2);
   i_leak_7920_8200->SetLeftMargin(0.15);
   i_leak_7920_8200->SetBottomMargin(0.15);
   i_leak_7920_8200->SetFrameBorderMode(0);
   i_leak_7920_8200->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[72] = { 6.26471e+08, 2.020615e+09, 7.492901e+09, 4.498083e+10, 8.561122e+10, 8.759889e+10, 1.128589e+11, 1.296678e+11, 2.31161e+11, 4.246374e+11, 5.024863e+11, 5.8219e+11, 9.015035e+11, 9.015035e+11, 9.677098e+11, 1.065578e+12, 1.079473e+12,
   1.08666e+12, 1.407035e+12, 1.501806e+12, 2.080599e+12, 2.100174e+12, 2.259836e+12, 2.312016e+12, 2.35773e+12, 2.660447e+12, 2.678866e+12, 3.535111e+12, 4.096966e+12, 4.467729e+12, 5.482523e+12, 5.912895e+12, 6.753161e+12,
   6.964121e+12, 7.242438e+12, 8.137903e+12, 9.187965e+12, 9.285155e+12, 1.063313e+13, 1.089334e+13, 1.210659e+13, 1.218604e+13, 1.227874e+13, 1.239412e+13, 1.439245e+13, 1.526581e+13, 1.577137e+13, 1.577953e+13, 1.578561e+13,
   1.767824e+13, 1.901422e+13, 2.083146e+13, 2.259014e+13, 2.323829e+13, 2.338378e+13, 2.548545e+13, 2.55051e+13, 2.710549e+13, 2.757542e+13, 2.902556e+13, 2.966144e+13, 3.198343e+13, 3.20748e+13, 3.402186e+13, 3.504021e+13,
   3.697689e+13, 3.941238e+13, 4.157322e+13, 4.157347e+13, 4.158456e+13, 4.158545e+13, 4.158548e+13 };
   Double_t Graph_fy1[72] = { 10.625, 10.25, 11, 10.25, 11, 11.26667, 11.11111, 11.21429, 14.07143, 12, 12.10714, 18.19643, 18.60714, 20.80357, 21.375, 21.92857, 16.75,
   16.66072, 23.69643, 28.37931, 29, 20.34483, 31.7931, 32.84483, 28.01724, 34.63793, 23.65517, 37.5, 43.09375, 50.26562, 49.09375, 55.95312, 61.90625,
   65.04688, 67, 66.6875, 76.25, 90.57812, 91.79688, 105.3281, 101.25, 121.7031, 124.8438, 112.0938, 118.1094, 130.0469, 133.5938, 94.53125, 95.89062,
   141.7344, 152.7188, 171.0312, 182.1094, 184.1562, 178.6094, 199.0781, 139.3125, 140.7031, 174.0469, 190.9062, 179.9688, 231.1719, 245.9844, 251.2188, 246.9219,
   268.5156, 265.5625, 238.7656, 156.125, 154.6094, 102.2344, 156.9062 };
   TGraph *graph = new TGraph(72,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Layer 1",100,0,4.574397e+13);
   Graph_Graph1->SetMinimum(9.225);
   Graph_Graph1->SetMaximum(294.3422);
   Graph_Graph1->SetDirectory(nullptr);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Fill Number");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Leakage current I [#mu A / cm^{3}]");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.35);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[72] = { 2.658845e+08, 8.57582e+08, 3.180109e+09, 1.90906e+10, 3.633479e+10, 3.717839e+10, 4.789916e+10, 5.503312e+10, 9.810847e+10, 1.80223e+11, 2.132633e+11, 2.470909e+11, 3.826127e+11, 3.826127e+11, 4.107118e+11, 4.522484e+11, 4.58146e+11,
   4.611961e+11, 5.971683e+11, 6.37391e+11, 8.830401e+11, 8.913479e+11, 9.59111e+11, 9.81257e+11, 1.000659e+12, 1.129137e+12, 1.136954e+12, 1.500359e+12, 1.738819e+12, 1.896177e+12, 2.326872e+12, 2.509529e+12, 2.866151e+12,
   2.955686e+12, 3.073808e+12, 3.453858e+12, 3.899521e+12, 3.940771e+12, 4.512874e+12, 4.623308e+12, 5.138233e+12, 5.171955e+12, 5.211295e+12, 5.260267e+12, 6.10839e+12, 6.479059e+12, 6.693625e+12, 6.697089e+12, 6.699668e+12,
   7.50293e+12, 8.069945e+12, 8.841211e+12, 9.58762e+12, 9.862705e+12, 9.924456e+12, 1.081644e+13, 1.082478e+13, 1.150401e+13, 1.170345e+13, 1.231892e+13, 1.25888e+13, 1.357429e+13, 1.361307e+13, 1.443943e+13, 1.487163e+13,
   1.569359e+13, 1.672725e+13, 1.764435e+13, 1.764446e+13, 1.764916e+13, 1.764954e+13, 1.764955e+13 };
   Double_t Graph_fy2[72] = { 969.7969, 976, 981.4219, 997.375, 1012.219, 1008.422, 1004.109, 1009.391, 1013.25, 1030.328, 1004.078, 1009.156, 1026.219, 1035.766, 1043.625, 1044.516, 996.4219,
   989.125, 1036.859, 1091.375, 1086.172, 1056.016, 1084.641, 1081.703, 1053.812, 1087.188, 1024.016, 1106.672, 1035.594, 1136.016, 1134.625, 1136.172, 1136.797,
   1106.312, 1142.703, 1134.594, 1154.719, 1205.125, 1205.312, 1234.594, 1210.625, 1283.359, 1287.297, 1221.578, 1255.156, 1258.266, 1254.859, 1122.828, 1145.906,
   1281.266, 1302.891, 1340.844, 1361, 1337.734, 1298.406, 1376.625, 1151.672, 1150.172, 1205.016, 1307.281, 1233.141, 1428.281, 1465.406, 1479.875, 1449.938,
   1522.828, 1500.906, 1335.141, 1159.25, 1157.078, 1178.188, 1168.391 };
   graph = new TGraph(72,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Layer 2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#00cccc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Layer 2",100,0,1.941448e+13);
   Graph_Graph2->SetMinimum(914.4937);
   Graph_Graph2->SetMaximum(1578.131);
   Graph_Graph2->SetDirectory(nullptr);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Fill Number");
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Leakage current I [#mu A / cm^{3}]");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.35);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[72] = { 1.664406e+08, 5.368364e+08, 1.990712e+09, 1.195049e+10, 2.274516e+10, 2.327324e+10, 2.998433e+10, 3.44501e+10, 6.141477e+10, 1.128175e+11, 1.335004e+11, 1.54676e+11, 2.395112e+11, 2.395112e+11, 2.571008e+11, 2.831023e+11, 2.867941e+11,
   2.887035e+11, 3.738205e+11, 3.989995e+11, 5.52773e+11, 5.579735e+11, 6.003925e+11, 6.142556e+11, 6.26401e+11, 7.068267e+11, 7.117202e+11, 9.392072e+11, 1.088481e+12, 1.186985e+12, 1.456595e+12, 1.570936e+12, 1.794178e+12,
   1.850226e+12, 1.924169e+12, 2.162076e+12, 2.441056e+12, 2.466877e+12, 2.825007e+12, 2.894138e+12, 3.216475e+12, 3.237585e+12, 3.262211e+12, 3.292867e+12, 3.823782e+12, 4.055817e+12, 4.190132e+12, 4.192301e+12, 4.193915e+12,
   4.696748e+12, 5.051693e+12, 5.534497e+12, 6.00174e+12, 6.17394e+12, 6.212595e+12, 6.770967e+12, 6.776186e+12, 7.201378e+12, 7.326227e+12, 7.711502e+12, 7.880442e+12, 8.497349e+12, 8.521623e+12, 9.038916e+12, 9.309473e+12,
   9.824008e+12, 1.047107e+13, 1.104516e+13, 1.104523e+13, 1.104817e+13, 1.104841e+13, 1.104842e+13 };
   Double_t Graph_fy3[72] = { 670.8125, 675.2969, 677.3125, 674.3281, 699.3594, 694.0938, 669.4375, 694.7969, 688.5312, 703.25, 694.3438, 675.0312, 696.6406, 701.9062, 706.6562, 707.8438, 689.1406,
   683.0938, 691.6719, 729.125, 725.75, 738.2188, 725.0625, 724.3281, 713.2969, 725.2188, 716.8438, 735.2188, 686.9844, 744.6562, 749.5781, 750.3125, 744.4531,
   735.5625, 748.6562, 747.7344, 754.8438, 780.2344, 778.2656, 791, 783.5625, 814.1719, 814.9688, 789.3281, 802.1562, 805.1875, 802.5156, 781.9062, 801.8125,
   820.4844, 832.3125, 838.6094, 859.0156, 851.9844, 833.1875, 860.4688, 795.5469, 790.7188, 788.4531, 844.7812, 805, 888.0781, 910.8594, 912.7969, 904.125,
   940.2344, 931.0938, 884.2344, 796.9219, 794.3281, 804.2344, 801.4219 };
   graph = new TGraph(72,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("Layer 3");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#009933");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#009933");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Layer 3",100,0,1.215324e+13);
   Graph_Graph3->SetMinimum(642.3578);
   Graph_Graph3->SetMaximum(967.3141);
   Graph_Graph3->SetDirectory(nullptr);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("Fill Number");
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("Leakage current I [#mu A / cm^{3}]");
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.35);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_fy4[72] = { 636.3906, 634.375, 634.2969, 630.25, 654.0312, 649.25, 624.9062, 649.4531, 642.4531, 655.3906, 649, 628.9688, 647.8438, 653.4844, 657.2656, 659.3438, 645.375,
   640.4688, 644.5938, 674.1562, 672.0469, 695.375, 669.6562, 671.9531, 663.4844, 671.9219, 684.6406, 679.625, 641.1875, 687.3125, 692.1719, 692.9062, 686.1875,
   679.4219, 690.4219, 691.6562, 696.0312, 717.1094, 714.2812, 724.1406, 718.9531, 741.25, 741.5312, 725.4062, 734.1562, 737.625, 736.5469, 748.2969, 760.5,
   750.0781, 761.4219, 763.7344, 781.4062, 778.6406, 764.3438, 783.3594, 763.5312, 751.9531, 734.0625, 775.4531, 744.5312, 805.4375, 826.9688, 826.5, 821.1562,
   849.6562, 844.875, 817.2812, 753.6875, 744.2656, 753.6562, 771.9219 };
   graph = new TGraph(72,Graph_fx4,Graph_fy4);
   graph->SetName("Graph");
   graph->SetTitle("Layer 4");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Layer 4",100,0,1.1);
   Graph_Graph4->SetMinimum(602.4312);
   Graph_Graph4->SetMaximum(872.1313);
   Graph_Graph4->SetDirectory(nullptr);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("Fill Number");
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("Leakage current I [#mu A / cm^{3}]");
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.35);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetLimits(-2.079274e+12, 4.366476e+13);
   multigraph->GetXaxis()->SetTitle("Total fluence #Phi [1 MeV Neutron Equivalent]");
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
   
   TLegend *leg = new TLegend(0.17,0.67,0.35,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.043);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","Layer 1","P");
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
      tex = new TLatex(0.53,0.71,"");
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
   i_leak_7920_8200->Modified();
   i_leak_7920_8200->SetSelected(i_leak_7920_8200);
}
