void CC_running_T_p1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 11:53:46 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.477366e+09,-82.89474,1.491749e+09,469.7368);
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
   
   Double_t Graph0_fx1013[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph0_fy1013[50] = {
   261.6789,
   259.9242,
   258.1405,
   256.4496,
   255.2442,
   253.9836,
   252.8566,
   251.8404,
   250.6656,
   249.4005,
   248.1679,
   247.0025,
   245.905,
   244.8553,
   243.7471,
   242.8083,
   241.8291,
   240.8196,
   239.8673,
   238.873,
   238.1066,
   237.4089,
   236.8732,
   236.2957,
   235.8358,
   235.3151,
   235.0135,
   234.6148,
   234.3632,
   234.1275,
   233.8311,
   233.4696,
   233.0288,
   232.5377,
   231.997,
   231.5502,
   231.1549,
   230.7538,
   230.4882,
   230.1986,
   230.0085,
   229.7983,
   229.7209,
   229.6925,
   229.8096,
   229.9279,
   230.046,
   230.0981,
   230.0981,
   230.0981};
   Double_t Graph0_fex1013[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1013[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of Calibration Coefficient during Phase-1 (v34)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph_Graph0100110071013 = new TH1F("Graph_Graph_Graph_Graph0100110071013","Evolution of Calibration Coefficient during Phase-1 (v34)",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph_Graph0100110071013->SetMinimum(0);
   Graph_Graph_Graph_Graph0100110071013->SetMaximum(420);
   Graph_Graph_Graph_Graph0100110071013->SetDirectory(0);
   Graph_Graph_Graph_Graph0100110071013->SetStats(0);
   Graph_Graph_Graph_Graph0100110071013->SetLineWidth(3);
   Graph_Graph_Graph_Graph0100110071013->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph0100110071013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph0100110071013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100110071013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100110071013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100110071013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100110071013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0100110071013);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1014[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph1_fy1014[50] = {
   276.3125,
   274.4832,
   272.2571,
   270.2913,
   268.4664,
   266.5014,
   264.2988,
   262.2539,
   259.7611,
   257.2177,
   254.6453,
   252.5213,
   250.7968,
   249.1164,
   247.4572,
   246.622,
   246.0662,
   245.2994,
   244.9024,
   244.1793,
   243.7463,
   243.2058,
   243.0695,
   242.5895,
   242.4985,
   242.3647,
   242.5734,
   242.3998,
   242.5294,
   242.3665,
   242.1506,
   241.6196,
   241.3881,
   241.4873,
   240.9826,
   240.6816,
   240.797,
   240.6728,
   240.2657,
   240.2052,
   240.2005,
   239.8092,
   239.6374,
   239.4099,
   239.2132,
   239.0144,
   238.816,
   238.7284,
   238.7284,
   238.7284};
   Double_t Graph1_fex1014[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1014[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Cell 2");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph_Graph1100210081014 = new TH1F("Graph_Graph_Graph_Graph1100210081014","Cell 2",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph_Graph1100210081014->SetMinimum(0);
   Graph_Graph_Graph_Graph1100210081014->SetMaximum(420);
   Graph_Graph_Graph_Graph1100210081014->SetDirectory(0);
   Graph_Graph_Graph_Graph1100210081014->SetStats(0);
   Graph_Graph_Graph_Graph1100210081014->SetLineWidth(3);
   Graph_Graph_Graph_Graph1100210081014->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph1100210081014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph1100210081014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1100210081014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1100210081014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1100210081014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph1100210081014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph1100210081014);
   
   gre->Draw("pl");
   
   Double_t Graph2_fx1015[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph2_fy1015[50] = {
   262.2928,
   260.3205,
   258.4861,
   257.2235,
   255.3388,
   253.3794,
   251.5402,
   249.7282,
   247.7603,
   245.7402,
   243.7664,
   242.0421,
   240.4045,
   238.9929,
   237.5949,
   236.5728,
   235.8323,
   235.2355,
   234.7077,
   234.4375,
   234.0844,
   233.6641,
   233.5133,
   233.3442,
   232.9595,
   232.8562,
   232.8551,
   232.6505,
   232.581,
   232.4856,
   232.2288,
   231.9932,
   231.6944,
   231.3866,
   231.1174,
   230.9091,
   230.7342,
   230.5538,
   230.5367,
   230.3472,
   230.2915,
   230.1983,
   230.1209,
   229.7557,
   229.5202,
   229.282,
   229.0446,
   228.9396,
   228.9396,
   228.9396};
   Double_t Graph2_fex1015[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1015[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
   gre->SetName("Graph2");
   gre->SetTitle("Cell 3");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph_Graph2100310091015 = new TH1F("Graph_Graph_Graph_Graph2100310091015","Cell 3",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph_Graph2100310091015->SetMinimum(0);
   Graph_Graph_Graph_Graph2100310091015->SetMaximum(420);
   Graph_Graph_Graph_Graph2100310091015->SetDirectory(0);
   Graph_Graph_Graph_Graph2100310091015->SetStats(0);
   Graph_Graph_Graph_Graph2100310091015->SetLineWidth(3);
   Graph_Graph_Graph_Graph2100310091015->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph2100310091015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph2100310091015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2100310091015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2100310091015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2100310091015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph2100310091015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph2100310091015);
   
   gre->Draw("pl");
   
   Double_t Graph3_fx1016[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph3_fy1016[50] = {
   110.4431,
   109.7305,
   108.8568,
   108.2016,
   107.393,
   106.587,
   105.8333,
   105.1102,
   104.3766,
   103.6433,
   102.9413,
   102.3852,
   101.8059,
   101.3048,
   100.8629,
   100.5156,
   100.229,
   99.95802,
   99.76066,
   99.58984,
   99.42957,
   99.23415,
   99.07208,
   98.90842,
   98.68116,
   98.44531,
   98.30309,
   98.16523,
   98.05472,
   97.93412,
   97.89369,
   97.73003,
   97.49347,
   97.29534,
   97.06621,
   96.80758,
   96.6267,
   96.43876,
   96.26008,
   96.04511,
   95.94075,
   95.80912,
   95.71723,
   95.58882,
   95.5237,
   95.45788,
   95.39223,
   95.36323,
   95.36323,
   95.36323};
   Double_t Graph3_fex1016[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1016[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph3_fx1016,Graph3_fy1016,Graph3_fex1016,Graph3_fey1016);
   gre->SetName("Graph3");
   gre->SetTitle("Cell 4");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph_Graph3100410101016 = new TH1F("Graph_Graph_Graph_Graph3100410101016","Cell 4",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph_Graph3100410101016->SetMinimum(0);
   Graph_Graph_Graph_Graph3100410101016->SetMaximum(420);
   Graph_Graph_Graph_Graph3100410101016->SetDirectory(0);
   Graph_Graph_Graph_Graph3100410101016->SetStats(0);
   Graph_Graph_Graph_Graph3100410101016->SetLineWidth(3);
   Graph_Graph_Graph_Graph3100410101016->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph3100410101016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph3100410101016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3100410101016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3100410101016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3100410101016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph3100410101016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph3100410101016);
   
   gre->Draw("pl");
   
   Double_t Graph4_fx1017[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph4_fy1017[50] = {
   269.0737,
   265.2847,
   261.5036,
   256.5163,
   253.012,
   249.8486,
   247.3821,
   245.2244,
   243.4622,
   241.885,
   240.444,
   239.1676,
   238.1826,
   237.2016,
   236.2395,
   235.3815,
   234.5891,
   233.8522,
   233.3468,
   233.0046,
   232.6188,
   232.5014,
   232.3629,
   232.0909,
   231.9033,
   231.5939,
   231.3616,
   231.1333,
   230.8422,
   230.684,
   230.3393,
   229.9001,
   229.448,
   229.0422,
   228.6336,
   228.175,
   227.9777,
   227.7258,
   227.568,
   227.3444,
   227.2427,
   227.0166,
   226.8247,
   226.5303,
   226.2454,
   225.9574,
   225.6701,
   225.5432,
   225.5432,
   225.5432};
   Double_t Graph4_fex1017[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph4_fey1017[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph4_fx1017,Graph4_fy1017,Graph4_fex1017,Graph4_fey1017);
   gre->SetName("Graph4");
   gre->SetTitle("Cell 5");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph_Graph4100510111017 = new TH1F("Graph_Graph_Graph_Graph4100510111017","Cell 5",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph_Graph4100510111017->SetMinimum(0);
   Graph_Graph_Graph_Graph4100510111017->SetMaximum(420);
   Graph_Graph_Graph_Graph4100510111017->SetDirectory(0);
   Graph_Graph_Graph_Graph4100510111017->SetStats(0);
   Graph_Graph_Graph_Graph4100510111017->SetLineWidth(3);
   Graph_Graph_Graph_Graph4100510111017->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph4100510111017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph4100510111017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4100510111017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4100510111017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4100510111017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph4100510111017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph4100510111017);
   
   gre->Draw("pl");
   
   Double_t Graph5_fx1018[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph5_fy1018[50] = {
   246.7934,
   242.6313,
   238.5322,
   234.6346,
   232.513,
   230.5905,
   229.2838,
   228.345,
   227.5746,
   226.9183,
   226.416,
   226.0511,
   225.7297,
   225.3935,
   225.0964,
   224.8592,
   224.573,
   224.0186,
   223.7369,
   223.38,
   223.0639,
   222.5543,
   222.3717,
   221.9765,
   221.6606,
   221.2595,
   221.1274,
   220.8899,
   220.6697,
   220.4526,
   220.2116,
   220.1006,
   219.7883,
   219.4301,
   219.1789,
   218.8636,
   218.5768,
   218.3113,
   218.1522,
   217.9199,
   217.8174,
   217.6717,
   217.5741,
   217.4948,
   217.4137,
   217.3316,
   217.2498,
   217.2137,
   217.2137,
   217.2137};
   Double_t Graph5_fex1018[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph5_fey1018[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph5_fx1018,Graph5_fy1018,Graph5_fex1018,Graph5_fey1018);
   gre->SetName("Graph5");
   gre->SetTitle("Cell 6");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph_Graph5100610121018 = new TH1F("Graph_Graph_Graph_Graph5100610121018","Cell 6",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph_Graph5100610121018->SetMinimum(0);
   Graph_Graph_Graph_Graph5100610121018->SetMaximum(420);
   Graph_Graph_Graph_Graph5100610121018->SetDirectory(0);
   Graph_Graph_Graph_Graph5100610121018->SetStats(0);
   Graph_Graph_Graph_Graph5100610121018->SetLineWidth(3);
   Graph_Graph_Graph_Graph5100610121018->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph_Graph5100610121018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph5100610121018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph5100610121018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph5100610121018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph5100610121018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph5100610121018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph5100610121018);
   
   gre->Draw("pl");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Evolution of Calibration Coefficient during Phase-1 (v34)");
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
