void CalibPhase1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun  5 11:45:09 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",1280,437,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(1.478068e+09,-87.06014,1.49086e+09,493.3408);
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
   
   Double_t Calibration.TGraphErrors_fx1001[41] = {
   1.480936e+09,
   1.481108e+09,
   1.481281e+09,
   1.48154e+09,
   1.481713e+09,
   1.481886e+09,
   1.482145e+09,
   1.482318e+09,
   1.482491e+09,
   1.482836e+09,
   1.483096e+09,
   1.483355e+09,
   1.483528e+09,
   1.4837e+09,
   1.48396e+09,
   1.484132e+09,
   1.484305e+09,
   1.484564e+09,
   1.484737e+09,
   1.48491e+09,
   1.485169e+09,
   1.485342e+09,
   1.485515e+09,
   1.485774e+09,
   1.485947e+09,
   1.48612e+09,
   1.486379e+09,
   1.486552e+09,
   1.486724e+09,
   1.486984e+09,
   1.487156e+09,
   1.487329e+09,
   1.487588e+09,
   1.487761e+09,
   1.487934e+09,
   1.488193e+09,
   1.488366e+09,
   1.488539e+09,
   1.488798e+09,
   1.488971e+09,
   1.489144e+09};
   Double_t Calibration.TGraphErrors_fy1001[41] = {
   258.1298,
   256.6967,
   255.1765,
   254.0771,
   253.0458,
   251.7035,
   250.4783,
   249.5473,
   248.1404,
   245.5463,
   244.1886,
   243.0929,
   242.6769,
   241.5456,
   239.6425,
   238.7827,
   238.2906,
   237.0163,
   237.0804,
   236.1447,
   235.7854,
   235.1706,
   234.6435,
   234.3022,
   234.5583,
   233.8263,
   233.7499,
   233.2462,
   232.7949,
   232.1855,
   231.3846,
   231.0345,
   230.6968,
   230.5436,
   230.136,
   229.9388,
   229.4282,
   229.7979,
   229.5219,
   229.9302,
   230.0169};
   Double_t Calibration.TGraphErrors_fex1001[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Calibration.TGraphErrors_fey1001[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(41,Calibration.TGraphErrors_fx1001,Calibration.TGraphErrors_fy1001,Calibration.TGraphErrors_fex1001,Calibration.TGraphErrors_fey1001);
   gre->SetName("Calibration.TGraphErrors");
   gre->SetTitle("Calibration Coefficient Evolution for Phase-1");
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
   
   TH1F *Graph_CalibrationdOTGraphErrors1001 = new TH1F("Graph_CalibrationdOTGraphErrors1001","Calibration Coefficient Evolution for Phase-1",100,1.480115e+09,1.489964e+09);
   Graph_CalibrationdOTGraphErrors1001->SetMinimum(0);
   Graph_CalibrationdOTGraphErrors1001->SetMaximum(441.1047);
   Graph_CalibrationdOTGraphErrors1001->SetDirectory(0);
   Graph_CalibrationdOTGraphErrors1001->SetStats(0);
   Graph_CalibrationdOTGraphErrors1001->SetLineWidth(3);
   Graph_CalibrationdOTGraphErrors1001->SetMarkerSize(1.2);
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetTimeDisplay(1);
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetNdivisions(5);
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1001->GetXaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1001->GetYaxis()->SetTitle("Calibration Coefficient (pe/MeV)");
   Graph_CalibrationdOTGraphErrors1001->GetYaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1001->GetYaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1001->GetYaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1001->GetYaxis()->SetTitleOffset(0);
   Graph_CalibrationdOTGraphErrors1001->GetYaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1001->GetZaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1001->GetZaxis()->SetLabelSize(0.05);
   Graph_CalibrationdOTGraphErrors1001->GetZaxis()->SetTitleSize(0.06);
   Graph_CalibrationdOTGraphErrors1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Calibration.TGraphErrors1001);
   
   gre->Draw("apl");
   
   Double_t Calibration.TGraphErrors_fx1002[41] = {
   1.480936e+09,
   1.481108e+09,
   1.481281e+09,
   1.48154e+09,
   1.481713e+09,
   1.481886e+09,
   1.482145e+09,
   1.482318e+09,
   1.482491e+09,
   1.482836e+09,
   1.483096e+09,
   1.483355e+09,
   1.483528e+09,
   1.4837e+09,
   1.48396e+09,
   1.484132e+09,
   1.484305e+09,
   1.484564e+09,
   1.484737e+09,
   1.48491e+09,
   1.485169e+09,
   1.485342e+09,
   1.485515e+09,
   1.485774e+09,
   1.485947e+09,
   1.48612e+09,
   1.486379e+09,
   1.486552e+09,
   1.486724e+09,
   1.486984e+09,
   1.487156e+09,
   1.487329e+09,
   1.487588e+09,
   1.487761e+09,
   1.487934e+09,
   1.488193e+09,
   1.488366e+09,
   1.488539e+09,
   1.488798e+09,
   1.488971e+09,
   1.489144e+09};
   Double_t Calibration.TGraphErrors_fy1002[41] = {
   272.2955,
   270.9198,
   268.7976,
   267.155,
   264.5343,
   262.4617,
   258.9538,
   257.4038,
   254.5828,
   249.3704,
   247.6349,
   246.6619,
   246.4147,
   245.6446,
   245.1097,
   243.6777,
   244.4749,
   242.5849,
   243.0953,
   242.369,
   242.793,
   242.0283,
   242.0671,
   242.4834,
   242.5695,
   241.726,
   241.9007,
   241.5656,
   240.5024,
   241.501,
   241.9411,
   239.6407,
   239.9927,
   240.9627,
   240.8342,
   239.9409,
   239.0493,
   239.8483,
   240.7642,
   238.3462,
   238.6524};
   Double_t Calibration.TGraphErrors_fex1002[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Calibration.TGraphErrors_fey1002[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(41,Calibration.TGraphErrors_fx1002,Calibration.TGraphErrors_fy1002,Calibration.TGraphErrors_fex1002,Calibration.TGraphErrors_fey1002);
   gre->SetName("Calibration.TGraphErrors");
   gre->SetTitle("Cell 2");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_CalibrationdOTGraphErrors1002 = new TH1F("Graph_CalibrationdOTGraphErrors1002","Cell 2",100,1.480115e+09,1.489964e+09);
   Graph_CalibrationdOTGraphErrors1002->SetMinimum(0);
   Graph_CalibrationdOTGraphErrors1002->SetMaximum(441.1047);
   Graph_CalibrationdOTGraphErrors1002->SetDirectory(0);
   Graph_CalibrationdOTGraphErrors1002->SetStats(0);
   Graph_CalibrationdOTGraphErrors1002->SetLineWidth(3);
   Graph_CalibrationdOTGraphErrors1002->SetMarkerSize(1.2);
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetTimeDisplay(1);
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetNdivisions(5);
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1002->GetXaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1002->GetYaxis()->SetTitle("Calibration Coefficient (pe/MeV)");
   Graph_CalibrationdOTGraphErrors1002->GetYaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1002->GetYaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1002->GetYaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1002->GetYaxis()->SetTitleOffset(0);
   Graph_CalibrationdOTGraphErrors1002->GetYaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1002->GetZaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1002->GetZaxis()->SetLabelSize(0.05);
   Graph_CalibrationdOTGraphErrors1002->GetZaxis()->SetTitleSize(0.06);
   Graph_CalibrationdOTGraphErrors1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Calibration.TGraphErrors1002);
   
   gre->Draw("pl");
   
   Double_t Calibration.TGraphErrors_fx1003[41] = {
   1.480936e+09,
   1.481108e+09,
   1.481281e+09,
   1.48154e+09,
   1.481713e+09,
   1.481886e+09,
   1.482145e+09,
   1.482318e+09,
   1.482491e+09,
   1.482836e+09,
   1.483096e+09,
   1.483355e+09,
   1.483528e+09,
   1.4837e+09,
   1.48396e+09,
   1.484132e+09,
   1.484305e+09,
   1.484564e+09,
   1.484737e+09,
   1.48491e+09,
   1.485169e+09,
   1.485342e+09,
   1.485515e+09,
   1.485774e+09,
   1.485947e+09,
   1.48612e+09,
   1.486379e+09,
   1.486552e+09,
   1.486724e+09,
   1.486984e+09,
   1.487156e+09,
   1.487329e+09,
   1.487588e+09,
   1.487761e+09,
   1.487934e+09,
   1.488193e+09,
   1.488366e+09,
   1.488539e+09,
   1.488798e+09,
   1.488971e+09,
   1.489144e+09};
   Double_t Calibration.TGraphErrors_fy1003[41] = {
   259.6169,
   257.6595,
   255.653,
   253.3454,
   251.8345,
   249.6841,
   247.5194,
   245.6634,
   243.3761,
   239.9155,
   238.0106,
   236.4507,
   236.3825,
   235.2421,
   234.5884,
   234.3513,
   233.8058,
   234.4065,
   233.3614,
   232.5541,
   233.4188,
   232.8181,
   232.5763,
   232.6341,
   231.6551,
   232.614,
   232.3153,
   231.622,
   231.6612,
   230.9033,
   230.8583,
   230.8251,
   230.4653,
   230.6382,
   230.0006,
   230.7365,
   229.8081,
   230.1866,
   229.9149,
   229.5529,
   228.8479};
   Double_t Calibration.TGraphErrors_fex1003[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Calibration.TGraphErrors_fey1003[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(41,Calibration.TGraphErrors_fx1003,Calibration.TGraphErrors_fy1003,Calibration.TGraphErrors_fex1003,Calibration.TGraphErrors_fey1003);
   gre->SetName("Calibration.TGraphErrors");
   gre->SetTitle("Cell 3");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_CalibrationdOTGraphErrors1003 = new TH1F("Graph_CalibrationdOTGraphErrors1003","Cell 3",100,1.480115e+09,1.489964e+09);
   Graph_CalibrationdOTGraphErrors1003->SetMinimum(0);
   Graph_CalibrationdOTGraphErrors1003->SetMaximum(441.1047);
   Graph_CalibrationdOTGraphErrors1003->SetDirectory(0);
   Graph_CalibrationdOTGraphErrors1003->SetStats(0);
   Graph_CalibrationdOTGraphErrors1003->SetLineWidth(3);
   Graph_CalibrationdOTGraphErrors1003->SetMarkerSize(1.2);
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetTimeDisplay(1);
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetNdivisions(5);
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1003->GetXaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1003->GetYaxis()->SetTitle("Calibration Coefficient (pe/MeV)");
   Graph_CalibrationdOTGraphErrors1003->GetYaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1003->GetYaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1003->GetYaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1003->GetYaxis()->SetTitleOffset(0);
   Graph_CalibrationdOTGraphErrors1003->GetYaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1003->GetZaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1003->GetZaxis()->SetLabelSize(0.05);
   Graph_CalibrationdOTGraphErrors1003->GetZaxis()->SetTitleSize(0.06);
   Graph_CalibrationdOTGraphErrors1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Calibration.TGraphErrors1003);
   
   gre->Draw("pl");
   
   Double_t Calibration.TGraphErrors_fx1004[41] = {
   1.480936e+09,
   1.481108e+09,
   1.481281e+09,
   1.48154e+09,
   1.481713e+09,
   1.481886e+09,
   1.482145e+09,
   1.482318e+09,
   1.482491e+09,
   1.482836e+09,
   1.483096e+09,
   1.483355e+09,
   1.483528e+09,
   1.4837e+09,
   1.48396e+09,
   1.484132e+09,
   1.484305e+09,
   1.484564e+09,
   1.484737e+09,
   1.48491e+09,
   1.485169e+09,
   1.485342e+09,
   1.485515e+09,
   1.485774e+09,
   1.485947e+09,
   1.48612e+09,
   1.486379e+09,
   1.486552e+09,
   1.486724e+09,
   1.486984e+09,
   1.487156e+09,
   1.487329e+09,
   1.487588e+09,
   1.487761e+09,
   1.487934e+09,
   1.488193e+09,
   1.488366e+09,
   1.488539e+09,
   1.488798e+09,
   1.488971e+09,
   1.489144e+09};
   Double_t Calibration.TGraphErrors_fy1004[41] = {
   109.1768,
   108.4703,
   107.5347,
   106.4658,
   105.924,
   105.0845,
   104.2903,
   103.5617,
   102.7506,
   101.6248,
   101.1182,
   100.4355,
   100.3093,
   100.148,
   99.72075,
   99.51908,
   99.43689,
   99.29799,
   99.2219,
   98.76479,
   98.62106,
   98.51467,
   98.13733,
   98.20949,
   98.18572,
   98.01603,
   97.74741,
   97.85147,
   97.35636,
   96.90815,
   96.91996,
   96.62582,
   96.37589,
   96.33526,
   95.95763,
   95.94823,
   95.42915,
   95.90983,
   95.69956,
   95.47635,
   95.29991};
   Double_t Calibration.TGraphErrors_fex1004[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Calibration.TGraphErrors_fey1004[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(41,Calibration.TGraphErrors_fx1004,Calibration.TGraphErrors_fy1004,Calibration.TGraphErrors_fex1004,Calibration.TGraphErrors_fey1004);
   gre->SetName("Calibration.TGraphErrors");
   gre->SetTitle("Cell 4");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#339999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#339999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_CalibrationdOTGraphErrors1004 = new TH1F("Graph_CalibrationdOTGraphErrors1004","Cell 4",100,1.480115e+09,1.489964e+09);
   Graph_CalibrationdOTGraphErrors1004->SetMinimum(0);
   Graph_CalibrationdOTGraphErrors1004->SetMaximum(441.1047);
   Graph_CalibrationdOTGraphErrors1004->SetDirectory(0);
   Graph_CalibrationdOTGraphErrors1004->SetStats(0);
   Graph_CalibrationdOTGraphErrors1004->SetLineWidth(3);
   Graph_CalibrationdOTGraphErrors1004->SetMarkerSize(1.2);
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetTimeDisplay(1);
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetNdivisions(5);
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1004->GetXaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1004->GetYaxis()->SetTitle("Calibration Coefficient (pe/MeV)");
   Graph_CalibrationdOTGraphErrors1004->GetYaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1004->GetYaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1004->GetYaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1004->GetYaxis()->SetTitleOffset(0);
   Graph_CalibrationdOTGraphErrors1004->GetYaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1004->GetZaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1004->GetZaxis()->SetLabelSize(0.05);
   Graph_CalibrationdOTGraphErrors1004->GetZaxis()->SetTitleSize(0.06);
   Graph_CalibrationdOTGraphErrors1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Calibration.TGraphErrors1004);
   
   gre->Draw("pl");
   
   Double_t Calibration.TGraphErrors_fx1005[41] = {
   1.480936e+09,
   1.481108e+09,
   1.481281e+09,
   1.48154e+09,
   1.481713e+09,
   1.481886e+09,
   1.482145e+09,
   1.482318e+09,
   1.482491e+09,
   1.482836e+09,
   1.483096e+09,
   1.483355e+09,
   1.483528e+09,
   1.4837e+09,
   1.48396e+09,
   1.484132e+09,
   1.484305e+09,
   1.484564e+09,
   1.484737e+09,
   1.48491e+09,
   1.485169e+09,
   1.485342e+09,
   1.485515e+09,
   1.485774e+09,
   1.485947e+09,
   1.48612e+09,
   1.486379e+09,
   1.486552e+09,
   1.486724e+09,
   1.486984e+09,
   1.487156e+09,
   1.487329e+09,
   1.487588e+09,
   1.487761e+09,
   1.487934e+09,
   1.488193e+09,
   1.488366e+09,
   1.488539e+09,
   1.488798e+09,
   1.488971e+09,
   1.489144e+09};
   Double_t Calibration.TGraphErrors_fy1005[41] = {
   262.0099,
   256.3351,
   253.1703,
   249.143,
   247.0333,
   245.3905,
   242.5959,
   241.353,
   240.328,
   237.9014,
   236.4131,
   235.8025,
   234.9603,
   234.7253,
   232.6639,
   232.3998,
   232.9067,
   232.678,
   232.4525,
   232.1119,
   231.6398,
   231.3791,
   231.8048,
   230.8279,
   230.7019,
   230.3476,
   230.4398,
   229.7811,
   228.9761,
   228.4911,
   228.1907,
   228.1849,
   227.2794,
   227.7866,
   227.2103,
   227.3175,
   227.0546,
   226.6312,
   226.5793,
   225.9701,
   225.8505};
   Double_t Calibration.TGraphErrors_fex1005[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Calibration.TGraphErrors_fey1005[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(41,Calibration.TGraphErrors_fx1005,Calibration.TGraphErrors_fy1005,Calibration.TGraphErrors_fex1005,Calibration.TGraphErrors_fey1005);
   gre->SetName("Calibration.TGraphErrors");
   gre->SetTitle("Cell 5");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6666ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#6666ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_CalibrationdOTGraphErrors1005 = new TH1F("Graph_CalibrationdOTGraphErrors1005","Cell 5",100,1.480115e+09,1.489964e+09);
   Graph_CalibrationdOTGraphErrors1005->SetMinimum(0);
   Graph_CalibrationdOTGraphErrors1005->SetMaximum(441.1047);
   Graph_CalibrationdOTGraphErrors1005->SetDirectory(0);
   Graph_CalibrationdOTGraphErrors1005->SetStats(0);
   Graph_CalibrationdOTGraphErrors1005->SetLineWidth(3);
   Graph_CalibrationdOTGraphErrors1005->SetMarkerSize(1.2);
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetTimeDisplay(1);
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetNdivisions(5);
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1005->GetXaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1005->GetYaxis()->SetTitle("Calibration Coefficient (pe/MeV)");
   Graph_CalibrationdOTGraphErrors1005->GetYaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1005->GetYaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1005->GetYaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1005->GetYaxis()->SetTitleOffset(0);
   Graph_CalibrationdOTGraphErrors1005->GetYaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1005->GetZaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1005->GetZaxis()->SetLabelSize(0.05);
   Graph_CalibrationdOTGraphErrors1005->GetZaxis()->SetTitleSize(0.06);
   Graph_CalibrationdOTGraphErrors1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Calibration.TGraphErrors1005);
   
   gre->Draw("pl");
   
   Double_t Calibration.TGraphErrors_fx1006[41] = {
   1.480936e+09,
   1.481108e+09,
   1.481281e+09,
   1.48154e+09,
   1.481713e+09,
   1.481886e+09,
   1.482145e+09,
   1.482318e+09,
   1.482491e+09,
   1.482836e+09,
   1.483096e+09,
   1.483355e+09,
   1.483528e+09,
   1.4837e+09,
   1.48396e+09,
   1.484132e+09,
   1.484305e+09,
   1.484564e+09,
   1.484737e+09,
   1.48491e+09,
   1.485169e+09,
   1.485342e+09,
   1.485515e+09,
   1.485774e+09,
   1.485947e+09,
   1.48612e+09,
   1.486379e+09,
   1.486552e+09,
   1.486724e+09,
   1.486984e+09,
   1.487156e+09,
   1.487329e+09,
   1.487588e+09,
   1.487761e+09,
   1.487934e+09,
   1.488193e+09,
   1.488366e+09,
   1.488539e+09,
   1.488798e+09,
   1.488971e+09,
   1.489144e+09};
   Double_t Calibration.TGraphErrors_fy1006[41] = {
   238.2371,
   234.5894,
   232.086,
   230.0088,
   229.2369,
   228.0656,
   227.2178,
   226.9504,
   226.1485,
   225.5612,
   225.2763,
   224.9904,
   224.8417,
   224.2997,
   224.0419,
   222.6735,
   223.4392,
   222.7649,
   222.5183,
   221.5095,
   221.5868,
   221.2887,
   221.2318,
   220.5659,
   220.7363,
   220.4392,
   220.0828,
   219.8226,
   219.9362,
   219.112,
   218.6267,
   218.7899,
   218.1168,
   218.2787,
   217.7647,
   217.7276,
   217.5822,
   217.5959,
   217.6175,
   217.143,
   217.3739};
   Double_t Calibration.TGraphErrors_fex1006[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Calibration.TGraphErrors_fey1006[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(41,Calibration.TGraphErrors_fx1006,Calibration.TGraphErrors_fy1006,Calibration.TGraphErrors_fex1006,Calibration.TGraphErrors_fey1006);
   gre->SetName("Calibration.TGraphErrors");
   gre->SetTitle("Cell 6");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_CalibrationdOTGraphErrors1006 = new TH1F("Graph_CalibrationdOTGraphErrors1006","Cell 6",100,1.480115e+09,1.489964e+09);
   Graph_CalibrationdOTGraphErrors1006->SetMinimum(0);
   Graph_CalibrationdOTGraphErrors1006->SetMaximum(441.1047);
   Graph_CalibrationdOTGraphErrors1006->SetDirectory(0);
   Graph_CalibrationdOTGraphErrors1006->SetStats(0);
   Graph_CalibrationdOTGraphErrors1006->SetLineWidth(3);
   Graph_CalibrationdOTGraphErrors1006->SetMarkerSize(1.2);
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetTitle("Run Date [MM/YYYY]");
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetTimeDisplay(1);
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetNdivisions(5);
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1006->GetXaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1006->GetYaxis()->SetTitle("Calibration Coefficient (pe/MeV)");
   Graph_CalibrationdOTGraphErrors1006->GetYaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1006->GetYaxis()->SetLabelSize(0.035);
   Graph_CalibrationdOTGraphErrors1006->GetYaxis()->SetTitleSize(0.05);
   Graph_CalibrationdOTGraphErrors1006->GetYaxis()->SetTitleOffset(0);
   Graph_CalibrationdOTGraphErrors1006->GetYaxis()->SetTitleFont(42);
   Graph_CalibrationdOTGraphErrors1006->GetZaxis()->SetLabelFont(42);
   Graph_CalibrationdOTGraphErrors1006->GetZaxis()->SetLabelSize(0.05);
   Graph_CalibrationdOTGraphErrors1006->GetZaxis()->SetTitleSize(0.06);
   Graph_CalibrationdOTGraphErrors1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Calibration.TGraphErrors1006);
   
   gre->Draw("pl");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Calibration Coefficient Evolution for Phase-1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calibration.TGraphErrors","Cell 1","lpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 2","lpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 3","lpflpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 4","lpflpflpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 5","lpflpflpflpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 6","lpflpflpflpflpflpf");
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
   
   leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 1","lpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 2","lpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 3","lpflpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 4","lpflpflpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 5","lpflpflpflpflpf");
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
   entry=leg->AddEntry("Calibration.TGraphErrors","Cell 6","lpflpflpflpflpflpf");
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
