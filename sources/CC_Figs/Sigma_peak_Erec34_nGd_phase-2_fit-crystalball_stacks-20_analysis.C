void Sigma_peak_Erec34_nGd_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Wed Jun 19 11:25:17 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",1280,437,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.491963e+09,-2.793578,1.569851e+09,15.63761);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.1591479);
   canvas->SetRightMargin(0.07017544);
   canvas->SetTopMargin(0.08885018);
   canvas->SetBottomMargin(0.151568);
   canvas->SetFrameLineWidth(2);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(2);
   canvas->SetFrameBorderMode(0);
   
   Double_t sigma_evolution_fx1001[30] = {
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
   Double_t sigma_evolution_fy1001[30] = {
   6.133372,
   5.472731,
   5.861885,
   6.437116,
   6.502242,
   5.981939,
   5.66284,
   5.341062,
   5.902378,
   5.780206,
   6.328057,
   6.19658,
   6.08302,
   6.558967,
   5.945605,
   6.662012,
   5.648039,
   6.097826,
   6.363273,
   6.00384,
   5.943399,
   6.627962,
   6.733286,
   6.431275,
   6.70625,
   6.872617,
   6.894645,
   6.864396,
   6.034339,
   6.192935};
   Double_t sigma_evolution_fex1001[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1001[30] = {
   0.4500421,
   0.3640664,
   0.4072275,
   0.3810189,
   0.415279,
   0.3540491,
   0.3411382,
   0.2922147,
   0.3556721,
   0.325947,
   0.3642058,
   0.3591105,
   0.3538835,
   0.4598731,
   0.3860884,
   0.3959587,
   0.3229549,
   0.3713998,
   0.4690514,
   0.3768715,
   0.3943313,
   0.5152452,
   0.4554765,
   0.3756554,
   0.4524043,
   0.4169538,
   0.4389819,
   0.4939571,
   0.3481738,
   0.4380125};
   TGraphErrors *gre = new TGraphErrors(30,sigma_evolution_fx1001,sigma_evolution_fy1001,sigma_evolution_fex1001,sigma_evolution_fey1001);
   gre->SetName("sigma_evolution");
   gre->SetTitle("n-Gd peak resolution monitoring with v34 / Phase-2");
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
   
   TH1F *Graph_sigma_evolution1001 = new TH1F("Graph_sigma_evolution1001","n-Gd peak resolution monitoring with v34 / Phase-2",100,1.504359e+09,1.564385e+09);
   Graph_sigma_evolution1001->SetMinimum(0);
   Graph_sigma_evolution1001->SetMaximum(14);
   Graph_sigma_evolution1001->SetDirectory(0);
   Graph_sigma_evolution1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1001->SetLineColor(ci);
   Graph_sigma_evolution1001->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1001->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1001->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1001->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1001->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1001->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1001->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1001->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1001->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1001->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1001->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1001->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1001->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1001->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1001->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1001->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1001->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1001);
   
   gre->Draw("ap");
   
   Double_t sigma_evolution_fx1002[30] = {
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
   Double_t sigma_evolution_fy1002[30] = {
   4.563297,
   5.730611,
   5.134771,
   5.382354,
   5.003906,
   5.172703,
   5.217703,
   5.247491,
   5.398237,
   5.101191,
   5.355015,
   5.617269,
   5.33569,
   5.911818,
   5.235235,
   4.843061,
   5.434696,
   5.206568,
   5.668541,
   5.45443,
   5.516392,
   5.234406,
   5.567749,
   5.475413,
   5.655433,
   6.012342,
   5.502434,
   5.596146,
   5.674767,
   6.119471};
   Double_t sigma_evolution_fex1002[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1002[30] = {
   0.2718485,
   0.3077377,
   0.2447,
   0.2522319,
   0.2026327,
   0.2274528,
   0.2487144,
   0.2402445,
   0.2479223,
   0.2248425,
   0.2526315,
   0.2894493,
   0.2321778,
   0.2889217,
   0.2433828,
   0.2118278,
   0.3306967,
   0.2354099,
   0.3336004,
   0.2597592,
   0.2882594,
   0.228872,
   0.2785984,
   0.2399289,
   0.2857703,
   0.3037448,
   0.2568614,
   0.2749473,
   0.2657553,
   0.3253695};
   gre = new TGraphErrors(30,sigma_evolution_fx1002,sigma_evolution_fy1002,sigma_evolution_fex1002,sigma_evolution_fey1002);
   gre->SetName("sigma_evolution");
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
   
   TH1F *Graph_sigma_evolution1002 = new TH1F("Graph_sigma_evolution1002","Cell 2",100,1.504359e+09,1.564385e+09);
   Graph_sigma_evolution1002->SetMinimum(0);
   Graph_sigma_evolution1002->SetMaximum(14);
   Graph_sigma_evolution1002->SetDirectory(0);
   Graph_sigma_evolution1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1002->SetLineColor(ci);
   Graph_sigma_evolution1002->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1002->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1002->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1002->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1002->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1002->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1002->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1002->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1002->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1002->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1002->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1002->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1002->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1002->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1002->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1002->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1002->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1002);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1003[30] = {
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
   Double_t sigma_evolution_fy1003[30] = {
   5.019915,
   5.174256,
   4.759514,
   4.794205,
   4.872792,
   4.940011,
   4.966717,
   4.985454,
   5.174302,
   4.841522,
   4.743888,
   5.06362,
   4.825457,
   5.182988,
   5.351823,
   5.277864,
   5.424563,
   5.052505,
   5.096394,
   5.041437,
   5.251993,
   5.163629,
   5.081652,
   5.361033,
   5.611691,
   5.730859,
   5.682899,
   5.59488,
   5.535058,
   5.442635};
   Double_t sigma_evolution_fex1003[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1003[30] = {
   0.250902,
   0.2402038,
   0.2077523,
   0.1970201,
   0.198822,
   0.1968968,
   0.2008775,
   0.1988073,
   0.1997389,
   0.1908849,
   0.190732,
   0.2035661,
   0.1938215,
   0.2154385,
   0.2304065,
   0.2150596,
   0.2602253,
   0.2209742,
   0.2207179,
   0.205129,
   0.213276,
   0.2394051,
   0.2576618,
   0.2176328,
   0.2485815,
   0.2487199,
   0.2605846,
   0.2298571,
   0.2437645,
   0.2564943};
   gre = new TGraphErrors(30,sigma_evolution_fx1003,sigma_evolution_fy1003,sigma_evolution_fex1003,sigma_evolution_fey1003);
   gre->SetName("sigma_evolution");
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
   
   TH1F *Graph_sigma_evolution1003 = new TH1F("Graph_sigma_evolution1003","Cell 3",100,1.504359e+09,1.564385e+09);
   Graph_sigma_evolution1003->SetMinimum(0);
   Graph_sigma_evolution1003->SetMaximum(14);
   Graph_sigma_evolution1003->SetDirectory(0);
   Graph_sigma_evolution1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1003->SetLineColor(ci);
   Graph_sigma_evolution1003->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1003->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1003->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1003->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1003->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1003->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1003->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1003->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1003->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1003->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1003->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1003->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1003->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1003->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1003->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1003->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1003->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1003);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1004[30] = {
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
   Double_t sigma_evolution_fy1004[30] = {
   4.974142,
   5.343583,
   4.927039,
   5.157259,
   5.298477,
   5.047755,
   5.209041,
   5.015604,
   5.074708,
   5.148145,
   4.963751,
   5.031657,
   5.186412,
   5.204664,
   5.302393,
   5.288555,
   5.030488,
   6.031162,
   5.646851,
   5.396525,
   5.456307,
   5.269977,
   6.119449,
   5.638081,
   5.637246,
   5.239998,
   5.479431,
   5.524821,
   5.872179,
   6.151696};
   Double_t sigma_evolution_fex1004[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1004[30] = {
   0.2836384,
   0.2599596,
   0.2049826,
   0.2349235,
   0.2359316,
   0.1957608,
   0.225407,
   0.1967937,
   0.1900239,
   0.192696,
   0.2012538,
   0.1968839,
   0.22492,
   0.1997223,
   0.2207765,
   0.2076835,
   0.2151264,
   0.2592457,
   0.2795373,
   0.2156289,
   0.232022,
   0.2192214,
   0.3057719,
   0.2332202,
   0.2745583,
   0.2503062,
   0.2373493,
   0.2516233,
   0.27652,
   0.3306265};
   gre = new TGraphErrors(30,sigma_evolution_fx1004,sigma_evolution_fy1004,sigma_evolution_fex1004,sigma_evolution_fey1004);
   gre->SetName("sigma_evolution");
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
   
   TH1F *Graph_sigma_evolution1004 = new TH1F("Graph_sigma_evolution1004","Cell 4",100,1.504359e+09,1.564385e+09);
   Graph_sigma_evolution1004->SetMinimum(0);
   Graph_sigma_evolution1004->SetMaximum(14);
   Graph_sigma_evolution1004->SetDirectory(0);
   Graph_sigma_evolution1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1004->SetLineColor(ci);
   Graph_sigma_evolution1004->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1004->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1004->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1004->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1004->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1004->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1004->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1004->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1004->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1004->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1004->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1004->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1004->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1004->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1004->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1004->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1004->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1004);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1005[30] = {
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
   Double_t sigma_evolution_fy1005[30] = {
   5.229982,
   5.013016,
   5.606302,
   5.650843,
   5.270918,
   5.367535,
   5.599775,
   5.285955,
   5.579738,
   5.080898,
   5.499142,
   5.65545,
   5.462329,
   5.690873,
   5.443002,
   5.504252,
   5.615733,
   5.580915,
   5.391461,
   5.553586,
   5.743493,
   5.997045,
   5.992625,
   5.894874,
   5.643418,
   6.061,
   5.971089,
   5.16818,
   5.974111,
   6.068603};
   Double_t sigma_evolution_fex1005[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1005[30] = {
   0.2830603,
   0.2300049,
   0.2579972,
   0.2816322,
   0.2267288,
   0.2206935,
   0.2518018,
   0.2078082,
   0.2234797,
   0.2367021,
   0.2452224,
   0.2383555,
   0.22655,
   0.2298985,
   0.2423179,
   0.2309543,
   0.2571436,
   0.2407177,
   0.2313852,
   0.2549219,
   0.2854177,
   0.3058926,
   0.2693256,
   0.2414035,
   0.2483376,
   0.2631692,
   0.2510315,
   0.2157916,
   0.2775246,
   0.3089103};
   gre = new TGraphErrors(30,sigma_evolution_fx1005,sigma_evolution_fy1005,sigma_evolution_fex1005,sigma_evolution_fey1005);
   gre->SetName("sigma_evolution");
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
   
   TH1F *Graph_sigma_evolution1005 = new TH1F("Graph_sigma_evolution1005","Cell 5",100,1.504359e+09,1.564385e+09);
   Graph_sigma_evolution1005->SetMinimum(0);
   Graph_sigma_evolution1005->SetMaximum(14);
   Graph_sigma_evolution1005->SetDirectory(0);
   Graph_sigma_evolution1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1005->SetLineColor(ci);
   Graph_sigma_evolution1005->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1005->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1005->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1005->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1005->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1005->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1005->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1005->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1005->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1005->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1005->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1005->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1005->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1005->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1005->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1005->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1005->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1005);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1006[30] = {
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
   Double_t sigma_evolution_fy1006[30] = {
   6.617906,
   6.066179,
   6.67014,
   6.356104,
   6.572599,
   6.393432,
   6.44465,
   6.407283,
   6.759113,
   6.809272,
   7.132523,
   6.41467,
   6.369015,
   6.176892,
   6.929145,
   6.725859,
   6.82043,
   6.833945,
   6.97748,
   6.451581,
   6.860448,
   6.059294,
   6.544876,
   7.23397,
   6.407937,
   6.685836,
   6.749562,
   6.59755,
   6.09388,
   6.943546};
   Double_t sigma_evolution_fex1006[30] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1006[30] = {
   0.44678,
   0.3242883,
   0.4022461,
   0.2873336,
   0.3240595,
   0.3053836,
   0.3395173,
   0.2990747,
   0.293386,
   0.3077627,
   0.3960188,
   0.3176928,
   0.3437882,
   0.2995288,
   0.3306702,
   0.3618954,
   0.3432546,
   0.3178802,
   0.3710063,
   0.3156849,
   0.3453766,
   0.3056597,
   0.3675478,
   0.3344586,
   0.3259957,
   0.3159497,
   0.3276922,
   0.3047481,
   0.3166105,
   0.3627215};
   gre = new TGraphErrors(30,sigma_evolution_fx1006,sigma_evolution_fy1006,sigma_evolution_fex1006,sigma_evolution_fey1006);
   gre->SetName("sigma_evolution");
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
   
   TH1F *Graph_sigma_evolution1006 = new TH1F("Graph_sigma_evolution1006","Cell 6",100,1.504359e+09,1.564385e+09);
   Graph_sigma_evolution1006->SetMinimum(0);
   Graph_sigma_evolution1006->SetMaximum(14);
   Graph_sigma_evolution1006->SetDirectory(0);
   Graph_sigma_evolution1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1006->SetLineColor(ci);
   Graph_sigma_evolution1006->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1006->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1006->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1006->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1006->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1006->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1006->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1006->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1006->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1006->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1006->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1006->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1006->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1006->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1006->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1006->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1006->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1006);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("n-Gd peak resolution monitoring with v34 / Phase-2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5,0.67,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("sigma_evolution","Cell 1","lpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 2","lpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 3","lpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 4","lpflpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 5","lpflpflpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 6","lpflpflpflpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 1","lpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 2","lpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 3","lpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 4","lpflpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 5","lpflpflpflpflpf");
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
   entry=leg->AddEntry("sigma_evolution","Cell 6","lpflpflpflpflpflpf");
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
