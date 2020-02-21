void Erec_evol_phase2()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Mon Apr 29 14:59:33 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",1280,437,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.496201e+09,-4.184211,1.554908e+09,3.710526);
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
   
   Double_t mean_peak_evolution_over_mean_fx1001[23] = {
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
   1.547032e+09};
   Double_t mean_peak_evolution_over_mean_fy1001[23] = {
   0.1885614,
   0.06003431,
   0.1262867,
   -0.1676618,
   -0.03171083,
   -0.4562213,
   0.2198725,
   0.2033784,
   0.2021104,
   0.3048687,
   0.3698736,
   0.1820271,
   0.3216389,
   0.1768734,
   -0.2427083,
   -0.1141403,
   0.3222524,
   0.06015702,
   -0.2675568,
   -0.1121668,
   0.2211609,
   0.1891851,
   -0.4114736};
   Double_t mean_peak_evolution_over_mean_fex1001[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1001[23] = {
   0.2109831,
   0.2035265,
   0.2601469,
   0.1905332,
   0.2628669,
   0.2020521,
   0.2627141,
   0.2081932,
   0.2033941,
   0.2391635,
   0.2223413,
   0.2140473,
   0.2529342,
   0.2862037,
   0.1976404,
   0.1916891,
   0.2084843,
   0.2761895,
   0.2492453,
   0.247051,
   0.2616232,
   0.1981615,
   0.2639316};
   TGraphErrors *gre = new TGraphErrors(23,mean_peak_evolution_over_mean_fx1001,mean_peak_evolution_over_mean_fy1001,mean_peak_evolution_over_mean_fex1001,mean_peak_evolution_over_mean_fey1001);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("");
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1001 = new TH1F("Graph_mean_peak_evolution_over_mean1001","",100,1.505594e+09,1.550799e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1002[23] = {
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
   1.547032e+09};
   Double_t mean_peak_evolution_over_mean_fy1002[23] = {
   0.3572403,
   0.246847,
   0.002924732,
   -0.0256785,
   -0.2525401,
   -0.6857196,
   0.2276095,
   -0.10273,
   -0.04579695,
   -0.2989128,
   -0.09623989,
   0.1043979,
   0.2941917,
   0.4388279,
   -0.01816572,
   0.1348236,
   0.2304546,
   0.05182866,
   0.1074961,
   -0.313422,
   0.02489606,
   0.4652947,
   0.3144215};
   Double_t mean_peak_evolution_over_mean_fex1002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1002[23] = {
   0.328808,
   0.4849453,
   0.1915517,
   0.2125908,
   0.184425,
   0.2433946,
   0.2404575,
   0.2776324,
   0.1981711,
   0.3553753,
   0.2083042,
   0.2389362,
   0.2325495,
   0.2623484,
   0.1894732,
   0.1964065,
   0.231779,
   0.2825635,
   0.2993075,
   0.2152812,
   0.1963724,
   0.2492058,
   0.2878183};
   gre = new TGraphErrors(23,mean_peak_evolution_over_mean_fx1002,mean_peak_evolution_over_mean_fy1002,mean_peak_evolution_over_mean_fex1002,mean_peak_evolution_over_mean_fey1002);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1002 = new TH1F("Graph_mean_peak_evolution_over_mean1002","Cell 2",100,1.505594e+09,1.550799e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1003[23] = {
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
   1.547032e+09};
   Double_t mean_peak_evolution_over_mean_fy1003[23] = {
   0.1874152,
   0.6328254,
   -0.1941058,
   0.009745716,
   -0.227576,
   -0.4409759,
   0.09945215,
   0.2077283,
   -0.03665836,
   0.3274687,
   0.2360898,
   -0.3291014,
   0.3710549,
   0.01475306,
   -0.03890862,
   0.03323157,
   0.2562712,
   -0.2703006,
   -0.2348234,
   0.04970309,
   0.2476756,
   0.06780656,
   -0.09282371};
   Double_t mean_peak_evolution_over_mean_fex1003[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1003[23] = {
   0.1835486,
   0.2782125,
   0.238543,
   0.169009,
   0.2192128,
   0.3268384,
   0.2594636,
   0.1857755,
   0.1930148,
   0.2409575,
   0.2719444,
   0.1870306,
   0.323932,
   0.2845165,
   0.1944928,
   0.2520023,
   0.2985568,
   0.1879918,
   0.1980349,
   0.203887,
   0.2223756,
   0.2712353,
   0.3290598};
   gre = new TGraphErrors(23,mean_peak_evolution_over_mean_fx1003,mean_peak_evolution_over_mean_fy1003,mean_peak_evolution_over_mean_fex1003,mean_peak_evolution_over_mean_fey1003);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1003 = new TH1F("Graph_mean_peak_evolution_over_mean1003","Cell 3",100,1.505594e+09,1.550799e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1004[23] = {
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
   1.547032e+09};
   Double_t mean_peak_evolution_over_mean_fy1004[23] = {
   -0.03750139,
   0.7314041,
   0.08562676,
   0.1309583,
   -0.4965063,
   0.026143,
   -0.27984,
   -0.009429831,
   0.4935602,
   0.05041836,
   0.1789928,
   0.0342719,
   0.7044867,
   -0.06714204,
   -0.1372349,
   0.1280125,
   -0.1987028,
   -0.5717012,
   -0.2390639,
   -0.2322004,
   0.1019453,
   0.3212436,
   0.158301};
   Double_t mean_peak_evolution_over_mean_fex1004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1004[23] = {
   0.1893315,
   0.2275562,
   0.1679172,
   0.1930676,
   0.2055224,
   0.2657407,
   0.246643,
   0.2625015,
   0.2646816,
   0.2162282,
   0.2244307,
   0.2378043,
   0.2302411,
   0.1875188,
   0.2220898,
   0.1905238,
   0.1949326,
   0.1878632,
   0.2866906,
   0.2321323,
   0.2066326,
   0.1952849,
   0.4499601};
   gre = new TGraphErrors(23,mean_peak_evolution_over_mean_fx1004,mean_peak_evolution_over_mean_fy1004,mean_peak_evolution_over_mean_fex1004,mean_peak_evolution_over_mean_fey1004);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1004 = new TH1F("Graph_mean_peak_evolution_over_mean1004","Cell 4",100,1.505594e+09,1.550799e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1005[23] = {
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
   1.547032e+09};
   Double_t mean_peak_evolution_over_mean_fy1005[23] = {
   0.1996254,
   0.5685899,
   0.08008379,
   0.03390896,
   -0.1248808,
   0.2754963,
   0.3043442,
   0.196778,
   0.03930091,
   0.4725951,
   -0.1126328,
   0.01761197,
   0.2183962,
   -0.1591307,
   -0.09105489,
   -0.2149585,
   -0.2241773,
   -0.1380375,
   -0.4128651,
   0.2580381,
   -0.1655324,
   0.1280761,
   -0.5401715};
   Double_t mean_peak_evolution_over_mean_fex1005[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1005[23] = {
   0.1915435,
   0.2491161,
   0.2480398,
   0.2570959,
   0.1874271,
   0.2503312,
   0.2314128,
   0.2040192,
   0.2128955,
   0.2657372,
   0.1951484,
   0.2538139,
   0.2022969,
   0.1884107,
   0.1935258,
   0.2531472,
   0.2495139,
   0.1915706,
   0.1901298,
   0.2963609,
   0.1928051,
   0.1909907,
   0.2556033};
   gre = new TGraphErrors(23,mean_peak_evolution_over_mean_fx1005,mean_peak_evolution_over_mean_fy1005,mean_peak_evolution_over_mean_fex1005,mean_peak_evolution_over_mean_fey1005);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1005 = new TH1F("Graph_mean_peak_evolution_over_mean1005","Cell 5",100,1.505594e+09,1.550799e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1006[23] = {
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
   1.547032e+09};
   Double_t mean_peak_evolution_over_mean_fy1006[23] = {
   0.4758327,
   0.5034907,
   -0.01194462,
   -0.1028445,
   -0.006489184,
   -0.08939116,
   0.2024847,
   0.04690199,
   0.7015538,
   0.1042046,
   0.05232655,
   -0.4334848,
   -0.2342895,
   0.2230918,
   0.2278267,
   0.04042753,
   0.5719924,
   -0.7107236,
   -0.1778927,
   -0.074188,
   0.1597265,
   -0.01791471,
   0.0644726};
   Double_t mean_peak_evolution_over_mean_fex1006[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1006[23] = {
   0.2260984,
   0.173486,
   0.1865561,
   0.1742141,
   0.2293211,
   0.2061886,
   0.1711642,
   0.1822906,
   0.2382935,
   0.2006382,
   0.1835082,
   0.2178951,
   0.1955861,
   0.1715992,
   0.2348924,
   0.180921,
   0.2184615,
   0.2250218,
   0.2090807,
   0.1733029,
   0.206365,
   0.185135,
   0.3221318};
   gre = new TGraphErrors(23,mean_peak_evolution_over_mean_fx1006,mean_peak_evolution_over_mean_fy1006,mean_peak_evolution_over_mean_fex1006,mean_peak_evolution_over_mean_fey1006);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1006 = new TH1F("Graph_mean_peak_evolution_over_mean1006","Cell 6",100,1.505594e+09,1.550799e+09);
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
