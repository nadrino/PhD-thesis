void DataMC_diff_Mn_nH_v34()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Jul 28 17:11:11 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.7467532,-4.184211,7.045455,3.710526);
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
   
   Double_t Graph0_fx1001[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1001[6] = {
   0.9732289,
   1.601597,
   0.9980624,
   1.61244,
   1.414624,
   0.2011171};
   Double_t Graph0_fex1001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[6] = {
   0.1209142,
   0.1031826,
   0.1060469,
   0.1381949,
   0.1324883,
   0.1346026};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0.5,6.5);
   Graph_Graph01001->SetMinimum(-3);
   Graph_Graph01001->SetMaximum(3);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(3);
   Graph_Graph01001->SetMarkerSize(1.2);
   Graph_Graph01001->GetXaxis()->SetTitle("Cell #");
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#delta E^{rec}(n-H) (%)");
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
   
   gre->Draw("ap");
   TBox *box = new TBox(0.5,0.6335118,6.5,1.633512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.3);
   box->SetFillColor(ci);
   box->SetFillStyle(3002);
   box->SetLineWidth(2);
   box->Draw();
   
   Double_t Graph0_fx1002[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1002[6] = {
   0.9732289,
   1.601597,
   0.9980624,
   1.61244,
   1.414624,
   0.2011171};
   Double_t Graph0_fex1002[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[6] = {
   0.1209142,
   0.1031826,
   0.1060469,
   0.1381949,
   0.1324883,
   0.1346026};
   gre = new TGraphErrors(6,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph010011002 = new TH1F("Graph_Graph_Graph010011002","",100,0.5,6.5);
   Graph_Graph_Graph010011002->SetMinimum(-3);
   Graph_Graph_Graph010011002->SetMaximum(3);
   Graph_Graph_Graph010011002->SetDirectory(0);
   Graph_Graph_Graph010011002->SetStats(0);
   Graph_Graph_Graph010011002->SetLineWidth(3);
   Graph_Graph_Graph010011002->SetMarkerSize(1.2);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitle("Cell #");
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitle("#delta E^{rec}(n-H) (%)");
   Graph_Graph_Graph010011002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph010011002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010011002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010011002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010011002);
   
   gre->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
