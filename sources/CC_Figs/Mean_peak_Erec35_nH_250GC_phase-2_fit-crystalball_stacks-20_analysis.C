void Mean_peak_Erec35_nH_250GC_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Thu Jun 20 10:11:02 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.491856e+09,-4.184211,1.569947e+09,3.710526);
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
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545822e+09,
   1.54755e+09,
   1.549278e+09,
   1.551006e+09,
   1.552734e+09,
   1.554458e+09,
   1.556186e+09,
   1.557914e+09,
   1.55947e+09};
   Double_t mean_peak_evolution_over_mean_fy1001[30] = {
   0.5288928,
   0.5091945,
   0.2916827,
   0.1710011,
   0.1611674,
   0.1997129,
   0.5081486,
   0.2402477,
   -0.06219962,
   0.1794096,
   0.1797582,
   0.2230206,
   -0.2865305,
   0.07914411,
   -0.05053036,
   -0.2961592,
   -0.07296652,
   -0.1791281,
   -0.2660221,
   -0.0812519,
   -0.1302362,
   -0.2051533,
   -0.2815675,
   0.04501817,
   -0.2722772,
   -0.2780195,
   -0.1314051,
   -0.3402829,
   -0.03530289,
   0.2009331};
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
   0.1289632,
   0.1212227,
   0.1172205,
   0.1132715,
   0.1150249,
   0.117651,
   0.1171765,
   0.1272937,
   0.12725,
   0.1378217,
   0.1228864,
   0.1420078,
   0.1401414,
   0.1177104,
   0.1177951,
   0.1200855,
   0.1381911,
   0.1310627,
   0.1338459,
   0.1251408,
   0.126088,
   0.1195131,
   0.1458593,
   0.1231889,
   0.1253002,
   0.1181883,
   0.1188224,
   0.1267541,
   0.126037,
   0.1362546};
   TGraphErrors *gre = new TGraphErrors(30,mean_peak_evolution_over_mean_fx1001,mean_peak_evolution_over_mean_fy1001,mean_peak_evolution_over_mean_fex1001,mean_peak_evolution_over_mean_fey1001);
   gre->SetName("mean_peak_evolution_over_mean");
   gre->SetTitle("n-H peak monitoring with v35 / Phase-2");
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1001 = new TH1F("Graph_mean_peak_evolution_over_mean1001","n-H peak monitoring with v35 / Phase-2",100,1.50435e+09,1.56448e+09);
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
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545822e+09,
   1.54755e+09,
   1.549278e+09,
   1.551006e+09,
   1.552734e+09,
   1.554458e+09,
   1.556186e+09,
   1.557914e+09,
   1.55947e+09};
   Double_t mean_peak_evolution_over_mean_fy1002[30] = {
   0.6888523,
   0.5948125,
   0.3454252,
   0.4399756,
   0.03151313,
   -0.1021934,
   0.4764355,
   0.2559301,
   0.08693821,
   -0.1787692,
   -0.2305892,
   0.04315577,
   0.1948879,
   0.02259732,
   -0.1707419,
   -0.1384898,
   0.08341478,
   -0.10299,
   -0.05682793,
   -0.2478182,
   -0.1625104,
   0.2726893,
   -0.1857957,
   -0.02399365,
   0.1064039,
   -0.1424319,
   -0.4220391,
   -0.02424897,
   0.08804119,
   -0.2283832};
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
   0.1270391,
   0.120279,
   0.1218321,
   0.1744798,
   0.118525,
   0.1179714,
   0.1353812,
   0.1868911,
   0.1430118,
   0.2167895,
   0.1312104,
   0.1698636,
   0.1755187,
   0.1281938,
   0.122825,
   0.129039,
   0.153677,
   0.160798,
   0.1984988,
   0.1181421,
   0.1282716,
   0.189283,
   0.1313023,
   0.1319889,
   0.1309267,
   0.1332484,
   0.1290406,
   0.128121,
   0.1330476,
   0.1487045};
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1002 = new TH1F("Graph_mean_peak_evolution_over_mean1002","Cell 2",100,1.50435e+09,1.56448e+09);
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
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545822e+09,
   1.54755e+09,
   1.549278e+09,
   1.551006e+09,
   1.552734e+09,
   1.554458e+09,
   1.556186e+09,
   1.557914e+09,
   1.55947e+09};
   Double_t mean_peak_evolution_over_mean_fy1003[30] = {
   0.6111537,
   0.7586201,
   0.3106422,
   0.2751934,
   0.1082266,
   0.06407677,
   0.07883773,
   0.1068242,
   -0.2104444,
   0.03385876,
   0.2209709,
   -0.03600503,
   0.1714879,
   -0.09414808,
   -0.2480327,
   -0.02054798,
   -0.0750571,
   -0.2418703,
   -0.2425357,
   0.008185738,
   0.06882648,
   -0.2219092,
   -0.2024088,
   0.09180732,
   0.1829425,
   0.07684162,
   -0.07097275,
   -0.1391987,
   -0.210209,
   -0.05010062};
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
   0.1171173,
   0.1461128,
   0.1870893,
   0.1122708,
   0.1134749,
   0.1255037,
   0.1517774,
   0.1221135,
   0.149948,
   0.1180134,
   0.1615193,
   0.1257461,
   0.1573918,
   0.1187967,
   0.1205796,
   0.1638673,
   0.1340356,
   0.1322957,
   0.1296018,
   0.1205352,
   0.1363681,
   0.125924,
   0.1226722,
   0.126698,
   0.1267692,
   0.1244569,
   0.1188147,
   0.1216224,
   0.1310532,
   0.1825031};
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1003 = new TH1F("Graph_mean_peak_evolution_over_mean1003","Cell 3",100,1.50435e+09,1.56448e+09);
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
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545822e+09,
   1.54755e+09,
   1.549278e+09,
   1.551006e+09,
   1.552734e+09,
   1.554458e+09,
   1.556186e+09,
   1.557914e+09,
   1.55947e+09};
   Double_t mean_peak_evolution_over_mean_fy1004[30] = {
   0.4908048,
   0.8376305,
   0.4335351,
   0.196437,
   -0.02227261,
   0.03765315,
   0.07074206,
   0.02754975,
   0.229812,
   -0.07575223,
   0.2438893,
   0.2252557,
   0.185782,
   -0.1570494,
   -0.1864709,
   -0.06352393,
   -0.3530391,
   -0.3542855,
   -0.05848756,
   -0.3071601,
   0.03775531,
   0.02216603,
   -0.05416628,
   0.07327558,
   0.06852524,
   -0.09587731,
   -0.06250236,
   -0.1793913,
   -0.1034166,
   -0.0833732};
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
   0.1225682,
   0.135383,
   0.1163704,
   0.113745,
   0.1830223,
   0.1518401,
   0.1533929,
   0.1777351,
   0.1635962,
   0.1500994,
   0.2184397,
   0.1330062,
   0.1307177,
   0.1308468,
   0.1261238,
   0.1296192,
   0.1363892,
   0.1255843,
   0.1368443,
   0.1270286,
   0.128461,
   0.1230805,
   0.1237554,
   0.1670295,
   0.1610257,
   0.1303616,
   0.1273646,
   0.1267831,
   0.1507782,
   0.1437314};
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1004 = new TH1F("Graph_mean_peak_evolution_over_mean1004","Cell 4",100,1.50435e+09,1.56448e+09);
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
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545822e+09,
   1.54755e+09,
   1.549278e+09,
   1.551006e+09,
   1.552734e+09,
   1.554458e+09,
   1.556186e+09,
   1.557914e+09,
   1.55947e+09};
   Double_t mean_peak_evolution_over_mean_fy1005[30] = {
   0.6467062,
   0.6702783,
   0.4738372,
   0.3841242,
   0.2622499,
   0.360879,
   0.4135792,
   0.2025128,
   0.05473767,
   -0.0572503,
   0.1063553,
   0.2208761,
   0.1463809,
   -0.007859164,
   -0.2685823,
   -0.4148254,
   -0.1615681,
   -0.4059195,
   -0.2577767,
   -0.05932358,
   0.01294517,
   -0.05923166,
   -0.192024,
   -0.1033936,
   -0.1739568,
   -0.4797406,
   -0.06046746,
   -0.2505253,
   0.008390071,
   -0.1948939};
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
   0.116975,
   0.1778052,
   0.1145292,
   0.1510436,
   0.1168686,
   0.1165802,
   0.1186369,
   0.1177614,
   0.1475391,
   0.1181231,
   0.1242242,
   0.1332584,
   0.1283043,
   0.1178477,
   0.1246571,
   0.12126,
   0.1344226,
   0.1249475,
   0.1237605,
   0.1674664,
   0.1232102,
   0.1256517,
   0.1159241,
   0.1207578,
   0.1185543,
   0.1421575,
   0.1103743,
   0.1206247,
   0.1795651,
   0.1861603};
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1005 = new TH1F("Graph_mean_peak_evolution_over_mean1005","Cell 5",100,1.50435e+09,1.56448e+09);
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
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545822e+09,
   1.54755e+09,
   1.549278e+09,
   1.551006e+09,
   1.552734e+09,
   1.554458e+09,
   1.556186e+09,
   1.557914e+09,
   1.55947e+09};
   Double_t mean_peak_evolution_over_mean_fy1006[30] = {
   0.7956101,
   0.7139902,
   0.4603587,
   0.1450144,
   0.2570263,
   -0.06830759,
   0.2947661,
   0.04138231,
   0.07047403,
   -0.1770687,
   0.01875084,
   0.03379721,
   -0.09888536,
   0.01294075,
   0.05232138,
   0.03352889,
   0.07395183,
   -0.2679764,
   -0.0372035,
   -0.1505466,
   0.1269547,
   -0.1842823,
   -0.2255721,
   -0.4206693,
   -0.09302368,
   -0.06346757,
   -0.07812179,
   0.003704467,
   -0.2498238,
   -0.2854583};
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
   0.1148615,
   0.1036774,
   0.1125851,
   0.09811928,
   0.108673,
   0.1055414,
   0.1054994,
   0.1123249,
   0.1198699,
   0.1110651,
   0.1116755,
   0.1237734,
   0.1269656,
   0.107779,
   0.1376889,
   0.106034,
   0.1411562,
   0.1207165,
   0.1220158,
   0.1072009,
   0.109554,
   0.1129776,
   0.1115291,
   0.1115618,
   0.1056453,
   0.1106657,
   0.1134234,
   0.1083396,
   0.1135315,
   0.1244793};
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1006 = new TH1F("Graph_mean_peak_evolution_over_mean1006","Cell 6",100,1.50435e+09,1.56448e+09);
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
   TText *pt_LaTex = pt->AddText("n-H peak monitoring with v35 / Phase-2");
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
