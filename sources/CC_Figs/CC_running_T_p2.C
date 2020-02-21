void CC_running_T_p2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 11:58:31 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.494626e+09,-82.89474,1.561132e+09,469.7368);
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
   
   Double_t Graph0_fx1001[50] = {
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
   Double_t Graph0_fy1001[50] = {
   221.5368,
   221.2007,
   220.96,
   220.5841,
   220.3953,
   220.1866,
   220.0451,
   219.7864,
   219.5471,
   219.2174,
   219.1115,
   219.2824,
   219.5128,
   219.2996,
   218.3488,
   217.7006,
   217.1179,
   216.9882,
   216.7411,
   216.6746,
   216.9552,
   216.8657,
   216.6362,
   215.988,
   215.2769,
   215.0281,
   214.8005,
   214.6288,
   214.154,
   213.8825,
   213.8952,
   213.6444,
   213.1532,
   212.3628,
   211.7704,
   211.3721,
   211.2051,
   211.4479,
   211.7253,
   211.8114,
   212.1368,
   212.0029,
   211.7785,
   211.6469,
   211.281,
   211.0017,
   211.2164,
   211.2586,
   211.5944,
   211.4556};
   Double_t Graph0_fex1001[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1001[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of Calibration Coefficient during Phase-2 (v34)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Evolution of Calibration Coefficient during Phase-2 (v34)",100,1.505267e+09,1.556476e+09);
   Graph_Graph01001->SetMinimum(0);
   Graph_Graph01001->SetMaximum(420);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(3);
   Graph_Graph01001->SetMarkerSize(1.2);
   Graph_Graph01001->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph01001->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph01001->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph01001->GetXaxis()->SetNdivisions(5);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1002[50] = {
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
   Double_t Graph1_fy1002[50] = {
   248.1898,
   247.5034,
   246.9645,
   246.2693,
   245.8096,
   245.5051,
   245.1454,
   244.7933,
   244.4511,
   244.0479,
   243.8828,
   243.9322,
   244.0189,
   243.6651,
   243.0738,
   242.4599,
   241.9612,
   241.5597,
   241.0439,
   240.7635,
   240.8256,
   240.6913,
   240.2343,
   239.4706,
   238.821,
   238.5686,
   238.3981,
   238.1454,
   237.7054,
   237.3999,
   237.3633,
   237.0312,
   236.5407,
   235.7811,
   234.8586,
   234.3135,
   234.0516,
   234.0566,
   234.1913,
   234.2998,
   234.2604,
   234.0655,
   233.8407,
   233.5217,
   233.1413,
   232.7984,
   232.709,
   232.7431,
   232.7373,
   232.6352};
   Double_t Graph1_fex1002[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1002[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Cell 2");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Cell 2",100,1.505267e+09,1.556476e+09);
   Graph_Graph11002->SetMinimum(0);
   Graph_Graph11002->SetMaximum(420);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);
   Graph_Graph11002->SetLineWidth(3);
   Graph_Graph11002->SetMarkerSize(1.2);
   Graph_Graph11002->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph11002->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph11002->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph11002->GetXaxis()->SetNdivisions(5);
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("pl");
   
   Double_t Graph2_fx1003[50] = {
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
   Double_t Graph2_fy1003[50] = {
   255.2078,
   254.6701,
   254.2995,
   253.7324,
   253.0361,
   252.3602,
   251.5698,
   250.5963,
   250.1028,
   249.5678,
   249.1416,
   248.7425,
   248.2448,
   247.5833,
   246.8437,
   245.9784,
   245.0244,
   244.204,
   243.2941,
   242.6619,
   242.3945,
   242.0498,
   241.3111,
   240.424,
   239.3018,
   238.8996,
   238.4836,
   238.1263,
   237.5353,
   236.9176,
   236.5486,
   235.7603,
   234.8561,
   233.786,
   232.8522,
   232.1615,
   231.8115,
   231.6158,
   231.5765,
   231.5922,
   231.2574,
   231.0674,
   230.6619,
   230.1898,
   229.6766,
   229.1157,
   228.8685,
   228.7035,
   228.4772,
   228.0353};
   Double_t Graph2_fex1003[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1003[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Cell 3");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","Cell 3",100,1.505267e+09,1.556476e+09);
   Graph_Graph21003->SetMinimum(0);
   Graph_Graph21003->SetMaximum(420);
   Graph_Graph21003->SetDirectory(0);
   Graph_Graph21003->SetStats(0);
   Graph_Graph21003->SetLineWidth(3);
   Graph_Graph21003->SetMarkerSize(1.2);
   Graph_Graph21003->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph21003->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph21003->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph21003->GetXaxis()->SetNdivisions(5);
   Graph_Graph21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph21003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph21003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph21003->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph21003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph21003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21003);
   
   gre->Draw("pl");
   
   Double_t Graph3_fx1004[50] = {
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
   Double_t Graph3_fy1004[50] = {
   243.1213,
   241.766,
   240.5215,
   239.2588,
   238.3267,
   237.4973,
   236.8262,
   236.1157,
   235.4635,
   234.8062,
   234.1894,
   233.8179,
   233.5861,
   233.0765,
   232.3655,
   231.4588,
   230.4645,
   229.791,
   229.0639,
   228.724,
   228.6012,
   228.3585,
   227.7606,
   226.8792,
   225.8123,
   225.1973,
   224.6794,
   224.2718,
   223.7482,
   223.2812,
   223.0144,
   222.5391,
   221.7153,
   220.89,
   219.9104,
   219.4916,
   219.0913,
   218.8135,
   218.904,
   218.9535,
   218.9547,
   218.8841,
   218.6085,
   217.9996,
   217.5231,
   217.0625,
   216.8896,
   216.8349,
   216.8879,
   216.7296};
   Double_t Graph3_fex1004[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1004[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Cell 4");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph31004 = new TH1F("Graph_Graph31004","Cell 4",100,1.505267e+09,1.556476e+09);
   Graph_Graph31004->SetMinimum(0);
   Graph_Graph31004->SetMaximum(420);
   Graph_Graph31004->SetDirectory(0);
   Graph_Graph31004->SetStats(0);
   Graph_Graph31004->SetLineWidth(3);
   Graph_Graph31004->SetMarkerSize(1.2);
   Graph_Graph31004->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph31004->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph31004->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph31004->GetXaxis()->SetNdivisions(5);
   Graph_Graph31004->GetXaxis()->SetLabelFont(42);
   Graph_Graph31004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph31004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph31004->GetXaxis()->SetTitleFont(42);
   Graph_Graph31004->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph31004->GetYaxis()->SetLabelFont(42);
   Graph_Graph31004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph31004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph31004->GetYaxis()->SetTitleFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31004);
   
   gre->Draw("pl");
   
   Double_t Graph4_fx1005[50] = {
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
   Double_t Graph4_fy1005[50] = {
   245.6981,
   245.0124,
   244.6011,
   243.9987,
   243.7536,
   243.4915,
   243.1021,
   242.7856,
   242.4876,
   242.2207,
   242.1564,
   242.1815,
   241.9688,
   241.6026,
   240.9133,
   240.4491,
   239.9547,
   239.5638,
   239.1234,
   239.0971,
   239.1478,
   239.0973,
   238.6346,
   237.9974,
   237.1626,
   236.7929,
   236.6054,
   236.4254,
   236.1039,
   235.8538,
   235.7747,
   235.5054,
   234.9677,
   234.3243,
   233.5671,
   233.1538,
   233.0168,
   233.1133,
   233.3118,
   233.5754,
   233.6334,
   233.5958,
   233.4677,
   233.1385,
   232.7184,
   232.595,
   232.8059,
   232.9595,
   233.0344,
   232.8446};
   Double_t Graph4_fex1005[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph4_fey1005[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph4_fx1005,Graph4_fy1005,Graph4_fex1005,Graph4_fey1005);
   gre->SetName("Graph4");
   gre->SetTitle("Cell 5");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph41005 = new TH1F("Graph_Graph41005","Cell 5",100,1.505267e+09,1.556476e+09);
   Graph_Graph41005->SetMinimum(0);
   Graph_Graph41005->SetMaximum(420);
   Graph_Graph41005->SetDirectory(0);
   Graph_Graph41005->SetStats(0);
   Graph_Graph41005->SetLineWidth(3);
   Graph_Graph41005->SetMarkerSize(1.2);
   Graph_Graph41005->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph41005->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph41005->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph41005->GetXaxis()->SetNdivisions(5);
   Graph_Graph41005->GetXaxis()->SetLabelFont(42);
   Graph_Graph41005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph41005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph41005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph41005->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph41005->GetXaxis()->SetTitleFont(42);
   Graph_Graph41005->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph41005->GetYaxis()->SetLabelFont(42);
   Graph_Graph41005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph41005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph41005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph41005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph41005->GetYaxis()->SetTitleFont(42);
   Graph_Graph41005->GetZaxis()->SetLabelFont(42);
   Graph_Graph41005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph41005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph41005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41005);
   
   gre->Draw("pl");
   
   Double_t Graph5_fx1006[50] = {
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
   Double_t Graph5_fy1006[50] = {
   219.308,
   219.1365,
   218.8847,
   218.5408,
   218.4392,
   218.2932,
   218.2469,
   218.1144,
   217.9551,
   217.7817,
   217.6568,
   217.584,
   217.573,
   217.3158,
   216.7358,
   216.2788,
   215.7101,
   215.4394,
   215.113,
   215.0925,
   215.2288,
   215.0326,
   214.5272,
   213.8753,
   213.1128,
   212.7339,
   212.8274,
   212.685,
   212.5163,
   212.3316,
   212.2237,
   212.022,
   211.4748,
   210.8413,
   210.1573,
   209.9021,
   209.9597,
   210.0117,
   210.2781,
   210.5458,
   210.5738,
   210.5395,
   210.4462,
   210.23,
   210.0398,
   209.9378,
   210.1419,
   210.3561,
   210.5461,
   210.4114};
   Double_t Graph5_fex1006[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph5_fey1006[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph5_fx1006,Graph5_fy1006,Graph5_fex1006,Graph5_fey1006);
   gre->SetName("Graph5");
   gre->SetTitle("Cell 6");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph51006 = new TH1F("Graph_Graph51006","Cell 6",100,1.505267e+09,1.556476e+09);
   Graph_Graph51006->SetMinimum(0);
   Graph_Graph51006->SetMaximum(420);
   Graph_Graph51006->SetDirectory(0);
   Graph_Graph51006->SetStats(0);
   Graph_Graph51006->SetLineWidth(3);
   Graph_Graph51006->SetMarkerSize(1.2);
   Graph_Graph51006->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph51006->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph51006->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph51006->GetXaxis()->SetNdivisions(5);
   Graph_Graph51006->GetXaxis()->SetLabelFont(42);
   Graph_Graph51006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph51006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph51006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph51006->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph51006->GetXaxis()->SetTitleFont(42);
   Graph_Graph51006->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph51006->GetYaxis()->SetLabelFont(42);
   Graph_Graph51006->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph51006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph51006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph51006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph51006->GetYaxis()->SetTitleFont(42);
   Graph_Graph51006->GetZaxis()->SetLabelFont(42);
   Graph_Graph51006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph51006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph51006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51006);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph0","Cell 1","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Cell 2","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Cell 3","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Cell 4","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","Cell 5","lpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Cell 6","lpflpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
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
   entry=leg->AddEntry("Graph0","Cell 1","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Cell 2","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Cell 3","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Cell 4","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","Cell 5","lpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Cell 6","lpflpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
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
