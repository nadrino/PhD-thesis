void Erec33_nGd_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Wed May  1 15:54:22 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.495054e+09,-4.184211,1.558878e+09,3.710526);
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
   
   Double_t mean_peak_evolution_over_mean_fx1001[25] = {
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
   1.550315e+09};
   Double_t mean_peak_evolution_over_mean_fy1001[25] = {
   0.3585673,
   0.8273965,
   -0.159593,
   -0.7377225,
   -0.3995491,
   -0.544986,
   0.477832,
   0.5417274,
   0.431651,
   0.03921563,
   -0.1601295,
   -0.1536349,
   -0.06928565,
   0.288554,
   0.03165958,
   -0.1271317,
   0.3432954,
   0.1780667,
   -0.5282303,
   0.1682849,
   1.021605,
   0.2661484,
   -0.3206443,
   -0.6719095,
   -0.5286868};
   Double_t mean_peak_evolution_over_mean_fex1001[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1001[25] = {
   0.27505,
   0.2900932,
   0.2586891,
   0.1901095,
   0.2579059,
   0.290233,
   0.2909987,
   0.2127724,
   0.2809746,
   0.2821199,
   0.2682204,
   0.3128574,
   0.2410882,
   0.3244882,
   0.296403,
   0.239513,
   0.2480818,
   0.3336138,
   0.3732903,
   0.3290486,
   0.2925483,
   0.3248041,
   0.3077519,
   0.2854645,
   0.364359};
   TGraphErrors *gre = new TGraphErrors(25,mean_peak_evolution_over_mean_fx1001,mean_peak_evolution_over_mean_fy1001,mean_peak_evolution_over_mean_fex1001,mean_peak_evolution_over_mean_fey1001);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1001 = new TH1F("Graph_mean_peak_evolution_over_mean1001","",100,1.505266e+09,1.55441e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1002[25] = {
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
   1.550315e+09};
   Double_t mean_peak_evolution_over_mean_fy1002[25] = {
   0.6729444,
   -0.07142897,
   -0.2450364,
   -0.4753969,
   -0.3401997,
   -0.2574377,
   -0.2006847,
   0.186361,
   0.2066541,
   0.02594407,
   0.1863723,
   0.2947036,
   0.05930366,
   0.08028447,
   0.0695855,
   0.02729694,
   0.3485254,
   -0.02812576,
   0.016023,
   0.2602504,
   0.4158872,
   0.437364,
   0.2092584,
   -0.1691628,
   -0.004980355};
   Double_t mean_peak_evolution_over_mean_fex1002[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1002[25] = {
   0.2043064,
   0.2243784,
   0.1778156,
   0.3368949,
   0.1565484,
   0.1607621,
   0.206925,
   0.1605137,
   0.1901978,
   0.2863446,
   0.1922785,
   0.208248,
   0.1832262,
   0.1980969,
   0.253502,
   0.1821394,
   0.270663,
   0.1851282,
   0.2446063,
   0.1959438,
   0.237605,
   0.1821155,
   0.1931179,
   0.1638889,
   0.2813006};
   gre = new TGraphErrors(25,mean_peak_evolution_over_mean_fx1002,mean_peak_evolution_over_mean_fy1002,mean_peak_evolution_over_mean_fex1002,mean_peak_evolution_over_mean_fey1002);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1002 = new TH1F("Graph_mean_peak_evolution_over_mean1002","Cell 2",100,1.505266e+09,1.55441e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1003[25] = {
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
   1.550315e+09};
   Double_t mean_peak_evolution_over_mean_fy1003[25] = {
   0.5153182,
   0.1348599,
   -0.07000488,
   -0.1831764,
   -0.146697,
   -0.3434877,
   -0.006908158,
   -0.1716276,
   -0.09682465,
   0.2272166,
   0.3227894,
   -0.1688725,
   0.1144049,
   0.3387463,
   0.109502,
   0.04311042,
   0.189399,
   -0.03910312,
   -0.2171256,
   0.1563944,
   -0.08484852,
   0.3077208,
   0.4390196,
   -0.03586451,
   -0.3541594};
   Double_t mean_peak_evolution_over_mean_fex1003[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1003[25] = {
   0.1890997,
   0.2096928,
   0.1744836,
   0.2055357,
   0.1789796,
   0.1499546,
   0.1481288,
   0.1653309,
   0.1460373,
   0.1513562,
   0.1514744,
   0.1665948,
   0.1505343,
   0.1555447,
   0.2408736,
   0.1912033,
   0.1916762,
   0.2612891,
   0.1665603,
   0.1612248,
   0.1537648,
   0.1964372,
   0.2086747,
   0.1627265,
   0.3169263};
   gre = new TGraphErrors(25,mean_peak_evolution_over_mean_fx1003,mean_peak_evolution_over_mean_fy1003,mean_peak_evolution_over_mean_fex1003,mean_peak_evolution_over_mean_fey1003);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1003 = new TH1F("Graph_mean_peak_evolution_over_mean1003","Cell 3",100,1.505266e+09,1.55441e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1004[25] = {
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
   1.550315e+09};
   Double_t mean_peak_evolution_over_mean_fy1004[25] = {
   0.6406007,
   0.4194492,
   0.1658856,
   -0.3855574,
   -0.06407282,
   -0.456688,
   0.2110011,
   0.340649,
   0.2280292,
   0.005807783,
   0.02809525,
   0.2945538,
   0.3434646,
   0.1936802,
   0.02480675,
   -0.1978652,
   0.1341831,
   -0.5547462,
   -0.131656,
   0.2237272,
   0.1824069,
   0.1485985,
   0.009603071,
   -0.601596,
   -0.3200014};
   Double_t mean_peak_evolution_over_mean_fex1004[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1004[25] = {
   0.2294709,
   0.2197989,
   0.1650346,
   0.1758998,
   0.2153835,
   0.1625992,
   0.1757239,
   0.1436126,
   0.149461,
   0.171873,
   0.1456274,
   0.1546384,
   0.1897036,
   0.1400778,
   0.1716827,
   0.1975186,
   0.1865021,
   0.1553303,
   0.2108478,
   0.1452961,
   0.1744393,
   0.1566744,
   0.1989196,
   0.1616569,
   0.2605017};
   gre = new TGraphErrors(25,mean_peak_evolution_over_mean_fx1004,mean_peak_evolution_over_mean_fy1004,mean_peak_evolution_over_mean_fex1004,mean_peak_evolution_over_mean_fey1004);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1004 = new TH1F("Graph_mean_peak_evolution_over_mean1004","Cell 4",100,1.505266e+09,1.55441e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1005[25] = {
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
   1.550315e+09};
   Double_t mean_peak_evolution_over_mean_fy1005[25] = {
   0.5093806,
   0.1661725,
   -0.09517237,
   -0.2526176,
   -0.1139043,
   -0.1417823,
   0.2040987,
   0.2808308,
   0.2032867,
   0.441039,
   0.2630688,
   -0.07763585,
   0.01730943,
   -0.1282042,
   0.3220388,
   -0.2442271,
   0.1151079,
   -0.08506773,
   -0.05126905,
   0.2061512,
   0.5078244,
   0.02583523,
   -0.2266229,
   -0.4625596,
   -0.7689016};
   Double_t mean_peak_evolution_over_mean_fex1005[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1005[25] = {
   0.2126942,
   0.1598265,
   0.1691144,
   0.2261126,
   0.1728723,
   0.1501397,
   0.180037,
   0.1463251,
   0.1672323,
   0.2437753,
   0.1710414,
   0.2113488,
   0.1747052,
   0.1840902,
   0.1982524,
   0.1721591,
   0.196576,
   0.1912365,
   0.1736526,
   0.3090988,
   0.3761442,
   0.2283986,
   0.2012872,
   0.1681556,
   0.3913236};
   gre = new TGraphErrors(25,mean_peak_evolution_over_mean_fx1005,mean_peak_evolution_over_mean_fy1005,mean_peak_evolution_over_mean_fex1005,mean_peak_evolution_over_mean_fey1005);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1005 = new TH1F("Graph_mean_peak_evolution_over_mean1005","Cell 5",100,1.505266e+09,1.55441e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1006[25] = {
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
   1.550315e+09};
   Double_t mean_peak_evolution_over_mean_fy1006[25] = {
   0.7178659,
   0.2480498,
   0.1372998,
   -0.3608097,
   -0.1694492,
   -0.172334,
   0.2801624,
   0.01314167,
   0.2621964,
   0.1117528,
   -0.02852515,
   0.2509229,
   0.198825,
   0.6384324,
   -0.05469529,
   0.08966738,
   0.16632,
   -0.214797,
   0.02881144,
   -0.2288974,
   -0.1840805,
   0.3171214,
   0.1471424,
   -0.6788091,
   -0.150664};
   Double_t mean_peak_evolution_over_mean_fex1006[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1006[25] = {
   0.2921066,
   0.2193271,
   0.2874375,
   0.2404711,
   0.2278116,
   0.2027247,
   0.3038434,
   0.209388,
   0.1714436,
   0.1759583,
   0.3198053,
   0.2256092,
   0.2605133,
   0.2386703,
   0.2444891,
   0.2657687,
   0.3101268,
   0.2103186,
   0.2556263,
   0.2522806,
   0.2626563,
   0.2213869,
   0.3376732,
   0.2023898,
   0.4471735};
   gre = new TGraphErrors(25,mean_peak_evolution_over_mean_fx1006,mean_peak_evolution_over_mean_fy1006,mean_peak_evolution_over_mean_fex1006,mean_peak_evolution_over_mean_fey1006);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1006 = new TH1F("Graph_mean_peak_evolution_over_mean1006","Cell 6",100,1.505266e+09,1.55441e+09);
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
