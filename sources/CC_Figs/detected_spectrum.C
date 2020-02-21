void detected_spectrum()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jul 27 19:50:21 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-2.077922,-0.1720093,10.90909,0.9747195);
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
   
   TF1 *f_mueler1 = new TF1("f_mueler","",0,10, TF1::EAddToList::kDefault);
   f_mueler1->SetFillColor(19);
   f_mueler1->SetFillStyle(0);
   f_mueler1->SetMarkerSize(1.2);
   f_mueler1->GetXaxis()->SetTitle("Kinetic Energy (MeV)");
   f_mueler1->GetXaxis()->SetLabelFont(42);
   f_mueler1->GetXaxis()->SetLabelOffset(0.015);
   f_mueler1->GetXaxis()->SetLabelSize(0.05);
   f_mueler1->GetXaxis()->SetTitleSize(0.06);
   f_mueler1->GetXaxis()->SetTitleOffset(1.05);
   f_mueler1->GetXaxis()->SetTitleFont(42);
   f_mueler1->GetYaxis()->SetTitle("Cross Section (a.u.)");
   f_mueler1->GetYaxis()->SetLabelFont(42);
   f_mueler1->GetYaxis()->SetLabelOffset(0.015);
   f_mueler1->GetYaxis()->SetLabelSize(0.05);
   f_mueler1->GetYaxis()->SetTitleSize(0.06);
   f_mueler1->GetYaxis()->SetTitleOffset(1.2);
   f_mueler1->GetYaxis()->SetTitleFont(42);
   f_mueler1->SetParameter(0,0.2693024);
   f_mueler1->SetParError(0,0);
   f_mueler1->SetParLimits(0,0,0);
   f_mueler1->SetParameter(1,0);
   f_mueler1->SetParError(1,0);
   f_mueler1->SetParLimits(1,0,0);
   f_mueler1->Draw("");
   
   TF1 *f_va2 = new TF1("f_va","IBD Cross Section",1.806,10, TF1::EAddToList::kDefault);
   f_va2->SetFillColor(19);
   f_va2->SetFillStyle(0);
   f_va2->SetMarkerSize(1.2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   f_va2->SetLineColor(ci);
   f_va2->GetXaxis()->SetLabelFont(42);
   f_va2->GetXaxis()->SetLabelOffset(0.015);
   f_va2->GetXaxis()->SetLabelSize(0.05);
   f_va2->GetXaxis()->SetTitleSize(0.06);
   f_va2->GetXaxis()->SetTitleOffset(1.05);
   f_va2->GetXaxis()->SetTitleFont(42);
   f_va2->GetYaxis()->SetLabelFont(42);
   f_va2->GetYaxis()->SetLabelOffset(0.015);
   f_va2->GetYaxis()->SetLabelSize(0.05);
   f_va2->GetYaxis()->SetTitleSize(0.06);
   f_va2->GetYaxis()->SetTitleOffset(1.2);
   f_va2->GetYaxis()->SetTitleFont(42);
   f_va2->SetParameter(0,0.00817946);
   f_va2->SetParError(0,0);
   f_va2->SetParLimits(0,0,0);
   f_va2->SetParameter(1,0);
   f_va2->SetParError(1,0);
   f_va2->SetParLimits(1,0,0);
   f_va2->Draw("SAME");
   
   TF1 *f_det3 = new TF1("f_det","Neutrino Spectrum",1.806,10, TF1::EAddToList::kDefault);
   f_det3->SetFillColor(19);
   f_det3->SetFillStyle(0);
   f_det3->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   f_det3->SetLineColor(ci);
   f_det3->GetXaxis()->SetLabelFont(42);
   f_det3->GetXaxis()->SetLabelOffset(0.015);
   f_det3->GetXaxis()->SetLabelSize(0.05);
   f_det3->GetXaxis()->SetTitleSize(0.06);
   f_det3->GetXaxis()->SetTitleOffset(1.05);
   f_det3->GetXaxis()->SetTitleFont(42);
   f_det3->GetYaxis()->SetLabelFont(42);
   f_det3->GetYaxis()->SetLabelOffset(0.015);
   f_det3->GetYaxis()->SetLabelSize(0.05);
   f_det3->GetYaxis()->SetTitleSize(0.06);
   f_det3->GetYaxis()->SetTitleOffset(1.2);
   f_det3->GetYaxis()->SetTitleFont(42);
   f_det3->SetParameter(0,0.4449397);
   f_det3->SetParError(0,0);
   f_det3->SetParLimits(0,0,0);
   f_det3->SetParameter(1,0);
   f_det3->SetParError(1,0);
   f_det3->SetParLimits(1,0,0);
   f_det3->SetParameter(2,1);
   f_det3->SetParError(2,0);
   f_det3->SetParLimits(2,0,0);
   f_det3->SetParameter(3,0);
   f_det3->SetParError(3,0);
   f_det3->SetParLimits(3,0,0);
   f_det3->Draw("SAME");
   
   TLegend *leg = new TLegend(0.5,0.67,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("f_mueler","Pure {}^{235}U Prediction","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_va","IBD Cross Section","lpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_det","Neutrino Spectrum","lpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
