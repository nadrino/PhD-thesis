void Erec34_nH_250GC_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Thu Jun 13 10:11:33 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.49324e+09,-4.184211,1.565541e+09,3.710526);
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
   
   Double_t mean_peak_evolution_over_mean_fx1001[27] = {
   1.509448e+09,
   1.511176e+09,
   1.512904e+09,
   1.514632e+09,
   1.51636e+09,
   1.518088e+09,
   1.519816e+09,
   1.521544e+09,
   1.523268e+09,
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531908e+09,
   1.533636e+09,
   1.535364e+09,
   1.537092e+09,
   1.53882e+09,
   1.540548e+09,
   1.54228e+09,
   1.544008e+09,
   1.545736e+09,
   1.547464e+09,
   1.549192e+09,
   1.55092e+09,
   1.554199e+09,
   1.555841e+09};
   Double_t mean_peak_evolution_over_mean_fy1001[27] = {
   0.6952029,
   0.5778335,
   0.3576145,
   0.2519471,
   0.0774914,
   0.08911154,
   0.4726067,
   0.2334205,
   -0.1042909,
   0.1841118,
   0.1535654,
   0.1855361,
   -0.04481716,
   0.01177719,
   -0.04346456,
   -0.2645648,
   -0.07377528,
   -0.1847814,
   -0.1202456,
   -0.04339283,
   -0.08075351,
   -0.1934299,
   -0.342145,
   -0.08252624,
   -0.4576393,
   -0.1693186,
   -0.4835438};
   Double_t mean_peak_evolution_over_mean_fex1001[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1001[27] = {
   0.1290007,
   0.121823,
   0.1169952,
   0.1119467,
   0.1165944,
   0.1163833,
   0.1177212,
   0.127247,
   0.1374136,
   0.1361306,
   0.1213212,
   0.1380479,
   0.1408712,
   0.1139836,
   0.1181923,
   0.1176414,
   0.1303243,
   0.1317823,
   0.1363192,
   0.1179781,
   0.1255685,
   0.1190296,
   0.1552737,
   0.1181235,
   0.1293469,
   0.118162,
   0.1310384};
   TGraphErrors *gre = new TGraphErrors(27,mean_peak_evolution_over_mean_fx1001,mean_peak_evolution_over_mean_fy1001,mean_peak_evolution_over_mean_fex1001,mean_peak_evolution_over_mean_fey1001);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1001 = new TH1F("Graph_mean_peak_evolution_over_mean1001","",100,1.504808e+09,1.56048e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1002[27] = {
   1.509448e+09,
   1.511176e+09,
   1.512904e+09,
   1.514632e+09,
   1.51636e+09,
   1.518088e+09,
   1.519816e+09,
   1.521544e+09,
   1.523268e+09,
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531908e+09,
   1.533636e+09,
   1.535364e+09,
   1.537092e+09,
   1.53882e+09,
   1.540548e+09,
   1.54228e+09,
   1.544008e+09,
   1.545736e+09,
   1.547464e+09,
   1.549192e+09,
   1.55092e+09,
   1.554199e+09,
   1.555841e+09};
   Double_t mean_peak_evolution_over_mean_fy1002[27] = {
   0.669715,
   0.6801772,
   0.4216406,
   0.3629157,
   -0.01456972,
   -0.1218633,
   0.5125985,
   0.1880869,
   0.1474414,
   -0.2007581,
   -0.2909307,
   0.07704077,
   0.1301165,
   -0.005892013,
   -0.1824849,
   -0.1309183,
   0.04991656,
   -0.0919655,
   -0.0004569734,
   -0.3021475,
   -0.1824645,
   0.2008434,
   -0.2043474,
   0.002459389,
   0.06288724,
   -0.2627665,
   -0.1910708};
   Double_t mean_peak_evolution_over_mean_fex1002[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1002[27] = {
   0.1269572,
   0.1195645,
   0.1234338,
   0.1478164,
   0.119394,
   0.1193922,
   0.1354058,
   0.1642728,
   0.1420953,
   0.2329417,
   0.1304843,
   0.1633183,
   0.1631981,
   0.1614893,
   0.1224184,
   0.1273545,
   0.1548073,
   0.1678223,
   0.1932491,
   0.1184546,
   0.1284494,
   0.1332338,
   0.1555689,
   0.1256603,
   0.1324099,
   0.1240536,
   0.1333493};
   gre = new TGraphErrors(27,mean_peak_evolution_over_mean_fx1002,mean_peak_evolution_over_mean_fy1002,mean_peak_evolution_over_mean_fex1002,mean_peak_evolution_over_mean_fey1002);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1002 = new TH1F("Graph_mean_peak_evolution_over_mean1002","Cell 2",100,1.504808e+09,1.56048e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1003[27] = {
   1.509448e+09,
   1.511176e+09,
   1.512904e+09,
   1.514632e+09,
   1.51636e+09,
   1.518088e+09,
   1.519816e+09,
   1.521544e+09,
   1.523268e+09,
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531908e+09,
   1.533636e+09,
   1.535364e+09,
   1.537092e+09,
   1.53882e+09,
   1.540548e+09,
   1.54228e+09,
   1.544008e+09,
   1.545736e+09,
   1.547464e+09,
   1.549192e+09,
   1.55092e+09,
   1.554199e+09,
   1.555841e+09};
   Double_t mean_peak_evolution_over_mean_fy1003[27] = {
   0.5510839,
   0.7413405,
   0.4124054,
   0.1988008,
   -0.02597725,
   0.1157347,
   0.1208721,
   0.1460074,
   -0.09934063,
   0.04907134,
   0.2644531,
   0.0932344,
   0.1903134,
   -0.1694255,
   -0.2346794,
   -0.1543504,
   -0.06639197,
   -0.2981867,
   -0.291548,
   0.02874653,
   0.05277883,
   -0.2125059,
   -0.2314417,
   -0.0451173,
   0.104796,
   -0.05576995,
   -0.164523};
   Double_t mean_peak_evolution_over_mean_fex1003[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1003[27] = {
   0.1150386,
   0.158749,
   0.1801355,
   0.1106781,
   0.1139473,
   0.12162,
   0.1375267,
   0.1225509,
   0.1642828,
   0.1409107,
   0.1581146,
   0.1243542,
   0.1712883,
   0.1184129,
   0.1183249,
   0.1468076,
   0.1356973,
   0.1297726,
   0.1309033,
   0.1202812,
   0.1189328,
   0.1237558,
   0.1234946,
   0.1210834,
   0.127828,
   0.1651465,
   0.1241968};
   gre = new TGraphErrors(27,mean_peak_evolution_over_mean_fx1003,mean_peak_evolution_over_mean_fy1003,mean_peak_evolution_over_mean_fex1003,mean_peak_evolution_over_mean_fey1003);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1003 = new TH1F("Graph_mean_peak_evolution_over_mean1003","Cell 3",100,1.504808e+09,1.56048e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1004[27] = {
   1.509448e+09,
   1.511176e+09,
   1.512904e+09,
   1.514632e+09,
   1.51636e+09,
   1.518088e+09,
   1.519816e+09,
   1.521544e+09,
   1.523268e+09,
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531908e+09,
   1.533636e+09,
   1.535364e+09,
   1.537092e+09,
   1.53882e+09,
   1.540548e+09,
   1.54228e+09,
   1.544008e+09,
   1.545736e+09,
   1.547464e+09,
   1.549192e+09,
   1.55092e+09,
   1.554199e+09,
   1.555841e+09};
   Double_t mean_peak_evolution_over_mean_fy1004[27] = {
   0.5753607,
   0.879914,
   0.4540067,
   0.09200636,
   -0.180767,
   0.02071052,
   0.06760493,
   0.08538297,
   0.2875749,
   -0.06322996,
   0.1509841,
   0.1956843,
   0.2838601,
   -0.2723311,
   -0.2352237,
   -0.08487588,
   -0.3839693,
   -0.2880476,
   0.03817219,
   -0.3287166,
   0.06750288,
   -0.0570454,
   -0.1483339,
   0.08784249,
   0.09906858,
   0.03038537,
   -0.2768623};
   Double_t mean_peak_evolution_over_mean_fex1004[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1004[27] = {
   0.1238076,
   0.1271274,
   0.1189979,
   0.1124545,
   0.1866784,
   0.1552776,
   0.1483202,
   0.1697545,
   0.1796485,
   0.1450556,
   0.1297415,
   0.1292083,
   0.1317749,
   0.1247191,
   0.127025,
   0.1263177,
   0.1378139,
   0.1272964,
   0.1361544,
   0.1269479,
   0.1277106,
   0.1229986,
   0.1239703,
   0.1594954,
   0.157772,
   0.1276876,
   0.1296263};
   gre = new TGraphErrors(27,mean_peak_evolution_over_mean_fx1004,mean_peak_evolution_over_mean_fy1004,mean_peak_evolution_over_mean_fex1004,mean_peak_evolution_over_mean_fey1004);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1004 = new TH1F("Graph_mean_peak_evolution_over_mean1004","Cell 4",100,1.504808e+09,1.56048e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1005[27] = {
   1.509448e+09,
   1.511176e+09,
   1.512904e+09,
   1.514632e+09,
   1.51636e+09,
   1.518088e+09,
   1.519816e+09,
   1.521544e+09,
   1.523268e+09,
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531908e+09,
   1.533636e+09,
   1.535364e+09,
   1.537092e+09,
   1.53882e+09,
   1.540548e+09,
   1.54228e+09,
   1.544008e+09,
   1.545736e+09,
   1.547464e+09,
   1.549192e+09,
   1.55092e+09,
   1.554199e+09,
   1.555841e+09};
   Double_t mean_peak_evolution_over_mean_fy1005[27] = {
   0.6768332,
   0.6764861,
   0.4916243,
   0.268998,
   0.1472945,
   0.3011998,
   0.2861042,
   0.01777282,
   0.04256465,
   -0.0966125,
   0.1457839,
   0.2880741,
   0.1678404,
   -0.042293,
   -0.2374533,
   -0.3645459,
   -0.2532021,
   -0.4259793,
   -0.2912319,
   -0.2090382,
   0.01776262,
   -0.05135645,
   -0.1713146,
   -0.2237561,
   -0.1115141,
   -0.05474504,
   -0.204833};
   Double_t mean_peak_evolution_over_mean_fex1005[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1005[27] = {
   0.1172204,
   0.1547801,
   0.1177864,
   0.1413026,
   0.1163107,
   0.1174747,
   0.1178867,
   0.1194243,
   0.1578857,
   0.1179306,
   0.1247034,
   0.1740748,
   0.1282532,
   0.114942,
   0.1243695,
   0.1221254,
   0.1340373,
   0.126438,
   0.1223402,
   0.1262955,
   0.1243715,
   0.122547,
   0.1167991,
   0.1155882,
   0.1219148,
   0.1146533,
   0.1443827};
   gre = new TGraphErrors(27,mean_peak_evolution_over_mean_fx1005,mean_peak_evolution_over_mean_fy1005,mean_peak_evolution_over_mean_fex1005,mean_peak_evolution_over_mean_fey1005);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1005 = new TH1F("Graph_mean_peak_evolution_over_mean1005","Cell 5",100,1.504808e+09,1.56048e+09);
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
   
   Double_t mean_peak_evolution_over_mean_fx1006[27] = {
   1.509448e+09,
   1.511176e+09,
   1.512904e+09,
   1.514632e+09,
   1.51636e+09,
   1.518088e+09,
   1.519816e+09,
   1.521544e+09,
   1.523268e+09,
   1.524996e+09,
   1.526724e+09,
   1.528452e+09,
   1.53018e+09,
   1.531908e+09,
   1.533636e+09,
   1.535364e+09,
   1.537092e+09,
   1.53882e+09,
   1.540548e+09,
   1.54228e+09,
   1.544008e+09,
   1.545736e+09,
   1.547464e+09,
   1.549192e+09,
   1.55092e+09,
   1.554199e+09,
   1.555841e+09};
   Double_t mean_peak_evolution_over_mean_fy1006[27] = {
   0.9332807,
   0.8719113,
   0.5506139,
   0.1617585,
   0.2749051,
   -0.0829664,
   0.2903249,
   -0.0879069,
   -0.005383038,
   -0.1944525,
   -0.004661045,
   0.08043105,
   -0.2264781,
   -0.1271008,
   -0.04364869,
   0.03689484,
   -0.0678561,
   -0.3876683,
   0.0236411,
   -0.1227998,
   0.1426669,
   -0.1642835,
   -0.2583593,
   -0.3831816,
   -0.2020747,
   0.0303969,
   -0.01273706};
   Double_t mean_peak_evolution_over_mean_fex1006[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t mean_peak_evolution_over_mean_fey1006[27] = {
   0.1146244,
   0.1000629,
   0.1130241,
   0.09771157,
   0.1089903,
   0.1059761,
   0.105256,
   0.1037654,
   0.1203133,
   0.1109959,
   0.1105298,
   0.1206246,
   0.1254931,
   0.1064595,
   0.1341769,
   0.1058448,
   0.1248449,
   0.1214188,
   0.1204271,
   0.1072543,
   0.1090462,
   0.1135824,
   0.1121493,
   0.1072847,
   0.1073735,
   0.1124635,
   0.1151737};
   gre = new TGraphErrors(27,mean_peak_evolution_over_mean_fx1006,mean_peak_evolution_over_mean_fy1006,mean_peak_evolution_over_mean_fex1006,mean_peak_evolution_over_mean_fey1006);
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
   
   TH1F *Graph_mean_peak_evolution_over_mean1006 = new TH1F("Graph_mean_peak_evolution_over_mean1006","Cell 6",100,1.504808e+09,1.56048e+09);
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
