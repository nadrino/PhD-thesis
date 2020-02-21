void Sigma_peak_Erec34_nH_250GC_phase-1_fit-crystalball_stacks-10_analysis()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Mon Jul  8 23:43:49 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(1.478448e+09,-2.763158,1.490701e+09,15.65789);
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
   
   Double_t sigma_evolution_fx1001[10] = {
   1.481195e+09,
   1.482059e+09,
   1.482923e+09,
   1.483787e+09,
   1.484651e+09,
   1.485515e+09,
   1.486379e+09,
   1.487243e+09,
   1.488107e+09,
   1.489057e+09};
   Double_t sigma_evolution_fy1001[10] = {
   6.245795,
   5.895485,
   5.668233,
   6.153941,
   5.711175,
   6.268707,
   6.446111,
   6.054849,
   5.786026,
   6.378474};
   Double_t sigma_evolution_fex1001[10] = {
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
   Double_t sigma_evolution_fey1001[10] = {
   0.2399789,
   0.3050394,
   0.2324242,
   0.1525825,
   0.2199752,
   0.2463351,
   0.2002574,
   0.2103388,
   0.2658774,
   0.2400092};
   TGraphErrors *gre = new TGraphErrors(10,sigma_evolution_fx1001,sigma_evolution_fy1001,sigma_evolution_fex1001,sigma_evolution_fey1001);
   gre->SetName("sigma_evolution");
   gre->SetTitle("n-H peak resolution monitoring with v34 / Phase-1");
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
   
   TH1F *Graph_sigma_evolution1001 = new TH1F("Graph_sigma_evolution1001","n-H peak resolution monitoring with v34 / Phase-1",100,1.480409e+09,1.489843e+09);
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
   
   Double_t sigma_evolution_fx1002[10] = {
   1.481195e+09,
   1.482059e+09,
   1.482923e+09,
   1.483787e+09,
   1.484651e+09,
   1.485515e+09,
   1.486379e+09,
   1.487243e+09,
   1.488107e+09,
   1.489057e+09};
   Double_t sigma_evolution_fy1002[10] = {
   5.345134,
   4.978179,
   5.531373,
   5.210356,
   5.876095,
   5.174907,
   5.691977,
   5.842794,
   5.944811,
   5.209709};
   Double_t sigma_evolution_fex1002[10] = {
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
   Double_t sigma_evolution_fey1002[10] = {
   0.2391202,
   0.3044507,
   0.1739725,
   0.2206102,
   0.2383717,
   0.2106362,
   0.1904218,
   0.1763949,
   0.2070602,
   0.2628283};
   gre = new TGraphErrors(10,sigma_evolution_fx1002,sigma_evolution_fy1002,sigma_evolution_fex1002,sigma_evolution_fey1002);
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
   
   TH1F *Graph_sigma_evolution1002 = new TH1F("Graph_sigma_evolution1002","Cell 2",100,1.480409e+09,1.489843e+09);
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
   
   Double_t sigma_evolution_fx1003[10] = {
   1.481195e+09,
   1.482059e+09,
   1.482923e+09,
   1.483787e+09,
   1.484651e+09,
   1.485515e+09,
   1.486379e+09,
   1.487243e+09,
   1.488107e+09,
   1.489057e+09};
   Double_t sigma_evolution_fy1003[10] = {
   5.66191,
   5.721938,
   5.931654,
   5.635748,
   5.604113,
   5.922394,
   6.124593,
   5.410249,
   5.852588,
   5.849401};
   Double_t sigma_evolution_fex1003[10] = {
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
   Double_t sigma_evolution_fey1003[10] = {
   0.2572441,
   0.3151945,
   0.2250035,
   0.1785189,
   0.2111438,
   0.1916635,
   0.1955496,
   0.2886757,
   0.2198758,
   0.2306053};
   gre = new TGraphErrors(10,sigma_evolution_fx1003,sigma_evolution_fy1003,sigma_evolution_fex1003,sigma_evolution_fey1003);
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
   
   TH1F *Graph_sigma_evolution1003 = new TH1F("Graph_sigma_evolution1003","Cell 3",100,1.480409e+09,1.489843e+09);
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
   
   Double_t sigma_evolution_fx1004[10] = {
   1.481195e+09,
   1.482059e+09,
   1.482923e+09,
   1.483787e+09,
   1.484651e+09,
   1.485515e+09,
   1.486379e+09,
   1.487243e+09,
   1.488107e+09,
   1.489057e+09};
   Double_t sigma_evolution_fy1004[10] = {
   6.673544,
   6.501274,
   6.297225,
   6.475438,
   7.077238,
   6.697543,
   6.918643,
   6.899939,
   6.992407,
   6.847011};
   Double_t sigma_evolution_fex1004[10] = {
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
   Double_t sigma_evolution_fey1004[10] = {
   0.3080281,
   0.3577815,
   0.2888954,
   0.2727925,
   0.2232202,
   0.2405092,
   0.2529579,
   0.3280687,
   0.2471879,
   0.2907604};
   gre = new TGraphErrors(10,sigma_evolution_fx1004,sigma_evolution_fy1004,sigma_evolution_fex1004,sigma_evolution_fey1004);
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
   
   TH1F *Graph_sigma_evolution1004 = new TH1F("Graph_sigma_evolution1004","Cell 4",100,1.480409e+09,1.489843e+09);
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
   
   Double_t sigma_evolution_fx1005[10] = {
   1.481195e+09,
   1.482059e+09,
   1.482923e+09,
   1.483787e+09,
   1.484651e+09,
   1.485515e+09,
   1.486379e+09,
   1.487243e+09,
   1.488107e+09,
   1.489057e+09};
   Double_t sigma_evolution_fy1005[10] = {
   5.371746,
   5.359285,
   5.690908,
   5.527291,
   5.467448,
   6.022873,
   5.532507,
   5.793255,
   5.582631,
   5.977582};
   Double_t sigma_evolution_fex1005[10] = {
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
   Double_t sigma_evolution_fey1005[10] = {
   0.215891,
   0.2658715,
   0.1670758,
   0.177038,
   0.2346877,
   0.1770887,
   0.2544464,
   0.2171656,
   0.2365376,
   0.2130687};
   gre = new TGraphErrors(10,sigma_evolution_fx1005,sigma_evolution_fy1005,sigma_evolution_fex1005,sigma_evolution_fey1005);
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
   
   TH1F *Graph_sigma_evolution1005 = new TH1F("Graph_sigma_evolution1005","Cell 5",100,1.480409e+09,1.489843e+09);
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
   
   Double_t sigma_evolution_fx1006[10] = {
   1.481195e+09,
   1.482059e+09,
   1.482923e+09,
   1.483787e+09,
   1.484651e+09,
   1.485515e+09,
   1.486379e+09,
   1.487243e+09,
   1.488107e+09,
   1.489057e+09};
   Double_t sigma_evolution_fy1006[10] = {
   5.791684,
   5.534474,
   5.721601,
   5.84251,
   6.352833,
   5.909856,
   5.72086,
   6.023419,
   6.155517,
   6.268272};
   Double_t sigma_evolution_fex1006[10] = {
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
   Double_t sigma_evolution_fey1006[10] = {
   0.2537503,
   0.198624,
   0.1732499,
   0.1329941,
   0.1403268,
   0.180903,
   0.1819417,
   0.148608,
   0.1549961,
   0.1663687};
   gre = new TGraphErrors(10,sigma_evolution_fx1006,sigma_evolution_fy1006,sigma_evolution_fex1006,sigma_evolution_fey1006);
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
   
   TH1F *Graph_sigma_evolution1006 = new TH1F("Graph_sigma_evolution1006","Cell 6",100,1.480409e+09,1.489843e+09);
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
   TText *pt_LaTex = pt->AddText("n-H peak resolution monitoring with v34 / Phase-1");
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
