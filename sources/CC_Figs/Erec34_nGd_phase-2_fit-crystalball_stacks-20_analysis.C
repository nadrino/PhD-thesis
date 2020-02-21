void Erec34_nGd_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Tue Jun 18 14:57:48 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.491886e+09,-4.184211,1.569842e+09,3.710526);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.16);
   canvas->SetRightMargin(0.07);
   canvas->SetBottomMargin(0.15);
   canvas->SetFrameLineWidth(2);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(2);
   canvas->SetFrameBorderMode(0);
   
   Double_t mean_peak_evolution_over_mean_fx1001[30] = {
   1.509361e+09,
   1.511089e+09,
   1.512817e+09,
   1.514545e+09,
   1.516273e+09,
   1.518001e+09,
   1.519729e+09,
   1.521457e+09,
   1.523182e+09,
   1.52491e+09,
   1.526638e+09,
   1.528366e+09,
   1.530094e+09,
   1.531822e+09,
   1.53355e+09,
   1.535278e+09,
   1.537006e+09,
   1.538734e+09,
   1.540462e+09,
   1.542193e+09,
   1.543921e+09,
   1.545649e+09,
   1.547377e+09,
   1.549105e+09,
   1.550833e+09,
   1.552561e+09,
   1.554286e+09,
   1.556014e+09,
   1.557742e+09,
   1.559383e+09};
   Double_t mean_peak_evolution_over_mean_fy1001[30] = {
   0.9191934,
   1.524041,
   0.445201,
   -0.2422433,
   -0.02522094,
   0.3473027,
   0.9265546,
   0.7796782,
   0.3085954,
   0.07463648,
   -0.06513377,
   -0.3123198,
   -0.06790438,
   0.1524914,
   -0.126597,
   -0.3181624,
   0.08932413,
   -0.1332511,
   -0.526131,
   0.1902481,
   0.649008,
   -0.2733227,
   -0.485882,
   -0.5499999,
   -0.367894,
   -0.6442582,
   -0.4656648,
   -0.2874539,
   0.007319085,
   -0.01370963};
   Double_t mean_peak_evolution_over_mean_fex1001[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1001[30] = {
   0.2658109,
   0.2826289,
   0.2925328,
   0.178053,
   0.2918778,
   0.2706639,
   0.2588576,
   0.2234376,
   0.2757552,
   0.2524681,
   0.2569227,
   0.2601065,
   0.2256847,
   0.2711754,
   0.2315471,
   0.2134694,
   0.2584961,
   0.2857151,
   0.2700081,
   0.3487699,
   0.3054269,
   0.3211885,
   0.2950645,
   0.2937504,
   0.2620941,
   0.2556531,
   0.2892075,
   0.2848755,
   0.2398992,
   0.3526947};
   TGraphErrors *gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1001,mean_peak_evolution_over_mean_fy1001,mean_peak_evolution_over_mean_fex1001,mean_peak_evolution_over_mean_fey1001);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("n-Gd peak monitoring with v34 / Phase-2");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_mean_peak_evolution_over_mean1001 = new TH1F("Graph_mean_peak_evolution_over_mean1001","n-Gd peak monitoring with v34 / Phase-2",100,1.504359e+09,1.564385e+09);
   Graph_mean_peak_evolution_over_mean1001->SetMinimum(-3);
   Graph_mean_peak_evolution_over_mean1001->SetMaximum(3);
   Graph_mean_peak_evolution_over_mean1001->SetDirectory(0);
   Graph_mean_peak_evolution_over_mean1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mean_peak_evolution_over_mean1001->SetLineColor(ci);
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetTimeDisplay(1);
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetNdivisions(5);
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1001->GetXaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1001->GetYaxis()->SetTitle("Relative Deviation to Mean (%)");
   Graph_mean_peak_evolution_over_mean1001->GetYaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1001->GetYaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1001->GetYaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1001->GetYaxis()->SetTitleOffset(0);
   Graph_mean_peak_evolution_over_mean1001->GetYaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1001->GetZaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1001->GetZaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1001->GetZaxis()->SetTitleSize(0.035);
   Graph_mean_peak_evolution_over_mean1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_mean_peak_evolution_over_mean1001);
   
   gre->Draw("ap");
   
   Double_t mean_peak_evolution_over_mean_fx1002[30] = {
   1.509361e+09,
   1.511089e+09,
   1.512817e+09,
   1.514545e+09,
   1.516273e+09,
   1.518001e+09,
   1.519729e+09,
   1.521457e+09,
   1.523182e+09,
   1.52491e+09,
   1.526638e+09,
   1.528366e+09,
   1.530094e+09,
   1.531822e+09,
   1.53355e+09,
   1.535278e+09,
   1.537006e+09,
   1.538734e+09,
   1.540462e+09,
   1.542193e+09,
   1.543921e+09,
   1.545649e+09,
   1.547377e+09,
   1.549105e+09,
   1.550833e+09,
   1.552561e+09,
   1.554286e+09,
   1.556014e+09,
   1.557742e+09,
   1.559383e+09};
   Double_t mean_peak_evolution_over_mean_fy1002[30] = {
   1.382977,
   0.6972625,
   0.4291527,
   0.1988165,
   0.1756597,
   0.3178805,
   0.3745639,
   0.2537045,
   0.2013946,
   -0.2216193,
   0.07245556,
   0.09540516,
   -0.09509725,
   -0.1785744,
   -0.1306841,
   -0.03328064,
   0.06545789,
   -0.03599685,
   0.1304626,
   0.06697712,
   -0.09238105,
   0.1336392,
   -0.04743712,
   -0.1907858,
   -0.2211589,
   -0.3449418,
   -0.1879775,
   -0.2883504,
   -0.2228623,
   -0.5277214};
   Double_t mean_peak_evolution_over_mean_fex1002[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1002[30] = {
   0.2043083,
   0.1955725,
   0.2306865,
   0.2026772,
   0.1494412,
   0.1647728,
   0.2783741,
   0.1711793,
   0.1751965,
   0.2743222,
   0.1780742,
   0.1987619,
   0.1762085,
   0.1863778,
   0.2088813,
   0.1963778,
   0.3064774,
   0.174602,
   0.2512695,
   0.2288049,
   0.1945816,
   0.1638415,
   0.1897809,
   0.1758417,
   0.2212035,
   0.1646752,
   0.179159,
   0.1910038,
   0.2150103,
   0.2250704};
   gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1002,mean_peak_evolution_over_mean_fy1002,mean_peak_evolution_over_mean_fex1002,mean_peak_evolution_over_mean_fey1002);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("Cell 2");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_mean_peak_evolution_over_mean1002 = new TH1F("Graph_mean_peak_evolution_over_mean1002","Cell 2",100,1.504359e+09,1.564385e+09);
   Graph_mean_peak_evolution_over_mean1002->SetMinimum(-3);
   Graph_mean_peak_evolution_over_mean1002->SetMaximum(3);
   Graph_mean_peak_evolution_over_mean1002->SetDirectory(0);
   Graph_mean_peak_evolution_over_mean1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mean_peak_evolution_over_mean1002->SetLineColor(ci);
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetTimeDisplay(1);
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetNdivisions(5);
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1002->GetXaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1002->GetYaxis()->SetTitle("Relative Deviation to Mean (%)");
   Graph_mean_peak_evolution_over_mean1002->GetYaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1002->GetYaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1002->GetYaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1002->GetYaxis()->SetTitleOffset(0);
   Graph_mean_peak_evolution_over_mean1002->GetYaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1002->GetZaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1002->GetZaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1002->GetZaxis()->SetTitleSize(0.035);
   Graph_mean_peak_evolution_over_mean1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_mean_peak_evolution_over_mean1002);
   
   gre->Draw("p");
   
   Double_t mean_peak_evolution_over_mean_fx1003[30] = {
   1.509361e+09,
   1.511089e+09,
   1.512817e+09,
   1.514545e+09,
   1.516273e+09,
   1.518001e+09,
   1.519729e+09,
   1.521457e+09,
   1.523182e+09,
   1.52491e+09,
   1.526638e+09,
   1.528366e+09,
   1.530094e+09,
   1.531822e+09,
   1.53355e+09,
   1.535278e+09,
   1.537006e+09,
   1.538734e+09,
   1.540462e+09,
   1.542193e+09,
   1.543921e+09,
   1.545649e+09,
   1.547377e+09,
   1.549105e+09,
   1.550833e+09,
   1.552561e+09,
   1.554286e+09,
   1.556014e+09,
   1.557742e+09,
   1.559383e+09};
   Double_t mean_peak_evolution_over_mean_fy1003[30] = {
   0.8627437,
   0.7639347,
   0.7262477,
   0.4185916,
   0.1780916,
   0.1525187,
   0.2634993,
   -0.1204502,
   -0.1317712,
   0.2333865,
   0.4731854,
   0.1025338,
   0.1182683,
   -0.01534278,
   -0.1856409,
   -0.2227992,
   0.09240811,
   -0.1577234,
   -0.1048421,
   0.1343936,
   -0.3127467,
   0.006874016,
   -0.02665231,
   -0.2295113,
   -0.3526059,
   -0.4492427,
   -0.2590035,
   -0.3084827,
   -0.4369332,
   -0.08760197};
   Double_t mean_peak_evolution_over_mean_fex1003[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1003[30] = {
   0.1899635,
   0.1838028,
   0.1648965,
   0.1706153,
   0.1623942,
   0.1756812,
   0.1503306,
   0.167888,
   0.1391962,
   0.1578457,
   0.1509241,
   0.168772,
   0.1661695,
   0.1546116,
   0.1516033,
   0.1764604,
   0.19379,
   0.1748742,
   0.1603607,
   0.1587209,
   0.1552847,
   0.2413947,
   0.2175915,
   0.1548156,
   0.2022587,
   0.1538519,
   0.1808954,
   0.1512668,
   0.1680887,
   0.1922332};
   gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1003,mean_peak_evolution_over_mean_fy1003,mean_peak_evolution_over_mean_fex1003,mean_peak_evolution_over_mean_fey1003);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("Cell 3");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_mean_peak_evolution_over_mean1003 = new TH1F("Graph_mean_peak_evolution_over_mean1003","Cell 3",100,1.504359e+09,1.564385e+09);
   Graph_mean_peak_evolution_over_mean1003->SetMinimum(-3);
   Graph_mean_peak_evolution_over_mean1003->SetMaximum(3);
   Graph_mean_peak_evolution_over_mean1003->SetDirectory(0);
   Graph_mean_peak_evolution_over_mean1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mean_peak_evolution_over_mean1003->SetLineColor(ci);
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetTimeDisplay(1);
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetNdivisions(5);
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1003->GetXaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1003->GetYaxis()->SetTitle("Relative Deviation to Mean (%)");
   Graph_mean_peak_evolution_over_mean1003->GetYaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1003->GetYaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1003->GetYaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1003->GetYaxis()->SetTitleOffset(0);
   Graph_mean_peak_evolution_over_mean1003->GetYaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1003->GetZaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1003->GetZaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1003->GetZaxis()->SetTitleSize(0.035);
   Graph_mean_peak_evolution_over_mean1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_mean_peak_evolution_over_mean1003);
   
   gre->Draw("p");
   
   Double_t mean_peak_evolution_over_mean_fx1004[30] = {
   1.509361e+09,
   1.511089e+09,
   1.512817e+09,
   1.514545e+09,
   1.516273e+09,
   1.518001e+09,
   1.519729e+09,
   1.521457e+09,
   1.523182e+09,
   1.52491e+09,
   1.526638e+09,
   1.528366e+09,
   1.530094e+09,
   1.531822e+09,
   1.53355e+09,
   1.535278e+09,
   1.537006e+09,
   1.538734e+09,
   1.540462e+09,
   1.542193e+09,
   1.543921e+09,
   1.545649e+09,
   1.547377e+09,
   1.549105e+09,
   1.550833e+09,
   1.552561e+09,
   1.554286e+09,
   1.556014e+09,
   1.557742e+09,
   1.559383e+09};
   Double_t mean_peak_evolution_over_mean_fy1004[30] = {
   1.107199,
   0.8073064,
   0.8271381,
   -0.04969219,
   0.1667069,
   -0.1178313,
   0.4333241,
   0.3741859,
   0.06121798,
   -0.118637,
   -0.03326745,
   0.3523629,
   0.2982545,
   -0.1935209,
   -0.2641346,
   -0.2324592,
   0.07845993,
   -0.2755986,
   0.02536439,
   0.03588451,
   -0.02034174,
   -0.1687054,
   -0.3667806,
   -0.5465665,
   -0.07012241,
   0.2413146,
   -0.2918852,
   -0.08414156,
   -0.2445216,
   -0.3678741};
   Double_t mean_peak_evolution_over_mean_fex1004[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1004[30] = {
   0.3327934,
   0.1914048,
   0.1606673,
   0.3345864,
   0.2214454,
   0.1560764,
   0.1730941,
   0.1555322,
   0.1709729,
   0.1699758,
   0.1530795,
   0.1526246,
   0.191679,
   0.135772,
   0.1570559,
   0.1692045,
   0.1797236,
   0.1632652,
   0.2127797,
   0.1494544,
   0.1526901,
   0.1599317,
   0.1930955,
   0.1681289,
   0.199624,
   0.2295909,
   0.1713925,
   0.1941352,
   0.1902331,
   0.2235992};
   gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1004,mean_peak_evolution_over_mean_fy1004,mean_peak_evolution_over_mean_fex1004,mean_peak_evolution_over_mean_fey1004);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("Cell 4");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_mean_peak_evolution_over_mean1004 = new TH1F("Graph_mean_peak_evolution_over_mean1004","Cell 4",100,1.504359e+09,1.564385e+09);
   Graph_mean_peak_evolution_over_mean1004->SetMinimum(-3);
   Graph_mean_peak_evolution_over_mean1004->SetMaximum(3);
   Graph_mean_peak_evolution_over_mean1004->SetDirectory(0);
   Graph_mean_peak_evolution_over_mean1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mean_peak_evolution_over_mean1004->SetLineColor(ci);
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetTimeDisplay(1);
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetNdivisions(5);
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1004->GetXaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1004->GetYaxis()->SetTitle("Relative Deviation to Mean (%)");
   Graph_mean_peak_evolution_over_mean1004->GetYaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1004->GetYaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1004->GetYaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1004->GetYaxis()->SetTitleOffset(0);
   Graph_mean_peak_evolution_over_mean1004->GetYaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1004->GetZaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1004->GetZaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1004->GetZaxis()->SetTitleSize(0.035);
   Graph_mean_peak_evolution_over_mean1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_mean_peak_evolution_over_mean1004);
   
   gre->Draw("p");
   
   Double_t mean_peak_evolution_over_mean_fx1005[30] = {
   1.509361e+09,
   1.511089e+09,
   1.512817e+09,
   1.514545e+09,
   1.516273e+09,
   1.518001e+09,
   1.519729e+09,
   1.521457e+09,
   1.523182e+09,
   1.52491e+09,
   1.526638e+09,
   1.528366e+09,
   1.530094e+09,
   1.531822e+09,
   1.53355e+09,
   1.535278e+09,
   1.537006e+09,
   1.538734e+09,
   1.540462e+09,
   1.542193e+09,
   1.543921e+09,
   1.545649e+09,
   1.547377e+09,
   1.549105e+09,
   1.550833e+09,
   1.552561e+09,
   1.554286e+09,
   1.556014e+09,
   1.557742e+09,
   1.559383e+09};
   Double_t mean_peak_evolution_over_mean_fy1005[30] = {
   1.210848,
   0.8999714,
   0.5183756,
   0.2460774,
   0.1591262,
   0.30601,
   0.458766,
   0.2466427,
   0.01444579,
   0.4833274,
   0.2663934,
   -0.09534793,
   -0.02063698,
   -0.253953,
   0.2696928,
   -0.2347676,
   0.03629609,
   -0.09414813,
   -0.0450484,
   -0.07221708,
   0.2797066,
   -0.2039303,
   -0.4470755,
   -0.5647718,
   -0.2607365,
   -0.5743702,
   -0.2901894,
   -0.1963508,
   -0.4252136,
   -0.08487272};
   Double_t mean_peak_evolution_over_mean_fex1005[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1005[30] = {
   0.2061201,
   0.1695247,
   0.164361,
   0.2007187,
   0.1623015,
   0.1544236,
   0.1806564,
   0.1613169,
   0.1768846,
   0.2266848,
   0.1754439,
   0.1675916,
   0.1554944,
   0.1863583,
   0.1714636,
   0.1607013,
   0.2064722,
   0.1811797,
   0.164174,
   0.1803341,
   0.226908,
   0.2173912,
   0.1725801,
   0.1495484,
   0.2044261,
   0.1770795,
   0.1584853,
   0.1813187,
   0.2095405,
   0.2384738};
   gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1005,mean_peak_evolution_over_mean_fy1005,mean_peak_evolution_over_mean_fex1005,mean_peak_evolution_over_mean_fey1005);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("Cell 5");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_mean_peak_evolution_over_mean1005 = new TH1F("Graph_mean_peak_evolution_over_mean1005","Cell 5",100,1.504359e+09,1.564385e+09);
   Graph_mean_peak_evolution_over_mean1005->SetMinimum(-3);
   Graph_mean_peak_evolution_over_mean1005->SetMaximum(3);
   Graph_mean_peak_evolution_over_mean1005->SetDirectory(0);
   Graph_mean_peak_evolution_over_mean1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mean_peak_evolution_over_mean1005->SetLineColor(ci);
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetTimeDisplay(1);
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetNdivisions(5);
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1005->GetXaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1005->GetYaxis()->SetTitle("Relative Deviation to Mean (%)");
   Graph_mean_peak_evolution_over_mean1005->GetYaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1005->GetYaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1005->GetYaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1005->GetYaxis()->SetTitleOffset(0);
   Graph_mean_peak_evolution_over_mean1005->GetYaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1005->GetZaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1005->GetZaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1005->GetZaxis()->SetTitleSize(0.035);
   Graph_mean_peak_evolution_over_mean1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_mean_peak_evolution_over_mean1005);
   
   gre->Draw("p");
   
   Double_t mean_peak_evolution_over_mean_fx1006[30] = {
   1.509361e+09,
   1.511089e+09,
   1.512817e+09,
   1.514545e+09,
   1.516273e+09,
   1.518001e+09,
   1.519729e+09,
   1.521457e+09,
   1.523182e+09,
   1.52491e+09,
   1.526638e+09,
   1.528366e+09,
   1.530094e+09,
   1.531822e+09,
   1.53355e+09,
   1.535278e+09,
   1.537006e+09,
   1.538734e+09,
   1.540462e+09,
   1.542193e+09,
   1.543921e+09,
   1.545649e+09,
   1.547377e+09,
   1.549105e+09,
   1.550833e+09,
   1.552561e+09,
   1.554286e+09,
   1.556014e+09,
   1.557742e+09,
   1.559383e+09};
   Double_t mean_peak_evolution_over_mean_fy1006[30] = {
   1.355753,
   0.9728196,
   0.7221978,
   0.09674551,
   0.07832295,
   0.3521987,
   0.6166932,
   -0.02321806,
   -0.175254,
   -0.2344853,
   -0.3378439,
   0.2328215,
   0.2744394,
   0.5032379,
   -0.38889,
   -0.09731872,
   -0.06800211,
   -0.1787485,
   -0.05462201,
   -0.1281481,
   -0.765456,
   0.2857907,
   0.1938304,
   -0.508408,
   -0.04389213,
   -0.185808,
   -0.2216915,
   -0.3939442,
   0.09804717,
   -0.3620946};
   Double_t mean_peak_evolution_over_mean_fex1006[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1006[30] = {
   0.2877468,
   0.2433319,
   0.2937788,
   0.2031896,
   0.1962959,
   0.207254,
   0.2499045,
   0.2007104,
   0.1660486,
   0.1578794,
   0.2669956,
   0.3086818,
   0.2746263,
   0.2508893,
   0.22539,
   0.2150651,
   0.2580093,
   0.1897048,
   0.2527612,
   0.2446134,
   0.1340524,
   0.2521956,
   0.3180949,
   0.1921262,
   0.2844286,
   0.2330114,
   0.2080447,
   0.2031202,
   0.2648533,
   0.2261238};
   gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1006,mean_peak_evolution_over_mean_fy1006,mean_peak_evolution_over_mean_fex1006,mean_peak_evolution_over_mean_fey1006);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("Cell 6");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_mean_peak_evolution_over_mean1006 = new TH1F("Graph_mean_peak_evolution_over_mean1006","Cell 6",100,1.504359e+09,1.564385e+09);
   Graph_mean_peak_evolution_over_mean1006->SetMinimum(-3);
   Graph_mean_peak_evolution_over_mean1006->SetMaximum(3);
   Graph_mean_peak_evolution_over_mean1006->SetDirectory(0);
   Graph_mean_peak_evolution_over_mean1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mean_peak_evolution_over_mean1006->SetLineColor(ci);
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetTimeDisplay(1);
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetNdivisions(5);
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1006->GetXaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1006->GetYaxis()->SetTitle("Relative Deviation to Mean (%)");
   Graph_mean_peak_evolution_over_mean1006->GetYaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1006->GetYaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1006->GetYaxis()->SetTitleSize(0.05);
   Graph_mean_peak_evolution_over_mean1006->GetYaxis()->SetTitleOffset(0);
   Graph_mean_peak_evolution_over_mean1006->GetYaxis()->SetTitleFont(42);
   Graph_mean_peak_evolution_over_mean1006->GetZaxis()->SetLabelFont(42);
   Graph_mean_peak_evolution_over_mean1006->GetZaxis()->SetLabelSize(0.035);
   Graph_mean_peak_evolution_over_mean1006->GetZaxis()->SetTitleSize(0.035);
   Graph_mean_peak_evolution_over_mean1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_mean_peak_evolution_over_mean1006);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("n-Gd peak monitoring with v34 / Phase-2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5,0.67,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 1","lpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 2","lpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 3","lpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 4","lpflpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 5","lpflpflpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 6","lpflpflpflpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.5,0.67,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 1","lpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 2","lpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 3","lpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 4","lpflpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 5","lpflpflpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mean_peak_evolution_over_mean","Cell 6","lpflpflpflpflpflpf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
