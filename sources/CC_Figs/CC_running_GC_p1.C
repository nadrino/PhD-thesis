void CC_running_GC_p1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 11:55:39 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.477366e+09,-118.4211,1.491749e+09,671.0526);
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
   
   Double_t Graph0_fx1023[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph0_fy1023[50] = {
   195.1125,
   193.8816,
   192.5341,
   191.1969,
   189.6793,
   188.0628,
   186.7865,
   185.3558,
   183.9185,
   182.3942,
   180.9014,
   179.3391,
   177.7579,
   176.3795,
   174.9757,
   173.7567,
   172.8189,
   171.8685,
   171.1176,
   170.0862,
   169.4665,
   168.8428,
   168.4198,
   167.8608,
   167.67,
   167.2336,
   166.9594,
   166.6664,
   166.5103,
   166.3973,
   166.1613,
   165.8525,
   165.6086,
   165.3952,
   165.1179,
   164.9776,
   164.736,
   164.6686,
   164.4854,
   164.3061,
   164.0991,
   163.9835,
   163.8745,
   163.619,
   163.3822,
   163.1428,
   162.904,
   162.7985,
   162.7985,
   162.7985};
   Double_t Graph0_fex1023[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1023[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of Calibration Coefficient during Phase-1 (v34)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph010191023 = new TH1F("Graph_Graph_Graph010191023","Evolution of Calibration Coefficient during Phase-1 (v34)",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph010191023->SetMinimum(0);
   Graph_Graph_Graph010191023->SetMaximum(600);
   Graph_Graph_Graph010191023->SetDirectory(0);
   Graph_Graph_Graph010191023->SetStats(0);
   Graph_Graph_Graph010191023->SetLineWidth(3);
   Graph_Graph_Graph010191023->SetMarkerSize(1.2);
   Graph_Graph_Graph010191023->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph010191023->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph010191023->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph010191023->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph010191023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010191023->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph010191023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010191023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010191023->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph010191023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010191023->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph010191023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010191023->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph010191023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010191023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010191023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010191023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010191023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010191023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010191023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010191023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010191023);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1024[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph1_fy1024[50] = {
   383.5016,
   380.265,
   376.6925,
   375.2305,
   373.6849,
   371.8341,
   371.1271,
   370.0315,
   368.9709,
   368.6076,
   368.4355,
   367.4403,
   366.8395,
   365.6187,
   364.6268,
   363.017,
   361.5556,
   360.4558,
   359.6847,
   359.03,
   358.1352,
   357.4225,
   356.4826,
   355.4406,
   354.487,
   353.943,
   353.1893,
   353.165,
   352.7403,
   352.1611,
   351.9945,
   351.4005,
   351.3393,
   351.027,
   350.6352,
   350.5218,
   350.8309,
   350.5162,
   350.1635,
   350.4448,
   350.3995,
   350.3202,
   349.9429,
   350.3027,
   350.0175,
   349.7291,
   349.4416,
   349.3146,
   349.3146,
   349.3146};
   Double_t Graph1_fex1024[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1024[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph1_fx1024,Graph1_fy1024,Graph1_fex1024,Graph1_fey1024);
   gre->SetName("Graph1");
   gre->SetTitle("Cell 7");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph110201024 = new TH1F("Graph_Graph_Graph110201024","Cell 7",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph110201024->SetMinimum(0);
   Graph_Graph_Graph110201024->SetMaximum(600);
   Graph_Graph_Graph110201024->SetDirectory(0);
   Graph_Graph_Graph110201024->SetStats(0);
   Graph_Graph_Graph110201024->SetLineWidth(3);
   Graph_Graph_Graph110201024->SetMarkerSize(1.2);
   Graph_Graph_Graph110201024->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph110201024->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph110201024->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph110201024->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph110201024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph110201024->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph110201024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph110201024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph110201024->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph110201024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph110201024->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph110201024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph110201024->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph110201024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph110201024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph110201024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph110201024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph110201024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph110201024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph110201024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph110201024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph110201024);
   
   gre->Draw("pl");
   
   Double_t Graph2_fx1025[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph2_fy1025[50] = {
   334.6962,
   329.5503,
   323.9983,
   318.505,
   316.7804,
   314.8212,
   313.954,
   313.2721,
   312.8824,
   312.0839,
   311.8562,
   311.4845,
   311.0625,
   310.5684,
   310.5345,
   310.064,
   309.8719,
   307.8578,
   307.3655,
   306.882,
   306.2679,
   305.5592,
   306.2586,
   305.6119,
   305.4835,
   304.924,
   305.2182,
   305.2884,
   306.1658,
   305.6659,
   305.3701,
   305.2253,
   304.8022,
   304.2461,
   304.3292,
   304.6139,
   304.7298,
   304.5668,
   304.4227,
   304.1107,
   303.1226,
   302.1052,
   302.828,
   303.3447,
   304.528,
   305.7241,
   306.9171,
   307.4442,
   307.4442,
   307.4442};
   Double_t Graph2_fex1025[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1025[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph2_fx1025,Graph2_fy1025,Graph2_fex1025,Graph2_fey1025);
   gre->SetName("Graph2");
   gre->SetTitle("Cell 8");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph210211025 = new TH1F("Graph_Graph_Graph210211025","Cell 8",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph210211025->SetMinimum(0);
   Graph_Graph_Graph210211025->SetMaximum(600);
   Graph_Graph_Graph210211025->SetDirectory(0);
   Graph_Graph_Graph210211025->SetStats(0);
   Graph_Graph_Graph210211025->SetLineWidth(3);
   Graph_Graph_Graph210211025->SetMarkerSize(1.2);
   Graph_Graph_Graph210211025->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph210211025->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph210211025->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph210211025->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph210211025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph210211025->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph210211025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph210211025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph210211025->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph210211025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph210211025->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph210211025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph210211025->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph210211025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph210211025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph210211025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph210211025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph210211025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph210211025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph210211025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph210211025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph210211025);
   
   gre->Draw("pl");
   
   Double_t Graph3_fx1026[50] = {
   1.48059e+09,
   1.480778e+09,
   1.480967e+09,
   1.481155e+09,
   1.481343e+09,
   1.481532e+09,
   1.48172e+09,
   1.481908e+09,
   1.482097e+09,
   1.482285e+09,
   1.482474e+09,
   1.482662e+09,
   1.48285e+09,
   1.483039e+09,
   1.483227e+09,
   1.483415e+09,
   1.483604e+09,
   1.483792e+09,
   1.48398e+09,
   1.484169e+09,
   1.484357e+09,
   1.484545e+09,
   1.484734e+09,
   1.484922e+09,
   1.48511e+09,
   1.485299e+09,
   1.485487e+09,
   1.485676e+09,
   1.485864e+09,
   1.486052e+09,
   1.486241e+09,
   1.486429e+09,
   1.486617e+09,
   1.486806e+09,
   1.486994e+09,
   1.487182e+09,
   1.487371e+09,
   1.487559e+09,
   1.487747e+09,
   1.487936e+09,
   1.488124e+09,
   1.488312e+09,
   1.488501e+09,
   1.488689e+09,
   1.488877e+09,
   1.489066e+09,
   1.489254e+09,
   1.489443e+09,
   1.489631e+09,
   1.489819e+09};
   Double_t Graph3_fy1026[50] = {
   376.1392,
   374.5964,
   373.5065,
   373.2436,
   372.6762,
   373.008,
   372.8539,
   373.9556,
   375.0964,
   375.8926,
   376.4225,
   375.7113,
   375.8847,
   375.0722,
   374.3126,
   372.8316,
   371.509,
   368.6297,
   366.2535,
   364.0646,
   361.8886,
   359.5302,
   358.4611,
   357.0336,
   356.0862,
   355.1999,
   354.7597,
   354.497,
   354.1774,
   353.6108,
   352.2261,
   351.2754,
   350.7279,
   350.011,
   348.8996,
   348.857,
   348.086,
   347.1512,
   346.7809,
   346.5966,
   345.491,
   345.1077,
   344.8734,
   343.8919,
   343.4263,
   342.9555,
   342.486,
   342.2786,
   342.2786,
   342.2786};
   Double_t Graph3_fex1026[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1026[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph3_fx1026,Graph3_fy1026,Graph3_fex1026,Graph3_fey1026);
   gre->SetName("Graph3");
   gre->SetTitle("Cell 9");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph310221026 = new TH1F("Graph_Graph_Graph310221026","Cell 9",100,1.479667e+09,1.490742e+09);
   Graph_Graph_Graph310221026->SetMinimum(0);
   Graph_Graph_Graph310221026->SetMaximum(600);
   Graph_Graph_Graph310221026->SetDirectory(0);
   Graph_Graph_Graph310221026->SetStats(0);
   Graph_Graph_Graph310221026->SetLineWidth(3);
   Graph_Graph_Graph310221026->SetMarkerSize(1.2);
   Graph_Graph_Graph310221026->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph_Graph310221026->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph_Graph310221026->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph_Graph310221026->GetXaxis()->SetNdivisions(5);
   Graph_Graph_Graph310221026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph310221026->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph310221026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph310221026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph310221026->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph310221026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph310221026->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph_Graph310221026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph310221026->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph310221026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph310221026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph310221026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph310221026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph310221026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph310221026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph310221026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph310221026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph310221026);
   
   gre->Draw("pl");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Evolution of Calibration Coefficient during Phase-1 (v34)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646341,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Cell 0","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Cell 7","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Cell 8","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Cell 9","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.5676692,0.6646341,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","Cell 0","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Cell 7","lpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Cell 8","lpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Cell 9","lpflpflpflpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
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
