void Sigma_peak_Erec34_nH_250GC_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Wed Jun 19 11:17:36 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",1280,437,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.49324e+09,-2.763158,1.565541e+09,15.65789);
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
   
   Double_t sigma_evolution_fx1001[27] = {
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
   Double_t sigma_evolution_fy1001[27] = {
   7.310354,
   7.402329,
   7.094327,
   7.109935,
   7.151394,
   7.25523,
   7.025464,
   7.038869,
   7.27499,
   7.041735,
   7.146918,
   7.032381,
   6.988221,
   7.254072,
   7.158994,
   7.229431,
   7.27655,
   7.088411,
   7.27164,
   7.319797,
   7.52787,
   7.293901,
   7.346324,
   7.398421,
   7.474068,
   7.286488,
   7.568142};
   Double_t sigma_evolution_fex1001[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1001[27] = {
   0.1452179,
   0.1344222,
   0.1310108,
   0.1283682,
   0.1300301,
   0.1283374,
   0.1351557,
   0.1480805,
   0.1548283,
   0.1491624,
   0.1358869,
   0.161774,
   0.149823,
   0.1286152,
   0.1302926,
   0.1316704,
   0.1469335,
   0.1469934,
   0.1575358,
   0.1354635,
   0.1433868,
   0.1383789,
   0.1669302,
   0.1320712,
   0.1414098,
   0.1279059,
   0.1466047};
   TGraphErrors *gre = new TGraphErrors(27,sigma_evolution_fx1001,sigma_evolution_fy1001,sigma_evolution_fex1001,sigma_evolution_fey1001);
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
   
   TH1F *Graph_sigma_evolution1001 = new TH1F("Graph_sigma_evolution1001","n-H peak resolution monitoring with v34 / Phase-2",100,1.504808e+09,1.56048e+09);
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
   
   Double_t sigma_evolution_fx1002[27] = {
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
   Double_t sigma_evolution_fy1002[27] = {
   6.31262,
   6.135638,
   6.338976,
   6.262545,
   6.208323,
   6.524994,
   6.201879,
   6.352179,
   6.246219,
   6.299881,
   6.618073,
   6.3351,
   6.14399,
   6.279174,
   6.569851,
   6.621862,
   6.725599,
   6.524013,
   6.308477,
   6.609048,
   6.560595,
   6.649685,
   6.644076,
   6.789294,
   6.595974,
   7.015483,
   6.876802};
   Double_t sigma_evolution_fex1002[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1002[27] = {
   0.1354167,
   0.1280977,
   0.1337657,
   0.1519786,
   0.1316119,
   0.1332688,
   0.1467257,
   0.1725667,
   0.1610196,
   0.2391276,
   0.1512289,
   0.1763411,
   0.1789757,
   0.1641883,
   0.135433,
   0.1407226,
   0.1786215,
   0.1842779,
   0.212423,
   0.1322223,
   0.1392377,
   0.1436275,
   0.1674626,
   0.1387692,
   0.1467106,
   0.1375193,
   0.1477784};
   gre = new TGraphErrors(27,sigma_evolution_fx1002,sigma_evolution_fy1002,sigma_evolution_fex1002,sigma_evolution_fey1002);
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
   
   TH1F *Graph_sigma_evolution1002 = new TH1F("Graph_sigma_evolution1002","Cell 2",100,1.504808e+09,1.56048e+09);
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
   
   Double_t sigma_evolution_fx1003[27] = {
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
   Double_t sigma_evolution_fy1003[27] = {
   5.922539,
   6.10536,
   6.14612,
   5.761037,
   6.028961,
   6.235041,
   6.307915,
   6.197823,
   5.995914,
   6.066896,
   6.075037,
   5.891974,
   5.831778,
   6.280194,
   6.214145,
   6.230613,
   6.125143,
   6.302072,
   6.378367,
   6.326699,
   6.321729,
   6.358321,
   6.550343,
   6.440497,
   6.595898,
   6.316971,
   6.35537};
   Double_t sigma_evolution_fex1003[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1003[27] = {
   0.1248246,
   0.1624547,
   0.1879666,
   0.1180231,
   0.1224489,
   0.1316382,
   0.1439872,
   0.1322215,
   0.1730531,
   0.1496383,
   0.1670386,
   0.1360813,
   0.1871142,
   0.1252426,
   0.130559,
   0.1529993,
   0.1519113,
   0.1407339,
   0.140757,
   0.1327934,
   0.1285091,
   0.1368468,
   0.1339516,
   0.1301922,
   0.1400287,
   0.1621578,
   0.1351612};
   gre = new TGraphErrors(27,sigma_evolution_fx1003,sigma_evolution_fy1003,sigma_evolution_fex1003,sigma_evolution_fey1003);
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
   
   TH1F *Graph_sigma_evolution1003 = new TH1F("Graph_sigma_evolution1003","Cell 3",100,1.504808e+09,1.56048e+09);
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
   
   Double_t sigma_evolution_fx1004[27] = {
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
   Double_t sigma_evolution_fy1004[27] = {
   6.320289,
   5.89189,
   6.174953,
   6.02748,
   6.194596,
   6.061288,
   6.578742,
   6.2574,
   6.055727,
   6.132319,
   6.162262,
   6.083264,
   6.090135,
   6.673154,
   6.525893,
   6.418114,
   6.420756,
   6.610044,
   6.263062,
   6.804644,
   6.597324,
   6.481967,
   6.481565,
   6.528449,
   6.599872,
   6.723104,
   6.778726};
   Double_t sigma_evolution_fex1004[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1004[27] = {
   0.1331809,
   0.1407008,
   0.1282196,
   0.1273155,
   0.1908256,
   0.1574342,
   0.1553101,
   0.1698669,
   0.1841594,
   0.1507933,
   0.1418687,
   0.1446243,
   0.141561,
   0.1365925,
   0.1434848,
   0.1381081,
   0.1525209,
   0.1431427,
   0.1458142,
   0.1408332,
   0.1410544,
   0.132682,
   0.1387628,
   0.1682822,
   0.1729249,
   0.1382354,
   0.1424176};
   gre = new TGraphErrors(27,sigma_evolution_fx1004,sigma_evolution_fy1004,sigma_evolution_fex1004,sigma_evolution_fey1004);
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
   
   TH1F *Graph_sigma_evolution1004 = new TH1F("Graph_sigma_evolution1004","Cell 4",100,1.504808e+09,1.56048e+09);
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
   
   Double_t sigma_evolution_fx1005[27] = {
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
   Double_t sigma_evolution_fy1005[27] = {
   6.744519,
   6.608689,
   6.374827,
   6.500257,
   6.320457,
   6.552596,
   6.588728,
   6.292911,
   6.295025,
   6.395152,
   6.540435,
   6.417737,
   6.254043,
   6.485417,
   6.819111,
   6.774302,
   6.650639,
   6.645197,
   6.539235,
   6.822696,
   6.762247,
   6.562318,
   6.892946,
   6.815148,
   6.832969,
   6.84149,
   6.674888};
   Double_t sigma_evolution_fex1005[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1005[27] = {
   0.1230388,
   0.1614684,
   0.1275904,
   0.1495151,
   0.1251626,
   0.1245304,
   0.1275224,
   0.1348295,
   0.1687374,
   0.1322659,
   0.1383315,
   0.1746792,
   0.140157,
   0.1241452,
   0.1363056,
   0.1386144,
   0.1493998,
   0.1415151,
   0.1391196,
   0.1359461,
   0.136835,
   0.1363044,
   0.1264142,
   0.1286113,
   0.1327014,
   0.12585,
   0.1544008};
   gre = new TGraphErrors(27,sigma_evolution_fx1005,sigma_evolution_fy1005,sigma_evolution_fex1005,sigma_evolution_fey1005);
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
   
   TH1F *Graph_sigma_evolution1005 = new TH1F("Graph_sigma_evolution1005","Cell 5",100,1.504808e+09,1.56048e+09);
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
   
   Double_t sigma_evolution_fx1006[27] = {
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
   Double_t sigma_evolution_fy1006[27] = {
   7.518353,
   7.332475,
   7.596325,
   7.52317,
   7.289877,
   7.435204,
   7.181576,
   7.431757,
   7.453114,
   7.337509,
   7.167782,
   7.564625,
   7.647706,
   7.380052,
   7.238409,
   7.301065,
   7.481401,
   7.753758,
   7.532421,
   7.575781,
   7.584069,
   7.813329,
   7.623911,
   7.622639,
   7.763389,
   7.54644,
   7.616759};
   Double_t sigma_evolution_fex1006[27] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1006[27] = {
   0.1291219,
   0.1092955,
   0.1276859,
   0.1063393,
   0.1225301,
   0.1217467,
   0.1158365,
   0.1166726,
   0.1360345,
   0.1244078,
   0.1222415,
   0.1356687,
   0.1374892,
   0.1215993,
   0.1430076,
   0.1222985,
   0.1407181,
   0.1380783,
   0.1352236,
   0.1198391,
   0.1218888,
   0.129243,
   0.1266815,
   0.1224977,
   0.1173226,
   0.1273118,
   0.1318183};
   gre = new TGraphErrors(27,sigma_evolution_fx1006,sigma_evolution_fy1006,sigma_evolution_fex1006,sigma_evolution_fey1006);
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
   
   TH1F *Graph_sigma_evolution1006 = new TH1F("Graph_sigma_evolution1006","Cell 6",100,1.504808e+09,1.56048e+09);
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
