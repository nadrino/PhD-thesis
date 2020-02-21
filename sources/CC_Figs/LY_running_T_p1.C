void LY_running_T_p1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 16:00:37 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.477366e+09,-108.5526,1.491749e+09,615.1316);
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
   Double_t Graph0_fy1001[50] = {
   288.2732,
   287.6237,
   286.9387,
   286.6415,
   286.1725,
   285.6475,
   285.4422,
   285.3321,
   284.9527,
   284.7593,
   284.5482,
   284.0074,
   283.5108,
   283.028,
   282.7693,
   282.242,
   282.1663,
   281.9959,
   282.368,
   282.4075,
   282.3507,
   282.4301,
   282.9095,
   282.7468,
   282.7189,
   282.9585,
   283.1393,
   282.7615,
   282.769,
   282.7938,
   282.5743,
   282.5417,
   282.593,
   282.6226,
   282.2635,
   282.1984,
   281.8975,
   281.3066,
   280.9125,
   280.9207,
   280.7279,
   280.8359,
   281.3456,
   281.7441,
   282.1265,
   282.5134,
   282.8994,
   283.0701,
   283.0701,
   283.0701};
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
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Evolution of Calibration Coefficient during Phase-1 (v34)",100,1.479667e+09,1.490742e+09);
   Graph_Graph01001->SetMinimum(0);
   Graph_Graph01001->SetMaximum(550);
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
   Graph_Graph01001->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph1_fy1002[50] = {
   309.9849,
   308.9079,
   308.2094,
   307.5499,
   307.1432,
   306.6782,
   306.5359,
   306.2861,
   305.9255,
   305.545,
   305.0951,
   305.0277,
   304.9557,
   304.8244,
   304.8655,
   305.053,
   304.9876,
   304.7393,
   305.1601,
   304.9273,
   304.7476,
   304.4634,
   305.1349,
   304.6119,
   304.7615,
   304.6494,
   305.3522,
   304.9575,
   305.4593,
   305.4871,
   305.2203,
   305.2824,
   305.1588,
   305.0248,
   304.8954,
   304.9992,
   304.7556,
   304.4193,
   304.1573,
   303.9709,
   303.8907,
   304.0734,
   304.2622,
   304.3039,
   304.2483,
   304.1918,
   304.1352,
   304.11,
   304.11,
   304.11};
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
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Cell 2",100,1.479667e+09,1.490742e+09);
   Graph_Graph11002->SetMinimum(0);
   Graph_Graph11002->SetMaximum(550);
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
   Graph_Graph11002->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph2_fy1003[50] = {
   299.6864,
   298.9818,
   298.6051,
   298.7308,
   298.6947,
   298.6409,
   298.7559,
   299.244,
   299.2915,
   299.5101,
   299.7195,
   299.6864,
   300.0084,
   299.9691,
   300.2561,
   300.2554,
   300.5196,
   300.3706,
   300.5021,
   300.6697,
   300.6144,
   300.8212,
   301.2109,
   301.4077,
   301.3744,
   301.4612,
   301.0997,
   300.9243,
   300.5819,
   300.8472,
   300.8757,
   300.7979,
   300.9618,
   300.7988,
   300.6653,
   300.4652,
   300.7639,
   300.846,
   300.9245,
   300.969,
   301.1454,
   300.8939,
   300.9513,
   300.8575,
   300.7795,
   300.7,
   300.6204,
   300.585,
   300.585,
   300.585};
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
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","Cell 3",100,1.479667e+09,1.490742e+09);
   Graph_Graph21003->SetMinimum(0);
   Graph_Graph21003->SetMaximum(550);
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
   Graph_Graph21003->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph3_fy1004[50] = {
   193.0804,
   193.5626,
   194.3092,
   195.1879,
   195.8318,
   196.2439,
   197.1895,
   197.6562,
   198.0931,
   198.3021,
   198.5166,
   199.6541,
   199.3502,
   199.6319,
   200.5933,
   201.358,
   201.9626,
   202.1583,
   203.3961,
   204.2515,
   203.8401,
   204.1158,
   204.4418,
   204.0014,
   203.5366,
   204.8798,
   205.4462,
   205.6589,
   206.6944,
   206.1734,
   206.0916,
   205.3234,
   205.0249,
   204.5502,
   204.8566,
   204.8163,
   204.9307,
   204.4161,
   204.4418,
   204.527,
   204.4604,
   204.636,
   204.8842,
   205.5142,
   205.2972,
   205.078,
   204.8595,
   204.763,
   204.763,
   204.763};
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
   
   TH1F *Graph_Graph31004 = new TH1F("Graph_Graph31004","Cell 4",100,1.479667e+09,1.490742e+09);
   Graph_Graph31004->SetMinimum(0);
   Graph_Graph31004->SetMaximum(550);
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
   Graph_Graph31004->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph4_fy1005[50] = {
   302.0315,
   301.1143,
   300.3329,
   299.6354,
   298.9346,
   298.2231,
   297.8251,
   297.4721,
   297.038,
   296.7358,
   296.373,
   296.2168,
   295.8312,
   295.589,
   295.319,
   295.2864,
   295.274,
   294.8263,
   295.0509,
   295.2891,
   295.3344,
   295.1311,
   295.3691,
   295.0703,
   294.6751,
   294.5407,
   294.47,
   294.5511,
   294.9473,
   294.9277,
   294.7734,
   294.5507,
   294.2953,
   293.9736,
   293.8913,
   293.8745,
   293.885,
   293.8202,
   293.6112,
   293.555,
   293.4506,
   293.4206,
   293.4898,
   293.689,
   293.6152,
   293.5397,
   293.4638,
   293.43,
   293.43,
   293.43};
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
   
   TH1F *Graph_Graph41005 = new TH1F("Graph_Graph41005","Cell 5",100,1.479667e+09,1.490742e+09);
   Graph_Graph41005->SetMinimum(0);
   Graph_Graph41005->SetMaximum(550);
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
   Graph_Graph41005->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph5_fy1006[50] = {
   300.3356,
   299.5321,
   298.5062,
   298.2462,
   297.7483,
   297.2396,
   296.7893,
   296.6426,
   296.4614,
   296.1674,
   296.0051,
   295.9954,
   295.5346,
   295.1815,
   295.204,
   295.2697,
   295.6079,
   295.3842,
   296.0015,
   295.9622,
   295.9927,
   295.9564,
   296.196,
   295.8402,
   295.7977,
   296.2217,
   296.3123,
   296.1989,
   296.4606,
   296.3814,
   296.0085,
   295.193,
   294.6536,
   294.5606,
   294.3733,
   294.1105,
   294.2311,
   294.012,
   293.9289,
   294.0011,
   294.262,
   294.5326,
   294.4366,
   294.6296,
   294.4598,
   294.2882,
   294.1171,
   294.0416,
   294.0416,
   294.0416};
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
   
   TH1F *Graph_Graph51006 = new TH1F("Graph_Graph51006","Cell 6",100,1.479667e+09,1.490742e+09);
   Graph_Graph51006->SetMinimum(0);
   Graph_Graph51006->SetMaximum(550);
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
   Graph_Graph51006->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
