void Sigma_peak_Erec37_nH_250GC_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Mon Sep  2 13:38:36 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",1280,437,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.503746e+09,-2.763158,1.556932e+09,15.65789);
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
   
   Double_t sigma_evolution_fx1001[21] = {
   1.515668e+09,
   1.517396e+09,
   1.519124e+09,
   1.520852e+09,
   1.522577e+09,
   1.524305e+09,
   1.526033e+09,
   1.527761e+09,
   1.529489e+09,
   1.531217e+09,
   1.532945e+09,
   1.534673e+09,
   1.536401e+09,
   1.538129e+09,
   1.539857e+09,
   1.541588e+09,
   1.543316e+09,
   1.545044e+09,
   1.546772e+09,
   1.5485e+09,
   1.549796e+09};
   Double_t sigma_evolution_fy1001[21] = {
   6.984291,
   7.254091,
   7.116829,
   7.034296,
   7.113019,
   7.183733,
   7.129249,
   7.159235,
   6.962734,
   7.066154,
   7.297966,
   7.166526,
   7.263572,
   7.00612,
   7.340132,
   7.315147,
   7.385792,
   7.363121,
   7.37404,
   7.358203,
   7.725815};
   Double_t sigma_evolution_fex1001[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1001[21] = {
   0.1248284,
   0.1310312,
   0.1334196,
   0.1409729,
   0.1545968,
   0.1354065,
   0.147993,
   0.1571923,
   0.2195733,
   0.1390269,
   0.1314205,
   0.1266378,
   0.1539532,
   0.1464855,
   0.1583279,
   0.1397648,
   0.1380717,
   0.143833,
   0.1365431,
   0.132575,
   0.2076885};
   TGraphErrors *gre = new TGraphErrors(21,sigma_evolution_fx1001,sigma_evolution_fy1001,sigma_evolution_fex1001,sigma_evolution_fey1001);
   gre->SetName("sigma_evolution");
   gre->SetTitle("n-H peak resolution monitoring with v34 / Phase-2");
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
   
   TH1F *Graph_sigma_evolution1001 = new TH1F("Graph_sigma_evolution1001","n-H peak resolution monitoring with v34 / Phase-2",100,1.512256e+09,1.553209e+09);
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
   
   Double_t sigma_evolution_fx1002[21] = {
   1.515668e+09,
   1.517396e+09,
   1.519124e+09,
   1.520852e+09,
   1.522577e+09,
   1.524305e+09,
   1.526033e+09,
   1.527761e+09,
   1.529489e+09,
   1.531217e+09,
   1.532945e+09,
   1.534673e+09,
   1.536401e+09,
   1.538129e+09,
   1.539857e+09,
   1.541588e+09,
   1.543316e+09,
   1.545044e+09,
   1.546772e+09,
   1.5485e+09,
   1.549796e+09};
   Double_t sigma_evolution_fy1002[21] = {
   6.358871,
   6.293757,
   6.436686,
   6.214574,
   6.230639,
   6.296708,
   6.630719,
   6.486736,
   6.131534,
   6.20987,
   6.449406,
   6.693441,
   6.561882,
   6.532752,
   6.692945,
   6.458054,
   6.716026,
   6.568426,
   6.600383,
   6.681341,
   6.640159};
   Double_t sigma_evolution_fex1002[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1002[21] = {
   0.1542964,
   0.1299615,
   0.1327353,
   0.1616774,
   0.1964748,
   0.1573699,
   0.1567011,
   0.1607647,
   0.1735363,
   0.1385889,
   0.1358929,
   0.1389691,
   0.1648124,
   0.1600308,
   0.1878465,
   0.1391041,
   0.1403001,
   0.1429295,
   0.143029,
   0.138011,
   0.2386476};
   gre = new TGraphErrors(21,sigma_evolution_fx1002,sigma_evolution_fy1002,sigma_evolution_fex1002,sigma_evolution_fey1002);
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
   
   TH1F *Graph_sigma_evolution1002 = new TH1F("Graph_sigma_evolution1002","Cell 2",100,1.512256e+09,1.553209e+09);
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
   
   Double_t sigma_evolution_fx1003[21] = {
   1.515668e+09,
   1.517396e+09,
   1.519124e+09,
   1.520852e+09,
   1.522577e+09,
   1.524305e+09,
   1.526033e+09,
   1.527761e+09,
   1.529489e+09,
   1.531217e+09,
   1.532945e+09,
   1.534673e+09,
   1.536401e+09,
   1.538129e+09,
   1.539857e+09,
   1.541588e+09,
   1.543316e+09,
   1.545044e+09,
   1.546772e+09,
   1.5485e+09,
   1.549796e+09};
   Double_t sigma_evolution_fy1003[21] = {
   5.850783,
   6.149548,
   6.17188,
   6.324185,
   6.052919,
   5.999119,
   6.097951,
   5.926259,
   6.046002,
   6.054452,
   6.211194,
   6.331815,
   6.153162,
   6.239597,
   6.299951,
   6.194304,
   6.394007,
   6.353864,
   6.540738,
   6.398128,
   6.58766};
   Double_t sigma_evolution_fex1003[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1003[21] = {
   0.1192319,
   0.1328797,
   0.157557,
   0.1323958,
   0.1429116,
   0.1804931,
   0.1252894,
   0.143675,
   0.1467707,
   0.1825344,
   0.1225433,
   0.1462188,
   0.1499752,
   0.1408667,
   0.1457716,
   0.1298993,
   0.1298212,
   0.139469,
   0.1234449,
   0.12697,
   0.2033017};
   gre = new TGraphErrors(21,sigma_evolution_fx1003,sigma_evolution_fy1003,sigma_evolution_fex1003,sigma_evolution_fey1003);
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
   
   TH1F *Graph_sigma_evolution1003 = new TH1F("Graph_sigma_evolution1003","Cell 3",100,1.512256e+09,1.553209e+09);
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
   
   Double_t sigma_evolution_fx1004[21] = {
   1.515668e+09,
   1.517396e+09,
   1.519124e+09,
   1.520852e+09,
   1.522577e+09,
   1.524305e+09,
   1.526033e+09,
   1.527761e+09,
   1.529489e+09,
   1.531217e+09,
   1.532945e+09,
   1.534673e+09,
   1.536401e+09,
   1.538129e+09,
   1.539857e+09,
   1.541588e+09,
   1.543316e+09,
   1.545044e+09,
   1.546772e+09,
   1.5485e+09,
   1.549796e+09};
   Double_t sigma_evolution_fy1004[21] = {
   6.119789,
   6.125493,
   6.291719,
   6.324955,
   6.332906,
   6.140412,
   6.147183,
   6.178137,
   5.986482,
   6.330951,
   6.614358,
   6.408359,
   6.554862,
   6.398616,
   6.379025,
   6.59242,
   6.497865,
   6.64652,
   6.502055,
   6.546149,
   6.138063};
   Double_t sigma_evolution_fex1004[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1004[21] = {
   0.1303531,
   0.169124,
   0.1675842,
   0.1673456,
   0.1521779,
   0.1586396,
   0.1636294,
   0.183147,
   0.1425566,
   0.1390978,
   0.1430602,
   0.1375893,
   0.1514152,
   0.1415403,
   0.2024959,
   0.1413018,
   0.1346516,
   0.1386137,
   0.1420304,
   0.1439153,
   0.3159932};
   gre = new TGraphErrors(21,sigma_evolution_fx1004,sigma_evolution_fy1004,sigma_evolution_fex1004,sigma_evolution_fey1004);
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
   
   TH1F *Graph_sigma_evolution1004 = new TH1F("Graph_sigma_evolution1004","Cell 4",100,1.512256e+09,1.553209e+09);
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
   
   Double_t sigma_evolution_fx1005[21] = {
   1.515668e+09,
   1.517396e+09,
   1.519124e+09,
   1.520852e+09,
   1.522577e+09,
   1.524305e+09,
   1.526033e+09,
   1.527761e+09,
   1.529489e+09,
   1.531217e+09,
   1.532945e+09,
   1.534673e+09,
   1.536401e+09,
   1.538129e+09,
   1.539857e+09,
   1.541588e+09,
   1.543316e+09,
   1.545044e+09,
   1.546772e+09,
   1.5485e+09,
   1.549796e+09};
   Double_t sigma_evolution_fy1005[21] = {
   6.496593,
   6.305054,
   6.726419,
   6.413986,
   6.299463,
   6.292682,
   6.550045,
   6.254576,
   6.488173,
   6.418523,
   6.631304,
   6.805796,
   6.599502,
   6.580017,
   6.683147,
   6.769456,
   6.641522,
   6.65979,
   6.848797,
   6.72782,
   6.980945};
   Double_t sigma_evolution_fex1005[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1005[21] = {
   0.1568284,
   0.1213279,
   0.1291766,
   0.1332586,
   0.1407884,
   0.1436018,
   0.129003,
   0.1437946,
   0.1364491,
   0.1377204,
   0.1308945,
   0.1344659,
   0.1498225,
   0.1446359,
   0.1375136,
   0.1390463,
   0.1694276,
   0.1393226,
   0.1408331,
   0.129486,
   0.1836325};
   gre = new TGraphErrors(21,sigma_evolution_fx1005,sigma_evolution_fy1005,sigma_evolution_fex1005,sigma_evolution_fey1005);
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
   
   TH1F *Graph_sigma_evolution1005 = new TH1F("Graph_sigma_evolution1005","Cell 5",100,1.512256e+09,1.553209e+09);
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
   
   Double_t sigma_evolution_fx1006[21] = {
   1.515668e+09,
   1.517396e+09,
   1.519124e+09,
   1.520852e+09,
   1.522577e+09,
   1.524305e+09,
   1.526033e+09,
   1.527761e+09,
   1.529489e+09,
   1.531217e+09,
   1.532945e+09,
   1.534673e+09,
   1.536401e+09,
   1.538129e+09,
   1.539857e+09,
   1.541588e+09,
   1.543316e+09,
   1.545044e+09,
   1.546772e+09,
   1.5485e+09,
   1.549796e+09};
   Double_t sigma_evolution_fy1006[21] = {
   7.428415,
   7.297956,
   7.352764,
   7.390021,
   7.303508,
   7.318922,
   7.367889,
   7.402754,
   7.47501,
   7.579968,
   7.215406,
   7.384505,
   7.393702,
   7.568376,
   7.658896,
   7.624777,
   7.538841,
   7.609366,
   7.736352,
   7.619786,
   7.634376};
   Double_t sigma_evolution_fex1006[21] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1006[21] = {
   0.1090629,
   0.1201136,
   0.1189794,
   0.1274519,
   0.1267874,
   0.1344505,
   0.1207876,
   0.1333575,
   0.1357678,
   0.1288499,
   0.119768,
   0.1203973,
   0.1347915,
   0.1407076,
   0.1364921,
   0.1223057,
   0.1214004,
   0.1221101,
   0.1284464,
   0.1228531,
   0.1840873};
   gre = new TGraphErrors(21,sigma_evolution_fx1006,sigma_evolution_fy1006,sigma_evolution_fex1006,sigma_evolution_fey1006);
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
   
   TH1F *Graph_sigma_evolution1006 = new TH1F("Graph_sigma_evolution1006","Cell 6",100,1.512256e+09,1.553209e+09);
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
   TText *pt_LaTex = pt->AddText("n-H peak resolution monitoring with v34 / Phase-2");
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
