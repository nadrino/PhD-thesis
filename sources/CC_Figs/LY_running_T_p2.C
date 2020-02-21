void LY_running_T_p2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 16:04:57 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.494626e+09,-108.5526,1.561132e+09,615.1316);
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
   278.3992,
   278.4758,
   278.748,
   279.1181,
   279.1678,
   279.4649,
   279.2793,
   279.6775,
   279.3937,
   278.7301,
   278.4733,
   278.5886,
   278.6692,
   278.6036,
   277.6486,
   277.2101,
   276.8579,
   276.5766,
   276.125,
   275.8073,
   276.2427,
   276.1646,
   276.191,
   274.9376,
   273.9826,
   273.7014,
   272.9618,
   273.3482,
   273.2481,
   273.0676,
   272.921,
   272.1364,
   271.9815,
   270.7663,
   270.0882,
   268.8502,
   268.583,
   268.4636,
   269.3036,
   269.7564,
   270.1169,
   269.7966,
   269.4764,
   269.0029,
   268.6392,
   268.3998,
   268.4377,
   268.6232,
   268.9483,
   268.5573};
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
   297.5294,
   297.2108,
   297.041,
   296.9995,
   296.9388,
   297.0548,
   296.7701,
   297.2029,
   296.9075,
   296.1032,
   295.8207,
   295.5795,
   295.7327,
   295.421,
   295.0977,
   295.0241,
   294.4344,
   294.2207,
   293.2618,
   292.6239,
   292.8135,
   292.6378,
   291.955,
   291.1526,
   290.3848,
   290.57,
   290.2236,
   290.173,
   289.7267,
   289.1447,
   288.4354,
   287.98,
   287.5062,
   287.0793,
   286.2543,
   285.7575,
   285.6607,
   285.568,
   285.6842,
   285.5713,
   285.1242,
   284.4325,
   284.2875,
   284.4586,
   283.9095,
   283.4055,
   283.2608,
   283.292,
   283.5719,
   283.2591};
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
   305.698,
   305.9117,
   306.0951,
   306.5383,
   306.7866,
   307.3168,
   307.1505,
   307.6612,
   306.6098,
   305.671,
   305.3698,
   305.7064,
   306.0436,
   305.8723,
   305.4764,
   304.5723,
   304.1723,
   303.2604,
   302.5507,
   302.1025,
   301.6675,
   301.2203,
   300.5892,
   299.9695,
   299.5183,
   299.4079,
   299.0989,
   298.7518,
   298.4889,
   297.9437,
   298.1326,
   297.2605,
   296.9083,
   295.5555,
   294.4878,
   293.6478,
   293.4287,
   293.3988,
   293.195,
   293.3306,
   293.3351,
   292.9173,
   292.7187,
   292.663,
   291.9162,
   291.2058,
   290.9221,
   290.7682,
   290.9308,
   290.8264};
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
   298.5566,
   297.8733,
   297.3505,
   297.3276,
   297.2115,
   297.7076,
   297.4987,
   298.1468,
   297.2089,
   296.267,
   295.8322,
   295.657,
   295.7241,
   295.2172,
   294.673,
   293.9841,
   293.4994,
   293.0669,
   292.4729,
   292.2724,
   292.1486,
   291.9718,
   291.1003,
   290.2121,
   289.4958,
   289.5444,
   289.1668,
   288.9363,
   288.4262,
   288.0706,
   288.0274,
   287.2622,
   286.751,
   285.2934,
   284.1955,
   283.5458,
   283.6244,
   283.4779,
   283.362,
   283.4824,
   283.4181,
   283.2704,
   283.062,
   282.8631,
   282.2841,
   281.5203,
   281.3966,
   281.2836,
   281.2136,
   281.1687};
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
   298.8042,
   299.0151,
   298.7602,
   298.8941,
   298.8884,
   299.0851,
   299.1781,
   299.8799,
   299.1368,
   298.3372,
   297.9109,
   298.1579,
   298.2439,
   298.1326,
   297.6722,
   297.0684,
   296.4302,
   295.8484,
   294.978,
   294.9566,
   294.8047,
   294.3628,
   293.7419,
   292.9029,
   292.3627,
   292.4309,
   291.7622,
   291.3222,
   291.0453,
   290.7496,
   291.0486,
   290.6435,
   290.3778,
   289.1924,
   288.1281,
   287.2905,
   287.2919,
   287.092,
   287.0613,
   287.01,
   286.6161,
   286.2515,
   285.948,
   286.1282,
   286.068,
   285.8828,
   285.9733,
   285.8107,
   285.4272,
   285.2472};
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
   276.633,
   276.7985,
   276.9512,
   277.3928,
   277.8242,
   278.4956,
   278.7814,
   279.6056,
   278.9901,
   278.3604,
   277.9873,
   278.0039,
   278.3685,
   278.3607,
   277.9367,
   277.7807,
   277.2858,
   277.1187,
   276.4542,
   276.417,
   276.2658,
   275.6513,
   274.3935,
   273.9923,
   273.2333,
   273.6411,
   273.8546,
   273.7147,
   273.1038,
   272.4669,
   272.4131,
   272.2115,
   272.1441,
   271.0093,
   269.4627,
   268.4965,
   268.7411,
   268.6591,
   269.0187,
   268.9427,
   268.7832,
   268.9038,
   268.2601,
   268.4486,
   268.1037,
   267.8208,
   268.3857,
   268.5423,
   268.5051,
   268.0269};
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
