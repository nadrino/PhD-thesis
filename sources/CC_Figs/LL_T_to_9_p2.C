void LL_T_to_9_p2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 23:10:12 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.492649e+09,0.7171052,1.561404e+09,9.269737);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.07);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[50] = {
   1.508062e+09,
   1.508962e+09,
   1.509862e+09,
   1.510763e+09,
   1.511663e+09,
   1.512563e+09,
   1.513464e+09,
   1.514364e+09,
   1.515264e+09,
   1.516165e+09,
   1.517065e+09,
   1.517966e+09,
   1.518866e+09,
   1.519766e+09,
   1.520667e+09,
   1.521567e+09,
   1.522467e+09,
   1.523368e+09,
   1.524268e+09,
   1.525168e+09,
   1.526069e+09,
   1.526969e+09,
   1.52787e+09,
   1.52877e+09,
   1.52967e+09,
   1.530571e+09,
   1.531471e+09,
   1.532371e+09,
   1.533272e+09,
   1.534172e+09,
   1.535072e+09,
   1.535973e+09,
   1.536873e+09,
   1.537773e+09,
   1.538674e+09,
   1.539574e+09,
   1.540475e+09,
   1.541375e+09,
   1.542275e+09,
   1.543176e+09,
   1.544076e+09,
   1.544976e+09,
   1.545877e+09,
   1.546777e+09,
   1.547677e+09,
   1.548578e+09,
   1.549478e+09,
   1.550379e+09,
   1.551279e+09,
   1.552179e+09};
   Double_t Graph0_fy1001[50] = {
   4.62935,
   4.655474,
   4.894991,
   4.993193,
   5.036507,
   5.208005,
   5.203014,
   5.215982,
   5.203353,
   5.191222,
   5.217231,
   5.229183,
   5.206209,
   5.255168,
   5.260516,
   5.294966,
   5.305165,
   5.306697,
   5.332696,
   5.283722,
   5.259932,
   5.219272,
   5.233836,
   5.228813,
   5.266942,
   5.317316,
   5.314843,
   5.314818,
   5.264735,
   5.245095,
   5.236507,
   5.255142,
   5.274785,
   5.264586,
   5.267156,
   5.266537,
   5.302113,
   5.267105,
   5.231154,
   5.175582,
   5.157758,
   5.155303,
   5.158774,
   5.190041,
   5.166642,
   5.164104,
   5.130458,
   5.120958,
   5.087312,
   5.105972};
   Double_t Graph0_fex1001[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1001[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of the Light Leaks toward Cell 9 during Phase-2 (v34)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Evolution of the Light Leaks toward Cell 9 during Phase-2 (v34)",100,1.50365e+09,1.556591e+09);
   Graph_Graph01001->SetMinimum(2);
   Graph_Graph01001->SetMaximum(8.5);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(3);
   Graph_Graph01001->SetMarkerSize(1.2);
   Graph_Graph01001->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph01001->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph01001->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph01001->GetXaxis()->SetNdivisions(5);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Light Leak (%)");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1002[50] = {
   1.508062e+09,
   1.508962e+09,
   1.509862e+09,
   1.510763e+09,
   1.511663e+09,
   1.512563e+09,
   1.513464e+09,
   1.514364e+09,
   1.515264e+09,
   1.516165e+09,
   1.517065e+09,
   1.517966e+09,
   1.518866e+09,
   1.519766e+09,
   1.520667e+09,
   1.521567e+09,
   1.522467e+09,
   1.523368e+09,
   1.524268e+09,
   1.525168e+09,
   1.526069e+09,
   1.526969e+09,
   1.52787e+09,
   1.52877e+09,
   1.52967e+09,
   1.530571e+09,
   1.531471e+09,
   1.532371e+09,
   1.533272e+09,
   1.534172e+09,
   1.535072e+09,
   1.535973e+09,
   1.536873e+09,
   1.537773e+09,
   1.538674e+09,
   1.539574e+09,
   1.540475e+09,
   1.541375e+09,
   1.542275e+09,
   1.543176e+09,
   1.544076e+09,
   1.544976e+09,
   1.545877e+09,
   1.546777e+09,
   1.547677e+09,
   1.548578e+09,
   1.549478e+09,
   1.550379e+09,
   1.551279e+09,
   1.552179e+09};
   Double_t Graph1_fy1002[50] = {
   4.025875,
   4.138569,
   4.262233,
   4.431838,
   4.508518,
   4.677874,
   4.705895,
   4.696218,
   4.688569,
   4.685362,
   4.707086,
   4.70958,
   4.685167,
   4.707777,
   4.706932,
   4.712012,
   4.690138,
   4.705209,
   4.707564,
   4.688816,
   4.675222,
   4.667541,
   4.695976,
   4.720646,
   4.73273,
   4.740496,
   4.712243,
   4.682028,
   4.673738,
   4.664613,
   4.675301,
   4.717284,
   4.708881,
   4.733784,
   4.690287,
   4.70345,
   4.68169,
   4.686452,
   4.653716,
   4.631802,
   4.662299,
   4.641342,
   4.650801,
   4.649757,
   4.607443,
   4.640535,
   4.629777,
   4.650394,
   4.630585,
   4.64838};
   Double_t Graph1_fex1002[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1002[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("L_{2 #rightarrow 9}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","L_{2 #rightarrow 9}",100,1.50365e+09,1.556591e+09);
   Graph_Graph11002->SetMinimum(2);
   Graph_Graph11002->SetMaximum(8.5);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);
   Graph_Graph11002->SetLineWidth(3);
   Graph_Graph11002->SetMarkerSize(1.2);
   Graph_Graph11002->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph11002->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph11002->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph11002->GetXaxis()->SetNdivisions(5);
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetTitle("Light Leak (%)");
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("pl");
   
   Double_t Graph2_fx1003[50] = {
   1.508062e+09,
   1.508962e+09,
   1.509862e+09,
   1.510763e+09,
   1.511663e+09,
   1.512563e+09,
   1.513464e+09,
   1.514364e+09,
   1.515264e+09,
   1.516165e+09,
   1.517065e+09,
   1.517966e+09,
   1.518866e+09,
   1.519766e+09,
   1.520667e+09,
   1.521567e+09,
   1.522467e+09,
   1.523368e+09,
   1.524268e+09,
   1.525168e+09,
   1.526069e+09,
   1.526969e+09,
   1.52787e+09,
   1.52877e+09,
   1.52967e+09,
   1.530571e+09,
   1.531471e+09,
   1.532371e+09,
   1.533272e+09,
   1.534172e+09,
   1.535072e+09,
   1.535973e+09,
   1.536873e+09,
   1.537773e+09,
   1.538674e+09,
   1.539574e+09,
   1.540475e+09,
   1.541375e+09,
   1.542275e+09,
   1.543176e+09,
   1.544076e+09,
   1.544976e+09,
   1.545877e+09,
   1.546777e+09,
   1.547677e+09,
   1.548578e+09,
   1.549478e+09,
   1.550379e+09,
   1.551279e+09,
   1.552179e+09};
   Double_t Graph2_fy1003[50] = {
   3.424561,
   3.516022,
   3.893982,
   3.817537,
   3.878393,
   4.089083,
   4.192746,
   4.390004,
   4.447033,
   4.279555,
   4.317299,
   4.423112,
   4.649307,
   4.747604,
   4.601807,
   4.596471,
   4.433754,
   4.633866,
   4.581847,
   4.798625,
   4.788381,
   4.509588,
   4.256143,
   4.201854,
   4.18232,
   4.484875,
   4.329316,
   4.533838,
   4.502899,
   4.684487,
   4.731134,
   4.879729,
   4.899496,
   4.918126,
   4.900424,
   4.90112,
   4.915775,
   4.923947,
   4.900205,
   4.6974,
   4.66851,
   4.657261,
   4.57938,
   4.825687,
   4.822194,
   4.826231,
   4.829042,
   4.857666,
   4.851876,
   4.69446};
   Double_t Graph2_fex1003[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1003[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("L_{3 #rightarrow 9}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","L_{3 #rightarrow 9}",100,1.50365e+09,1.556591e+09);
   Graph_Graph21003->SetMinimum(2);
   Graph_Graph21003->SetMaximum(8.5);
   Graph_Graph21003->SetDirectory(0);
   Graph_Graph21003->SetStats(0);
   Graph_Graph21003->SetLineWidth(3);
   Graph_Graph21003->SetMarkerSize(1.2);
   Graph_Graph21003->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph21003->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph21003->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph21003->GetXaxis()->SetNdivisions(5);
   Graph_Graph21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph21003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph21003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph21003->GetYaxis()->SetTitle("Light Leak (%)");
   Graph_Graph21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph21003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph21003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21003);
   
   gre->Draw("pl");
   
   Double_t Graph3_fx1004[50] = {
   1.508062e+09,
   1.508962e+09,
   1.509862e+09,
   1.510763e+09,
   1.511663e+09,
   1.512563e+09,
   1.513464e+09,
   1.514364e+09,
   1.515264e+09,
   1.516165e+09,
   1.517065e+09,
   1.517966e+09,
   1.518866e+09,
   1.519766e+09,
   1.520667e+09,
   1.521567e+09,
   1.522467e+09,
   1.523368e+09,
   1.524268e+09,
   1.525168e+09,
   1.526069e+09,
   1.526969e+09,
   1.52787e+09,
   1.52877e+09,
   1.52967e+09,
   1.530571e+09,
   1.531471e+09,
   1.532371e+09,
   1.533272e+09,
   1.534172e+09,
   1.535072e+09,
   1.535973e+09,
   1.536873e+09,
   1.537773e+09,
   1.538674e+09,
   1.539574e+09,
   1.540475e+09,
   1.541375e+09,
   1.542275e+09,
   1.543176e+09,
   1.544076e+09,
   1.544976e+09,
   1.545877e+09,
   1.546777e+09,
   1.547677e+09,
   1.548578e+09,
   1.549478e+09,
   1.550379e+09,
   1.551279e+09,
   1.552179e+09};
   Double_t Graph3_fy1004[50] = {
   3.420945,
   3.661752,
   4.05603,
   4.151599,
   4.259399,
   4.452058,
   4.461206,
   4.596502,
   4.572434,
   4.597168,
   4.67871,
   4.72372,
   4.748927,
   4.759617,
   4.744811,
   4.764869,
   4.797804,
   4.828976,
   4.864188,
   4.83413,
   4.801801,
   4.811244,
   4.851705,
   4.86895,
   4.865569,
   4.844297,
   4.816248,
   4.821558,
   4.844441,
   4.868511,
   4.864408,
   4.900953,
   4.899103,
   4.947934,
   4.921863,
   4.933932,
   4.920689,
   4.919686,
   4.900549,
   4.884888,
   4.866499,
   4.829774,
   4.847928,
   4.81055,
   4.813104,
   4.854583,
   4.818462,
   4.851749,
   4.8579,
   4.842433};
   Double_t Graph3_fex1004[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1004[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("L_{4 #rightarrow 9}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph31004 = new TH1F("Graph_Graph31004","L_{4 #rightarrow 9}",100,1.50365e+09,1.556591e+09);
   Graph_Graph31004->SetMinimum(2);
   Graph_Graph31004->SetMaximum(8.5);
   Graph_Graph31004->SetDirectory(0);
   Graph_Graph31004->SetStats(0);
   Graph_Graph31004->SetLineWidth(3);
   Graph_Graph31004->SetMarkerSize(1.2);
   Graph_Graph31004->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph31004->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph31004->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph31004->GetXaxis()->SetNdivisions(5);
   Graph_Graph31004->GetXaxis()->SetLabelFont(42);
   Graph_Graph31004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph31004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph31004->GetXaxis()->SetTitleFont(42);
   Graph_Graph31004->GetYaxis()->SetTitle("Light Leak (%)");
   Graph_Graph31004->GetYaxis()->SetLabelFont(42);
   Graph_Graph31004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph31004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph31004->GetYaxis()->SetTitleFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31004);
   
   gre->Draw("pl");
   
   Double_t Graph4_fx1005[50] = {
   1.508062e+09,
   1.508962e+09,
   1.509862e+09,
   1.510763e+09,
   1.511663e+09,
   1.512563e+09,
   1.513464e+09,
   1.514364e+09,
   1.515264e+09,
   1.516165e+09,
   1.517065e+09,
   1.517966e+09,
   1.518866e+09,
   1.519766e+09,
   1.520667e+09,
   1.521567e+09,
   1.522467e+09,
   1.523368e+09,
   1.524268e+09,
   1.525168e+09,
   1.526069e+09,
   1.526969e+09,
   1.52787e+09,
   1.52877e+09,
   1.52967e+09,
   1.530571e+09,
   1.531471e+09,
   1.532371e+09,
   1.533272e+09,
   1.534172e+09,
   1.535072e+09,
   1.535973e+09,
   1.536873e+09,
   1.537773e+09,
   1.538674e+09,
   1.539574e+09,
   1.540475e+09,
   1.541375e+09,
   1.542275e+09,
   1.543176e+09,
   1.544076e+09,
   1.544976e+09,
   1.545877e+09,
   1.546777e+09,
   1.547677e+09,
   1.548578e+09,
   1.549478e+09,
   1.550379e+09,
   1.551279e+09,
   1.552179e+09};
   Double_t Graph4_fy1005[50] = {
   3.945269,
   3.915431,
   4.028853,
   4.212763,
   4.276372,
   4.429267,
   4.4414,
   4.372845,
   4.549833,
   4.556011,
   4.593245,
   4.634211,
   4.622206,
   4.601819,
   4.582041,
   4.608053,
   4.66012,
   4.660162,
   4.666882,
   4.696942,
   4.685353,
   4.685415,
   4.703354,
   4.709945,
   4.742467,
   4.713709,
   4.656354,
   4.665383,
   4.702969,
   4.703942,
   4.687107,
   4.689729,
   4.699924,
   4.691931,
   4.669169,
   4.648613,
   4.667845,
   4.625358,
   4.623016,
   4.613714,
   4.63212,
   4.634568,
   4.636927,
   4.631287,
   4.566632,
   4.563796,
   4.571542,
   4.525388,
   4.438485,
   4.415079};
   Double_t Graph4_fex1005[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph4_fey1005[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph4_fx1005,Graph4_fy1005,Graph4_fex1005,Graph4_fey1005);
   gre->SetName("Graph4");
   gre->SetTitle("L_{5 #rightarrow 9}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph41005 = new TH1F("Graph_Graph41005","L_{5 #rightarrow 9}",100,1.50365e+09,1.556591e+09);
   Graph_Graph41005->SetMinimum(2);
   Graph_Graph41005->SetMaximum(8.5);
   Graph_Graph41005->SetDirectory(0);
   Graph_Graph41005->SetStats(0);
   Graph_Graph41005->SetLineWidth(3);
   Graph_Graph41005->SetMarkerSize(1.2);
   Graph_Graph41005->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph41005->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph41005->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph41005->GetXaxis()->SetNdivisions(5);
   Graph_Graph41005->GetXaxis()->SetLabelFont(42);
   Graph_Graph41005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph41005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph41005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph41005->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph41005->GetXaxis()->SetTitleFont(42);
   Graph_Graph41005->GetYaxis()->SetTitle("Light Leak (%)");
   Graph_Graph41005->GetYaxis()->SetLabelFont(42);
   Graph_Graph41005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph41005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph41005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph41005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph41005->GetYaxis()->SetTitleFont(42);
   Graph_Graph41005->GetZaxis()->SetLabelFont(42);
   Graph_Graph41005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph41005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph41005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41005);
   
   gre->Draw("pl");
   
   Double_t Graph5_fx1006[50] = {
   1.508062e+09,
   1.508962e+09,
   1.509862e+09,
   1.510763e+09,
   1.511663e+09,
   1.512563e+09,
   1.513464e+09,
   1.514364e+09,
   1.515264e+09,
   1.516165e+09,
   1.517065e+09,
   1.517966e+09,
   1.518866e+09,
   1.519766e+09,
   1.520667e+09,
   1.521567e+09,
   1.522467e+09,
   1.523368e+09,
   1.524268e+09,
   1.525168e+09,
   1.526069e+09,
   1.526969e+09,
   1.52787e+09,
   1.52877e+09,
   1.52967e+09,
   1.530571e+09,
   1.531471e+09,
   1.532371e+09,
   1.533272e+09,
   1.534172e+09,
   1.535072e+09,
   1.535973e+09,
   1.536873e+09,
   1.537773e+09,
   1.538674e+09,
   1.539574e+09,
   1.540475e+09,
   1.541375e+09,
   1.542275e+09,
   1.543176e+09,
   1.544076e+09,
   1.544976e+09,
   1.545877e+09,
   1.546777e+09,
   1.547677e+09,
   1.548578e+09,
   1.549478e+09,
   1.550379e+09,
   1.551279e+09,
   1.552179e+09};
   Double_t Graph5_fy1006[50] = {
   4.577256,
   4.72042,
   4.854218,
   5.039085,
   4.881409,
   5.031297,
   5.075922,
   4.992179,
   5.234753,
   5.24142,
   5.255426,
   5.308294,
   5.338211,
   5.27813,
   5.252622,
   5.239089,
   5.247518,
   5.262508,
   5.209894,
   5.253724,
   5.211977,
   5.237116,
   5.277462,
   5.337214,
   5.336968,
   5.309827,
   5.247321,
   5.211384,
   5.212284,
   5.25017,
   5.328776,
   5.299384,
   5.264905,
   5.215634,
   5.265851,
   5.302656,
   5.316739,
   5.290599,
   5.265811,
   5.240538,
   5.276495,
   5.250206,
   5.271612,
   5.257007,
   5.226268,
   5.240766,
   5.239578,
   5.240722,
   5.203779,
   5.185947};
   Double_t Graph5_fex1006[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph5_fey1006[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph5_fx1006,Graph5_fy1006,Graph5_fex1006,Graph5_fey1006);
   gre->SetName("Graph5");
   gre->SetTitle("L_{6 #rightarrow 9}");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph51006 = new TH1F("Graph_Graph51006","L_{6 #rightarrow 9}",100,1.50365e+09,1.556591e+09);
   Graph_Graph51006->SetMinimum(2);
   Graph_Graph51006->SetMaximum(8.5);
   Graph_Graph51006->SetDirectory(0);
   Graph_Graph51006->SetStats(0);
   Graph_Graph51006->SetLineWidth(3);
   Graph_Graph51006->SetMarkerSize(1.2);
   Graph_Graph51006->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph51006->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph51006->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph51006->GetXaxis()->SetNdivisions(5);
   Graph_Graph51006->GetXaxis()->SetLabelFont(42);
   Graph_Graph51006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph51006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph51006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph51006->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph51006->GetXaxis()->SetTitleFont(42);
   Graph_Graph51006->GetYaxis()->SetTitle("Light Leak (%)");
   Graph_Graph51006->GetYaxis()->SetLabelFont(42);
   Graph_Graph51006->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph51006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph51006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph51006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph51006->GetYaxis()->SetTitleFont(42);
   Graph_Graph51006->GetZaxis()->SetLabelFont(42);
   Graph_Graph51006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph51006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph51006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51006);
   
   gre->Draw("pl");
   
   TPaveText *pt = new TPaveText(0.01,0.9176481,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Evolution of the Light Leaks toward Cell 9 during Phase-2 (v34)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","L_{1 #rightarrow 9}","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","L_{2 #rightarrow 9}","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","L_{3 #rightarrow 9}","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","L_{4 #rightarrow 9}","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","L_{5 #rightarrow 9}","lpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","L_{6 #rightarrow 9}","lpflpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","L_{1 #rightarrow 9}","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","L_{2 #rightarrow 9}","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","L_{3 #rightarrow 9}","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","L_{4 #rightarrow 9}","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","L_{5 #rightarrow 9}","lpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","L_{6 #rightarrow 9}","lpflpflpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
