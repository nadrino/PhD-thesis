void Sigma_peak_v37_nH_phase-2_fit-crystalball_stacks-20_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Tue Oct 22 00:31:35 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",20,43,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.50158e+09,-2.763158,1.552478e+09,15.65789);
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
   
   Double_t sigma_evolution_fx1007[20] = {
   1.51299e+09,
   1.514718e+09,
   1.516446e+09,
   1.518174e+09,
   1.519902e+09,
   1.52163e+09,
   1.523354e+09,
   1.525082e+09,
   1.52681e+09,
   1.528538e+09,
   1.530266e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545649e+09};
   Double_t sigma_evolution_fy1007[20] = {
   7.056194,
   7.121169,
   7.169374,
   7.255791,
   6.971337,
   7.007423,
   7.193167,
   7.130894,
   7.130894,
   7.005972,
   7.00473,
   7.27961,
   7.159993,
   7.169286,
   7.376939,
   7.090163,
   7.243369,
   7.321691,
   7.506912,
   7.257001};
   Double_t sigma_evolution_fex1007[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1007[20] = {
   0.1327723,
   0.1276696,
   0.131985,
   0.1276203,
   0.1356393,
   0.1481319,
   0.150551,
   0.1556573,
   0.1361384,
   0.1609643,
   0.1492055,
   0.1305163,
   0.1294384,
   0.1359139,
   0.1471749,
   0.1465323,
   0.1545112,
   0.1362062,
   0.1434038,
   0.1536387};
   TGraphErrors *gre = new TGraphErrors(20,sigma_evolution_fx1007,sigma_evolution_fy1007,sigma_evolution_fex1007,sigma_evolution_fey1007);
   gre->SetName("sigma_evolution");
   gre->SetTitle("Cell 1");
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
   
   TH1F *Graph_sigma_evolution1007 = new TH1F("Graph_sigma_evolution1007","Cell 1",100,1.509724e+09,1.548915e+09);
   Graph_sigma_evolution1007->SetMinimum(0);
   Graph_sigma_evolution1007->SetMaximum(14);
   Graph_sigma_evolution1007->SetDirectory(0);
   Graph_sigma_evolution1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1007->SetLineColor(ci);
   Graph_sigma_evolution1007->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1007->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1007->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1007->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1007->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1007->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1007->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1007->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1007->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1007->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1007->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1007->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1007->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1007->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1007->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1007->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1007->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1007);
   
   gre->Draw("ap");
   
   Double_t sigma_evolution_fx1008[20] = {
   1.51299e+09,
   1.514718e+09,
   1.516446e+09,
   1.518174e+09,
   1.519902e+09,
   1.52163e+09,
   1.523354e+09,
   1.525082e+09,
   1.52681e+09,
   1.528538e+09,
   1.530266e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545649e+09};
   Double_t sigma_evolution_fy1008[20] = {
   6.357692,
   6.24907,
   6.284805,
   6.462667,
   6.18486,
   6.42908,
   6.220216,
   6.29826,
   6.685812,
   6.290368,
   6.120888,
   6.303687,
   6.595792,
   6.617054,
   6.692741,
   6.643696,
   6.281611,
   6.582038,
   6.550018,
   6.646192};
   Double_t sigma_evolution_fex1008[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1008[20] = {
   0.1360137,
   0.1485883,
   0.1318881,
   0.1319156,
   0.1477804,
   0.1802822,
   0.1614593,
   0.1767556,
   0.1535959,
   0.1712058,
   0.1763854,
   0.1338191,
   0.1348121,
   0.1448568,
   0.1780979,
   0.1766073,
   0.2244018,
   0.1318921,
   0.1392262,
   0.2005178};
   gre = new TGraphErrors(20,sigma_evolution_fx1008,sigma_evolution_fy1008,sigma_evolution_fex1008,sigma_evolution_fey1008);
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
   
   TH1F *Graph_sigma_evolution1008 = new TH1F("Graph_sigma_evolution1008","Cell 2",100,1.509724e+09,1.548915e+09);
   Graph_sigma_evolution1008->SetMinimum(0);
   Graph_sigma_evolution1008->SetMaximum(14);
   Graph_sigma_evolution1008->SetDirectory(0);
   Graph_sigma_evolution1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1008->SetLineColor(ci);
   Graph_sigma_evolution1008->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1008->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1008->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1008->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1008->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1008->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1008->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1008->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1008->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1008->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1008->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1008->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1008->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1008->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1008->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1008->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1008->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1008);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1009[20] = {
   1.51299e+09,
   1.514718e+09,
   1.516446e+09,
   1.518174e+09,
   1.519902e+09,
   1.52163e+09,
   1.523354e+09,
   1.525082e+09,
   1.52681e+09,
   1.528538e+09,
   1.530266e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545649e+09};
   Double_t sigma_evolution_fy1009[20] = {
   6.222321,
   5.741896,
   5.993642,
   6.279838,
   6.296346,
   6.161231,
   6.036482,
   6.062692,
   6.026749,
   5.913552,
   5.899364,
   6.207593,
   6.277262,
   6.222685,
   6.109203,
   6.34355,
   6.356355,
   6.303736,
   6.343211,
   6.297528};
   Double_t sigma_evolution_fex1009[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1009[20] = {
   0.1898163,
   0.117151,
   0.1224475,
   0.1310017,
   0.1290736,
   0.1313753,
   0.1827624,
   0.1471693,
   0.1676958,
   0.1362719,
   0.1778938,
   0.1230819,
   0.1315884,
   0.1578729,
   0.1499743,
   0.1413134,
   0.138787,
   0.1330009,
   0.1517818,
   0.1536257};
   gre = new TGraphErrors(20,sigma_evolution_fx1009,sigma_evolution_fy1009,sigma_evolution_fex1009,sigma_evolution_fey1009);
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
   
   TH1F *Graph_sigma_evolution1009 = new TH1F("Graph_sigma_evolution1009","Cell 3",100,1.509724e+09,1.548915e+09);
   Graph_sigma_evolution1009->SetMinimum(0);
   Graph_sigma_evolution1009->SetMaximum(14);
   Graph_sigma_evolution1009->SetDirectory(0);
   Graph_sigma_evolution1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1009->SetLineColor(ci);
   Graph_sigma_evolution1009->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1009->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1009->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1009->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1009->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1009->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1009->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1009->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1009->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1009->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1009->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1009->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1009->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1009->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1009->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1009->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1009->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1009);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1010[20] = {
   1.51299e+09,
   1.514718e+09,
   1.516446e+09,
   1.518174e+09,
   1.519902e+09,
   1.52163e+09,
   1.523354e+09,
   1.525082e+09,
   1.52681e+09,
   1.528538e+09,
   1.530266e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545649e+09};
   Double_t sigma_evolution_fy1010[20] = {
   6.105352,
   6.069763,
   6.260776,
   6.028391,
   6.520973,
   6.380551,
   6.028113,
   6.096093,
   6.229572,
   6.0424,
   6.065561,
   6.715436,
   6.542675,
   6.455147,
   6.341723,
   6.545824,
   6.30904,
   6.749059,
   6.676116,
   6.41161};
   Double_t sigma_evolution_fex1010[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1010[20] = {
   0.1262362,
   0.1277934,
   0.1893104,
   0.1492566,
   0.1549629,
   0.1720897,
   0.181528,
   0.1499706,
   0.139402,
   0.1441744,
   0.1828333,
   0.1385676,
   0.1422113,
   0.1398553,
   0.1519897,
   0.1405881,
   0.1460272,
   0.1394651,
   0.1425403,
   0.1459068};
   gre = new TGraphErrors(20,sigma_evolution_fx1010,sigma_evolution_fy1010,sigma_evolution_fex1010,sigma_evolution_fey1010);
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
   
   TH1F *Graph_sigma_evolution1010 = new TH1F("Graph_sigma_evolution1010","Cell 4",100,1.509724e+09,1.548915e+09);
   Graph_sigma_evolution1010->SetMinimum(0);
   Graph_sigma_evolution1010->SetMaximum(14);
   Graph_sigma_evolution1010->SetDirectory(0);
   Graph_sigma_evolution1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1010->SetLineColor(ci);
   Graph_sigma_evolution1010->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1010->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1010->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1010->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1010->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1010->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1010->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1010->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1010->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1010->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1010->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1010->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1010->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1010->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1010->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1010->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1010->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1010);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1011[20] = {
   1.51299e+09,
   1.514718e+09,
   1.516446e+09,
   1.518174e+09,
   1.519902e+09,
   1.52163e+09,
   1.523354e+09,
   1.525082e+09,
   1.52681e+09,
   1.528538e+09,
   1.530266e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545649e+09};
   Double_t sigma_evolution_fy1011[20] = {
   6.383923,
   6.528402,
   6.231013,
   6.629716,
   6.544293,
   6.262148,
   6.383743,
   6.355565,
   6.59839,
   6.374024,
   6.311835,
   6.497037,
   6.855042,
   6.72819,
   6.651132,
   6.607207,
   6.568634,
   6.840827,
   6.677443,
   6.597071};
   Double_t sigma_evolution_fex1011[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1011[20] = {
   0.1283434,
   0.1310265,
   0.123819,
   0.1255885,
   0.1373354,
   0.1349615,
   0.158745,
   0.1322989,
   0.1407024,
   0.1356549,
   0.1417765,
   0.1260111,
   0.1396818,
   0.1374596,
   0.1507162,
   0.1405298,
   0.1382129,
   0.1644692,
   0.1347958,
   0.1621249};
   gre = new TGraphErrors(20,sigma_evolution_fx1011,sigma_evolution_fy1011,sigma_evolution_fex1011,sigma_evolution_fey1011);
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
   
   TH1F *Graph_sigma_evolution1011 = new TH1F("Graph_sigma_evolution1011","Cell 5",100,1.509724e+09,1.548915e+09);
   Graph_sigma_evolution1011->SetMinimum(0);
   Graph_sigma_evolution1011->SetMaximum(14);
   Graph_sigma_evolution1011->SetDirectory(0);
   Graph_sigma_evolution1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1011->SetLineColor(ci);
   Graph_sigma_evolution1011->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1011->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1011->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1011->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1011->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1011->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1011->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1011->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1011->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1011->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1011->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1011->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1011->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1011->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1011->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1011->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1011->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1011);
   
   gre->Draw("p");
   
   Double_t sigma_evolution_fx1012[20] = {
   1.51299e+09,
   1.514718e+09,
   1.516446e+09,
   1.518174e+09,
   1.519902e+09,
   1.52163e+09,
   1.523354e+09,
   1.525082e+09,
   1.52681e+09,
   1.528538e+09,
   1.530266e+09,
   1.531994e+09,
   1.533722e+09,
   1.53545e+09,
   1.537178e+09,
   1.538906e+09,
   1.540634e+09,
   1.542366e+09,
   1.544094e+09,
   1.545649e+09};
   Double_t sigma_evolution_fy1012[20] = {
   7.548696,
   7.478623,
   7.316321,
   7.404699,
   7.141077,
   7.387101,
   7.463182,
   7.370796,
   7.134671,
   7.551612,
   7.650478,
   7.397686,
   7.193391,
   7.224501,
   7.487743,
   7.70686,
   7.631342,
   7.524575,
   7.588396,
   7.757992};
   Double_t sigma_evolution_fex1012[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t sigma_evolution_fey1012[20] = {
   0.1286198,
   0.1054793,
   0.1210883,
   0.1219937,
   0.1171474,
   0.1156184,
   0.136155,
   0.1248974,
   0.1239602,
   0.1333133,
   0.1377054,
   0.1204946,
   0.1379193,
   0.1226333,
   0.1495771,
   0.1369741,
   0.1369094,
   0.1205668,
   0.1217548,
   0.1430368};
   gre = new TGraphErrors(20,sigma_evolution_fx1012,sigma_evolution_fy1012,sigma_evolution_fex1012,sigma_evolution_fey1012);
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
   
   TH1F *Graph_sigma_evolution1012 = new TH1F("Graph_sigma_evolution1012","Cell 6",100,1.509724e+09,1.548915e+09);
   Graph_sigma_evolution1012->SetMinimum(0);
   Graph_sigma_evolution1012->SetMaximum(14);
   Graph_sigma_evolution1012->SetDirectory(0);
   Graph_sigma_evolution1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_sigma_evolution1012->SetLineColor(ci);
   Graph_sigma_evolution1012->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_sigma_evolution1012->GetXaxis()->SetTimeDisplay(1);
   Graph_sigma_evolution1012->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_sigma_evolution1012->GetXaxis()->SetNdivisions(5);
   Graph_sigma_evolution1012->GetXaxis()->SetLabelFont(42);
   Graph_sigma_evolution1012->GetXaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1012->GetXaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1012->GetXaxis()->SetTitleFont(42);
   Graph_sigma_evolution1012->GetYaxis()->SetTitle("#sigma_{Erec}/E_{rec} (%)");
   Graph_sigma_evolution1012->GetYaxis()->SetLabelFont(42);
   Graph_sigma_evolution1012->GetYaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1012->GetYaxis()->SetTitleSize(0.05);
   Graph_sigma_evolution1012->GetYaxis()->SetTitleOffset(0);
   Graph_sigma_evolution1012->GetYaxis()->SetTitleFont(42);
   Graph_sigma_evolution1012->GetZaxis()->SetLabelFont(42);
   Graph_sigma_evolution1012->GetZaxis()->SetLabelSize(0.035);
   Graph_sigma_evolution1012->GetZaxis()->SetTitleSize(0.035);
   Graph_sigma_evolution1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_sigma_evolution1012);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.1402757,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Cell 1");
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
