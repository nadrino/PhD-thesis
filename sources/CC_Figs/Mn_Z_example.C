void Mn_Z_example()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jul  9 12:22:03 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-905.2168,-1.912548,53.87474,2.655762);
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
   
   Double_t Graph0_fx1002[5] = {
   -690.2205,
   -516.93,
   -378.5651,
   -241.8001,
   -74.80338};
   Double_t Graph0_fy1002[5] = {
   -0.6452522,
   -0.9379748,
   -0.287203,
   0.6089992,
   1.955288};
   Double_t Graph0_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[5] = {
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Top-Bottom Divergence for Cell 2");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph010011002 = new TH1F("Graph_Graph_Graph010011002","Top-Bottom Divergence for Cell 2",100,-751.7622,-13.26167);
   Graph_Graph_Graph010011002->SetMinimum(-1.227301);
   Graph_Graph_Graph010011002->SetMaximum(2.244614);
   Graph_Graph_Graph010011002->SetDirectory(0);
   Graph_Graph_Graph010011002->SetStats(0);
   Graph_Graph_Graph010011002->SetLineWidth(3);
   Graph_Graph_Graph010011002->SetMarkerSize(1.2);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitle("Mean First Interaction Position in Z (mm)");
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph010011002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleOffset(1.05);
   Graph_Graph_Graph010011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010011002->GetYaxis()->SetTitle("E^{rec}_{Data}/E^{rec}_{MC} - 1 (%)");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Top-Bottom Divergence for Cell 2");
   pt->Draw();
   
   TF1 *fit_function2 = new TF1("fit_function","3^{rd} Order Polynom Fit",-751.7622,-13.26167, TF1::EAddToList::kNo);
   fit_function2->SetFillColor(19);
   fit_function2->SetFillStyle(0);
   fit_function2->SetLineColor(2);
   fit_function2->SetLineWidth(3);
   fit_function2->SetChisquare(0.003352521);
   fit_function2->SetNDF(1);
   fit_function2->GetXaxis()->SetLabelFont(42);
   fit_function2->GetXaxis()->SetLabelOffset(0.015);
   fit_function2->GetXaxis()->SetLabelSize(0.05);
   fit_function2->GetXaxis()->SetTitleSize(0.06);
   fit_function2->GetXaxis()->SetTitleOffset(1.05);
   fit_function2->GetXaxis()->SetTitleFont(42);
   fit_function2->GetYaxis()->SetLabelFont(42);
   fit_function2->GetYaxis()->SetLabelOffset(0.015);
   fit_function2->GetYaxis()->SetLabelSize(0.05);
   fit_function2->GetYaxis()->SetTitleSize(0.06);
   fit_function2->GetYaxis()->SetTitleOffset(1.2);
   fit_function2->GetYaxis()->SetTitleFont(42);
   fit_function2->SetParameter(0,2.464837);
   fit_function2->SetParError(0,0.1347356);
   fit_function2->SetParLimits(0,0,0);
   fit_function2->SetParameter(1,0.006265144);
   fit_function2->SetParError(1,0.001614151);
   fit_function2->SetParLimits(1,0,0);
   fit_function2->SetParameter(2,-9.624002e-06);
   fit_function2->SetParError(2,4.97764e-06);
   fit_function2->SetParLimits(2,0,0);
   fit_function2->SetParameter(3,-1.762033e-08);
   fit_function2->SetParError(3,4.304018e-09);
   fit_function2->SetParLimits(3,0,0);
   fit_function2->Draw("SAME");
   
   TLegend *leg = new TLegend(0.6052632,0.2003484,0.9849624,0.4111498,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","^{54}Mn Runs","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fit_function","3^{rd} Order Polynom Fit","lpflpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(-449.1788,-1.227301,-449.1788,2.244614);
   line->SetLineColor(14);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
