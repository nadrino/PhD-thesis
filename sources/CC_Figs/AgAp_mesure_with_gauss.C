void AgAp_mesure_with_gauss()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jul 16 15:58:56 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-1.028571,-0.7699411,5.4,5.470012);
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
   
   Double_t Graph0_fx1001[10] = {
   0,
   0.5,
   1,
   1.5,
   2,
   2.5,
   3,
   3.5,
   4,
   4.5};
   Double_t Graph0_fy1001[10] = {
   4.431191,
   4.393632,
   4.361432,
   4.324737,
   4.405768,
   4.386093,
   0.2100457,
   0.2192087,
   0.192354,
   2.028063};
   Double_t Graph0_fex1001[10] = {
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
   Double_t Graph0_fey1001[10] = {
   0.04777842,
   0.03674697,
   0.03675263,
   0.03791178,
   0.04161123,
   0.04781761,
   0.003337753,
   0.004894502,
   0.007851907,
   0.06607746};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Evolution of the fitted A_{g}/A_{p} with a gaussian model");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9933");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff9933");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Evolution of the fitted A_{g}/A_{p} with a gaussian model",100,0,4.95);
   Graph_Graph01001->SetMinimum(0.1660519);
   Graph_Graph01001->SetMaximum(4.908417);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(3);
   Graph_Graph01001->SetMarkerSize(1.2);
   Graph_Graph01001->GetXaxis()->SetTitle("Drift Width (#times#sigma_{p})");
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("A_{g}/A_{p}");
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
   
   TPaveText *pt = new TPaveText(0.01,0.9092857,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Evolution of the fitted A_{g}/A_{p} with a gaussian model");
   pt->Draw();
   TLine *line = new TLine(0,4.4,4.95,4.4);

   ci = TColor::GetColor("#ff9933");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(5);
   line->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
