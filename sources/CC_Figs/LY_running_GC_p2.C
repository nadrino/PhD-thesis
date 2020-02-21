void LY_running_GC_p2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 16:05:03 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.494626e+09,-138.1579,1.561132e+09,782.8947);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.07);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph0_fy1007[50] = {
   432.9245,
   432.4189,
   431.8,
   431.3677,
   430.647,
   430.3041,
   429.6792,
   429.1996,
   428.3326,
   427.4684,
   427.3175,
   427.8619,
   428.4081,
   428.5975,
   428.2827,
   428.4959,
   428.8623,
   429.1612,
   428.813,
   428.0439,
   428.059,
   427.6791,
   427.8134,
   427.2647,
   427.3863,
   427.7118,
   426.8795,
   426.7302,
   426.0905,
   425.7743,
   426.0879,
   425.4729,
   425.6268,
   424.928,
   424.8359,
   424.4245,
   424.7077,
   425.1063,
   425.2748,
   425.3911,
   425.2903,
   424.9752,
   424.5463,
   424.3037,
   423.8127,
   423.2836,
   423.0554,
   423.0311,
   423.1395,
   423.0435};
   Double_t Graph0_fex1007[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1007[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of Calibration Coefficient during Phase-2 (v34)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","Evolution of Calibration Coefficient during Phase-2 (v34)",100,1.505267e+09,1.556476e+09);
   Graph_Graph01007->SetMinimum(0);
   Graph_Graph01007->SetMaximum(700);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);
   Graph_Graph01007->SetLineWidth(3);
   Graph_Graph01007->SetMarkerSize(1.2);
   Graph_Graph01007->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph01007->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph01007->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph01007->GetXaxis()->SetNdivisions(5);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1008[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph1_fy1008[50] = {
   410.9844,
   409.9431,
   409.5577,
   409.2463,
   408.5721,
   408.0262,
   406.8798,
   406.4574,
   405.5495,
   405.0619,
   404.4562,
   404.2982,
   404.1045,
   404.4512,
   404.3786,
   404.6401,
   404.5095,
   404.5669,
   404.1715,
   403.8675,
   403.5696,
   402.8659,
   402.1733,
   401.8879,
   401.7862,
   402.8332,
   403.0131,
   403.1938,
   403.1693,
   403.0977,
   402.958,
   402.2431,
   401.4404,
   400.9426,
   400.7633,
   400.7185,
   400.927,
   401.135,
   401.1869,
   400.9353,
   400.8834,
   400.7341,
   400.5533,
   401.0186,
   401.1595,
   400.0521,
   399.8767,
   399.5735,
   399.7578,
   399.6001};
   Double_t Graph1_fex1008[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1008[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Cell 7");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Cell 7",100,1.505267e+09,1.556476e+09);
   Graph_Graph11008->SetMinimum(0);
   Graph_Graph11008->SetMaximum(700);
   Graph_Graph11008->SetDirectory(0);
   Graph_Graph11008->SetStats(0);
   Graph_Graph11008->SetLineWidth(3);
   Graph_Graph11008->SetMarkerSize(1.2);
   Graph_Graph11008->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph11008->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph11008->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph11008->GetXaxis()->SetNdivisions(5);
   Graph_Graph11008->GetXaxis()->SetLabelFont(42);
   Graph_Graph11008->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11008->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph11008->GetXaxis()->SetTitleFont(42);
   Graph_Graph11008->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
   Graph_Graph11008->GetYaxis()->SetLabelFont(42);
   Graph_Graph11008->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph11008->GetYaxis()->SetTitleFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11008);
   
   gre->Draw("pl");
   
   Double_t Graph2_fx1009[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph2_fy1009[50] = {
   341.4863,
   340.9507,
   340.0949,
   340.0695,
   339.7478,
   339.578,
   339.3131,
   339.2662,
   338.9099,
   338.6356,
   338.2377,
   338.1067,
   338.281,
   338.3035,
   338.321,
   338.4851,
   338.495,
   338.6376,
   338.379,
   338.0959,
   338.3373,
   338.4326,
   338.4586,
   338.4934,
   338.3132,
   338.7065,
   338.2315,
   338.215,
   338.232,
   338.0097,
   338.3913,
   338.1408,
   338.3843,
   338.0377,
   337.2006,
   337.0958,
   337.6269,
   337.7578,
   338.2223,
   338.2227,
   337.9338,
   337.5588,
   337.0346,
   336.9694,
   336.5575,
   336.3453,
   336.4259,
   336.3157,
   336.2902,
   335.8024};
   Double_t Graph2_fex1009[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1009[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Cell 8");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Cell 8",100,1.505267e+09,1.556476e+09);
   Graph_Graph21009->SetMinimum(0);
   Graph_Graph21009->SetMaximum(700);
   Graph_Graph21009->SetDirectory(0);
   Graph_Graph21009->SetStats(0);
   Graph_Graph21009->SetLineWidth(3);
   Graph_Graph21009->SetMarkerSize(1.2);
   Graph_Graph21009->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph21009->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph21009->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph21009->GetXaxis()->SetNdivisions(5);
   Graph_Graph21009->GetXaxis()->SetLabelFont(42);
   Graph_Graph21009->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph21009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21009->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph21009->GetXaxis()->SetTitleFont(42);
   Graph_Graph21009->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
   Graph_Graph21009->GetYaxis()->SetLabelFont(42);
   Graph_Graph21009->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph21009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph21009->GetYaxis()->SetTitleFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21009);
   
   gre->Draw("pl");
   
   Double_t Graph3_fx1010[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph3_fy1010[50] = {
   379.2943,
   378.3331,
   377.3433,
   376.5269,
   376.0306,
   376.0017,
   375.6808,
   376.0454,
   375.5464,
   374.8783,
   374.3482,
   374.4947,
   374.5916,
   374.9674,
   374.8951,
   374.9722,
   374.8028,
   375.0049,
   374.7688,
   374.1747,
   374.2297,
   374.3387,
   374.2357,
   373.9412,
   373.3376,
   373.9396,
   373.5236,
   373.74,
   373.388,
   373.141,
   373.6003,
   373.2139,
   373.0204,
   372.0731,
   371.2078,
   371.138,
   371.4043,
   371.6274,
   371.6644,
   371.4486,
   371.1506,
   370.7957,
   370.7166,
   370.6371,
   370.4707,
   370.1614,
   370.269,
   370.1119,
   369.8312,
   369.408};
   Double_t Graph3_fex1010[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1010[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph3_fx1010,Graph3_fy1010,Graph3_fex1010,Graph3_fey1010);
   gre->SetName("Graph3");
   gre->SetTitle("Cell 9");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph31010 = new TH1F("Graph_Graph31010","Cell 9",100,1.505267e+09,1.556476e+09);
   Graph_Graph31010->SetMinimum(0);
   Graph_Graph31010->SetMaximum(700);
   Graph_Graph31010->SetDirectory(0);
   Graph_Graph31010->SetStats(0);
   Graph_Graph31010->SetLineWidth(3);
   Graph_Graph31010->SetMarkerSize(1.2);
   Graph_Graph31010->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph31010->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph31010->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph31010->GetXaxis()->SetNdivisions(5);
   Graph_Graph31010->GetXaxis()->SetLabelFont(42);
   Graph_Graph31010->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph31010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31010->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph31010->GetXaxis()->SetTitleFont(42);
   Graph_Graph31010->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
   Graph_Graph31010->GetYaxis()->SetLabelFont(42);
   Graph_Graph31010->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph31010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph31010->GetYaxis()->SetTitleFont(42);
   Graph_Graph31010->GetZaxis()->SetLabelFont(42);
   Graph_Graph31010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31010);
   
   gre->Draw("pl");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Evolution of Calibration Coefficient during Phase-2 (v34)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Cell 0","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Cell 7","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Cell 8","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Cell 9","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","Cell 0","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Cell 7","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Cell 8","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Cell 9","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
