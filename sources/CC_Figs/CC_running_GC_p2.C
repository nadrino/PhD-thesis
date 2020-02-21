void CC_running_GC_p2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 11:58:36 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.494626e+09,-118.4211,1.561132e+09,671.0526);
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
   
   Double_t Graph0_fx1007[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph0_fy1007[50] = {
   356.3996,
   355.734,
   355.1164,
   354.6818,
   354.0939,
   353.4597,
   352.8811,
   351.7829,
   350.9766,
   350.7132,
   350.9026,
   351.1629,
   351.6318,
   351.2241,
   350.5605,
   350.4013,
   350.4332,
   350.7609,
   350.5891,
   350.4303,
   350.8497,
   350.4471,
   350.3227,
   350.0142,
   350.121,
   350.4527,
   350.3415,
   349.9234,
   349.1463,
   348.6681,
   348.6312,
   348.5319,
   348.5558,
   348.2075,
   348.1021,
   347.9562,
   348.2496,
   348.7806,
   348.6761,
   348.7171,
   348.69,
   348.6136,
   348.5851,
   348.4046,
   347.8211,
   347.7018,
   347.8449,
   347.959,
   347.9421,
   347.6706};
   Double_t Graph0_fex1007[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1007[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of Calibration Coefficient during Phase-2 (v34)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","Evolution of Calibration Coefficient during Phase-2 (v34)",100,1.505267e+09,1.556476e+09);
   Graph_Graph01007->SetMinimum(0);
   Graph_Graph01007->SetMaximum(600);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);
   Graph_Graph01007->SetLineWidth(3);
   Graph_Graph01007->SetMarkerSize(1.2);
   Graph_Graph01007->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph01007->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph01007->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph01007->GetXaxis()->SetNdivisions(5);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1008[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph1_fy1008[50] = {
   345.0929,
   343.8325,
   343.1102,
   342.3906,
   341.3002,
   339.9206,
   338.5973,
   337.3279,
   336.3775,
   336.1255,
   335.888,
   335.5657,
   334.7468,
   334.1097,
   333.1559,
   333.2505,
   333.6935,
   333.7397,
   334.0543,
   333.3862,
   332.762,
   331.8346,
   331.2481,
   331.3402,
   330.9114,
   331.154,
   331.2825,
   331.6117,
   331.7032,
   331.8543,
   331.0837,
   330.4645,
   329.4926,
   329.1533,
   329.6979,
   329.7622,
   329.3529,
   329.5832,
   330.12,
   329.8973,
   330.2301,
   330.4834,
   329.9177,
   330.0724,
   329.6224,
   328.0831,
   327.7273,
   327.9708,
   328.8406,
   329.3087};
   Double_t Graph1_fex1008[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph1_fey1008[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Cell 7");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc3300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc3300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Cell 7",100,1.505267e+09,1.556476e+09);
   Graph_Graph11008->SetMinimum(0);
   Graph_Graph11008->SetMaximum(600);
   Graph_Graph11008->SetDirectory(0);
   Graph_Graph11008->SetStats(0);
   Graph_Graph11008->SetLineWidth(3);
   Graph_Graph11008->SetMarkerSize(1.2);
   Graph_Graph11008->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph11008->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph11008->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph11008->GetXaxis()->SetNdivisions(5);
   Graph_Graph11008->GetXaxis()->SetLabelFont(42);
   Graph_Graph11008->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11008->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph11008->GetXaxis()->SetTitleFont(42);
   Graph_Graph11008->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph11008->GetYaxis()->SetLabelFont(42);
   Graph_Graph11008->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph11008->GetYaxis()->SetTitleFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11008);
   
   gre->Draw("pl");
   
   Double_t Graph2_fx1009[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph2_fy1009[50] = {
   286.5823,
   285.5211,
   284.9327,
   284.4465,
   283.8256,
   283.2889,
   282.6018,
   282.306,
   281.9491,
   281.9745,
   281.8344,
   281.7459,
   282.349,
   281.7538,
   281.1932,
   280.3682,
   280.6973,
   280.6705,
   280.7456,
   281.0641,
   281.2438,
   281.0769,
   280.987,
   280.468,
   280.4643,
   281.0808,
   280.7349,
   280.9075,
   280.3939,
   280.835,
   281.3784,
   281.6146,
   280.9637,
   280.4004,
   279.549,
   279.3142,
   280.0143,
   280.1065,
   280.9733,
   281.4563,
   281.592,
   281.3575,
   280.868,
   280.3714,
   280.4349,
   280.3256,
   280.1756,
   280.1947,
   280.3043,
   280.1103};
   Double_t Graph2_fex1009[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph2_fey1009[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Cell 8");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#990000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Cell 8",100,1.505267e+09,1.556476e+09);
   Graph_Graph21009->SetMinimum(0);
   Graph_Graph21009->SetMaximum(600);
   Graph_Graph21009->SetDirectory(0);
   Graph_Graph21009->SetStats(0);
   Graph_Graph21009->SetLineWidth(3);
   Graph_Graph21009->SetMarkerSize(1.2);
   Graph_Graph21009->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph21009->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph21009->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph21009->GetXaxis()->SetNdivisions(5);
   Graph_Graph21009->GetXaxis()->SetLabelFont(42);
   Graph_Graph21009->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph21009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21009->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph21009->GetXaxis()->SetTitleFont(42);
   Graph_Graph21009->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph21009->GetYaxis()->SetLabelFont(42);
   Graph_Graph21009->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph21009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph21009->GetYaxis()->SetTitleFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21009);
   
   gre->Draw("pl");
   
   Double_t Graph3_fx1010[50] = {
   1.509534e+09,
   1.510405e+09,
   1.511276e+09,
   1.512147e+09,
   1.513018e+09,
   1.513889e+09,
   1.514759e+09,
   1.51563e+09,
   1.516501e+09,
   1.517372e+09,
   1.518243e+09,
   1.519114e+09,
   1.519985e+09,
   1.520856e+09,
   1.521727e+09,
   1.522598e+09,
   1.523469e+09,
   1.52434e+09,
   1.52521e+09,
   1.526081e+09,
   1.526952e+09,
   1.527823e+09,
   1.528694e+09,
   1.529565e+09,
   1.530436e+09,
   1.531307e+09,
   1.532178e+09,
   1.533049e+09,
   1.53392e+09,
   1.53479e+09,
   1.535661e+09,
   1.536532e+09,
   1.537403e+09,
   1.538274e+09,
   1.539145e+09,
   1.540016e+09,
   1.540887e+09,
   1.541758e+09,
   1.542629e+09,
   1.5435e+09,
   1.54437e+09,
   1.545241e+09,
   1.546112e+09,
   1.546983e+09,
   1.547854e+09,
   1.548725e+09,
   1.549596e+09,
   1.550467e+09,
   1.551338e+09,
   1.552209e+09};
   Double_t Graph3_fy1010[50] = {
   324.9945,
   322.9072,
   321.7872,
   320.2334,
   319.0404,
   318.5087,
   317.4014,
   316.8935,
   316.8008,
   316.5089,
   316.4334,
   316.4833,
   316.5177,
   316.5643,
   316.2148,
   316.106,
   315.7125,
   315.4803,
   314.9511,
   314.5324,
   315.0145,
   315.3123,
   315.1454,
   314.6813,
   314.0499,
   314.2448,
   314.2479,
   314.499,
   314.2143,
   314.2129,
   314.5898,
   314.2803,
   313.621,
   312.9855,
   312.3815,
   312.8176,
   312.6378,
   312.8776,
   313.23,
   313.0637,
   313.1565,
   312.6898,
   313.0633,
   313.0124,
   312.4984,
   312.32,
   312.5571,
   312.5527,
   312.0926,
   311.8387};
   Double_t Graph3_fex1010[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph3_fey1010[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   gre = new TGraphErrors(50,Graph3_fx1010,Graph3_fy1010,Graph3_fex1010,Graph3_fey1010);
   gre->SetName("Graph3");
   gre->SetTitle("Cell 9");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff33cc");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff33cc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph31010 = new TH1F("Graph_Graph31010","Cell 9",100,1.505267e+09,1.556476e+09);
   Graph_Graph31010->SetMinimum(0);
   Graph_Graph31010->SetMaximum(600);
   Graph_Graph31010->SetDirectory(0);
   Graph_Graph31010->SetStats(0);
   Graph_Graph31010->SetLineWidth(3);
   Graph_Graph31010->SetMarkerSize(1.2);
   Graph_Graph31010->GetXaxis()->SetTitle("Run Date (MM/YYYY)");
   Graph_Graph31010->GetXaxis()->SetTimeDisplay(1);
   Graph_Graph31010->GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
   Graph_Graph31010->GetXaxis()->SetNdivisions(5);
   Graph_Graph31010->GetXaxis()->SetLabelFont(42);
   Graph_Graph31010->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph31010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph31010->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph31010->GetXaxis()->SetTitleFont(42);
   Graph_Graph31010->GetYaxis()->SetTitle("Calibration Value (pe/MeV)");
   Graph_Graph31010->GetYaxis()->SetLabelFont(42);
   Graph_Graph31010->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph31010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph31010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph31010->GetYaxis()->SetTitleFont(42);
   Graph_Graph31010->GetZaxis()->SetLabelFont(42);
   Graph_Graph31010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph31010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31010);
   
   gre->Draw("pl");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Evolution of Calibration Coefficient during Phase-2 (v34)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
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
   
   leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
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
