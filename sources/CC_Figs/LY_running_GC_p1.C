void LY_running_GC_p1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 16:00:43 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,647);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->SetHighLightColor(2);
   c1->Range(1.477366e+09,-138.1579,1.491749e+09,782.8947);
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
   Double_t Graph0_fy1007[50] = {
   269.4628,
   270.2817,
   270.7676,
   271.7676,
   272.3539,
   272.3865,
   273.0517,
   273.8091,
   274.3206,
   274.6915,
   275.4652,
   276.5851,
   276.865,
   277.4803,
   277.9994,
   278.639,
   278.9161,
   279.0985,
   279.7196,
   280.0852,
   280.3459,
   280.3596,
   280.6718,
   280.641,
   280.4158,
   280.6279,
   280.8575,
   280.7533,
   280.9089,
   280.6842,
   280.7276,
   280.6682,
   280.5234,
   280.2469,
   280.3732,
   280.5156,
   280.49,
   280.5246,
   280.7235,
   280.7874,
   280.8054,
   280.9866,
   281.3409,
   281.5929,
   281.6898,
   281.7863,
   281.8811,
   281.9224,
   281.9224,
   281.9224};
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
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","Evolution of Calibration Coefficient during Phase-1 (v34)",100,1.479667e+09,1.490742e+09);
   Graph_Graph01007->SetMinimum(0);
   Graph_Graph01007->SetMaximum(700);
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
   Graph_Graph01007->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph1_fy1008[50] = {
   447.7122,
   445.0909,
   443.2457,
   442.3748,
   441.243,
   439.7497,
   439.1897,
   438.5106,
   437.235,
   436.8148,
   436.5473,
   435.3482,
   434.3396,
   433.1996,
   432.6867,
   430.863,
   429.9121,
   428.8306,
   427.9856,
   427.0136,
   426.162,
   425.3075,
   424.453,
   423.3119,
   422.1583,
   421.7805,
   420.6064,
   420.1609,
   419.9124,
   419.8955,
   419.9278,
   419.4682,
   419.9978,
   419.9877,
   420.1944,
   420.237,
   420.7421,
   420.6321,
   420.4282,
   420.3392,
   420.6654,
   420.6891,
   420.2469,
   420.6376,
   420.283,
   419.9247,
   419.5673,
   419.4094,
   419.4094,
   419.4094};
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
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Cell 7",100,1.479667e+09,1.490742e+09);
   Graph_Graph11008->SetMinimum(0);
   Graph_Graph11008->SetMaximum(700);
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
   Graph_Graph11008->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph2_fy1009[50] = {
   362.9373,
   360.4109,
   358.4003,
   356.3621,
   355.5631,
   354.5267,
   354.1448,
   353.9319,
   353.771,
   353.5078,
   353.6364,
   353.5146,
   353.3377,
   353.2219,
   353.2271,
   352.9762,
   353.0852,
   351.3654,
   351.5883,
   351.4772,
   351.3896,
   350.8361,
   352.191,
   351.721,
   351.6799,
   350.5916,
   350.269,
   349.6488,
   349.6022,
   350.2028,
   350.6063,
   351.2841,
   351.6084,
   351.2148,
   351.1816,
   351.351,
   351.6137,
   351.3986,
   351.377,
   351.3933,
   351.1783,
   351.0421,
   351.4801,
   351.9143,
   352.1881,
   352.4562,
   352.7149,
   352.8264,
   352.8264,
   352.8264};
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
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Cell 8",100,1.479667e+09,1.490742e+09);
   Graph_Graph21009->SetMinimum(0);
   Graph_Graph21009->SetMaximum(700);
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
   Graph_Graph21009->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   Double_t Graph3_fy1010[50] = {
   396.0002,
   394.4324,
   393.588,
   393.3152,
   392.738,
   392.6979,
   392.5189,
   393.035,
   393.4171,
   393.7875,
   393.8759,
   393.6025,
   393.2715,
   392.8934,
   392.6114,
   392.1383,
   392.0164,
   391.0321,
   390.8797,
   390.5594,
   389.9776,
   389.2944,
   389.3924,
   389.017,
   388.8397,
   388.2501,
   387.9673,
   387.8268,
   387.5255,
   388.2353,
   388.1068,
   388.3222,
   388.4464,
   388.4635,
   388.2106,
   388.4935,
   388.3873,
   388.1765,
   388.0707,
   388.0074,
   387.6199,
   387.7075,
   388.0001,
   387.8394,
   387.7048,
   387.5676,
   387.4298,
   387.3685,
   387.3685,
   387.3685};
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
   
   TH1F *Graph_Graph31010 = new TH1F("Graph_Graph31010","Cell 9",100,1.479667e+09,1.490742e+09);
   Graph_Graph31010->SetMinimum(0);
   Graph_Graph31010->SetMaximum(700);
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
   Graph_Graph31010->GetYaxis()->SetTitle("Total Collected Light (pe/MeV)");
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
   TText *pt_LaTex = pt->AddText("Evolution of Calibration Coefficient during Phase-1 (v34)");
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
