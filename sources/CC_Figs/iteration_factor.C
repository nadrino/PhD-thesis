void iteration_factor()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul  8 00:07:52 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-2.445454,-0.8478166,8.463636,0.2612822);
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
   
   Double_t Graph0_fx1001[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1001[8] = {
   -0.5664191,
   0.04933545,
   -0.01817058,
   -0.04997399,
   0.01348684,
   0.009252137,
   0.004360945,
   0.0008741696};
   Double_t Graph0_fex1001[8] = {
   5.673743e-316,
   5.77794e-316,
   5.851457e-316,
   4.947265e-316,
   5.021197e-316,
   1.06385e-315,
   5.582511e-316,
   5.652484e-316};
   Double_t Graph0_fey1001[8] = {
   0.04478968,
   0.04188493,
   0.04471195,
   0.04831844,
   0.04495068,
   0.04501881,
   0.04492927,
   0.04472954};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Residual Shift on E^{rec}(Cell2)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Residual Shift on E^{rec}(Cell2)",100,-0.7,7.7);
   Graph_Graph01001->SetMinimum(-0.6814517);
   Graph_Graph01001->SetMaximum(0.1614633);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(3);
   Graph_Graph01001->SetMarkerSize(1.2);
   Graph_Graph01001->GetXaxis()->SetTitle("Iteration #");
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#deltaE/E (%)");
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
   
   TPaveText *pt = new TPaveText(0.01,0.9197387,0.6064411,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Residual Shift on E^{rec}(Cell2)");
   pt->Draw();
   TLine *line = new TLine(0,-0.6814517,0,0.1614633);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   TLatex *   tex = new TLatex(0.1,0.1,"Correcting C_{i} and far cells L_{ij}");

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1,-0.6814517,1,0.1614633);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
      tex = new TLatex(1.1,-0.1,"Correcting C_{i} and far cells L_{ij}");

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(2,-0.6814517,2,0.1614633);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
      tex = new TLatex(2.1,-0.1,"Correcting neighbor cells L_{ij}");

   ci = TColor::GetColor("#ff0000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(3,-0.6814517,3,0.1614633);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
      tex = new TLatex(3.1,-0.1,"Correcting C_{i} and far cells L_{ij}");

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(4,-0.6814517,4,0.1614633);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
      tex = new TLatex(4.1,-0.1,"Correcting neighbor cells L_{ij}");

   ci = TColor::GetColor("#ff0000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(5,-0.6814517,5,0.1614633);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
      tex = new TLatex(5.1,-0.1,"Correcting C_{i} and far cells L_{ij}");

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(6,-0.6814517,6,0.1614633);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
      tex = new TLatex(6.1,-0.1,"Correcting neighbor cells L_{ij}");

   ci = TColor::GetColor("#ff0000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(-90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph0_fx1002[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1002[8] = {
   -0.5664191,
   0.04933545,
   -0.01817058,
   -0.04997399,
   0.01348684,
   0.009252137,
   0.004360945,
   0.0008741696};
   Double_t Graph0_fex1002[8] = {
   5.673743e-316,
   5.77794e-316,
   5.851457e-316,
   4.947265e-316,
   5.021197e-316,
   1.06385e-315,
   5.582511e-316,
   5.652484e-316};
   Double_t Graph0_fey1002[8] = {
   0.04478968,
   0.04188493,
   0.04471195,
   0.04831844,
   0.04495068,
   0.04501881,
   0.04492927,
   0.04472954};
   gre = new TGraphErrors(8,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Residual Shift on E^{rec}(Cell2)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph_Graph010011002 = new TH1F("Graph_Graph_Graph010011002","Residual Shift on E^{rec}(Cell2)",100,-0.7,7.7);
   Graph_Graph_Graph010011002->SetMinimum(-0.6814517);
   Graph_Graph_Graph010011002->SetMaximum(0.1614633);
   Graph_Graph_Graph010011002->SetDirectory(0);
   Graph_Graph_Graph010011002->SetStats(0);
   Graph_Graph_Graph010011002->SetLineWidth(3);
   Graph_Graph_Graph010011002->SetMarkerSize(1.2);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitle("Iteration #");
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitle("#deltaE/E (%)");
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
   
   gre->Draw("pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
