void nu_error_fit()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jul 20 12:22:28 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.2948052,-8.237162,2.172727,48.83142);
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
   
   TF1 *pesimistic_error1 = new TF1("pesimistic_error","",0.1,2, TF1::EAddToList::kDefault);
   pesimistic_error1->SetFillColor(19);
   pesimistic_error1->SetFillStyle(0);
   pesimistic_error1->SetMarkerSize(1.2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pesimistic_error1->SetLineColor(ci);
   pesimistic_error1->SetLineStyle(2);
   pesimistic_error1->GetXaxis()->SetTitle("N_{inj}/N_{data}");
   pesimistic_error1->GetXaxis()->SetLabelFont(42);
   pesimistic_error1->GetXaxis()->SetLabelOffset(0.015);
   pesimistic_error1->GetXaxis()->SetLabelSize(0.05);
   pesimistic_error1->GetXaxis()->SetTitleSize(0.06);
   pesimistic_error1->GetXaxis()->SetTitleOffset(1.05);
   pesimistic_error1->GetXaxis()->SetTitleFont(42);
   pesimistic_error1->GetYaxis()->SetTitle("#deltaN_{rec}/N_{inj} (%)");
   pesimistic_error1->GetYaxis()->SetLabelFont(42);
   pesimistic_error1->GetYaxis()->SetLabelOffset(0.015);
   pesimistic_error1->GetYaxis()->SetLabelSize(0.05);
   pesimistic_error1->GetYaxis()->SetTitleSize(0.06);
   pesimistic_error1->GetYaxis()->SetTitleOffset(1.2);
   pesimistic_error1->GetYaxis()->SetTitleFont(42);
   pesimistic_error1->SetParameter(0,4.558475);
   pesimistic_error1->SetParError(0,0);
   pesimistic_error1->SetParLimits(0,0,0);
   pesimistic_error1->Draw("");
   
   TF1 *fit_error2 = new TF1("fit_error","Pseudo experiments fit",0.1,2, TF1::EAddToList::kDefault);
   fit_error2->SetFillColor(19);
   fit_error2->SetFillStyle(0);
   fit_error2->SetMarkerSize(1.2);
   fit_error2->GetXaxis()->SetLabelFont(42);
   fit_error2->GetXaxis()->SetLabelOffset(0.015);
   fit_error2->GetXaxis()->SetLabelSize(0.05);
   fit_error2->GetXaxis()->SetTitleSize(0.06);
   fit_error2->GetXaxis()->SetTitleOffset(1.05);
   fit_error2->GetXaxis()->SetTitleFont(42);
   fit_error2->GetYaxis()->SetLabelFont(42);
   fit_error2->GetYaxis()->SetLabelOffset(0.015);
   fit_error2->GetYaxis()->SetLabelSize(0.05);
   fit_error2->GetYaxis()->SetTitleSize(0.06);
   fit_error2->GetYaxis()->SetTitleOffset(1.2);
   fit_error2->GetYaxis()->SetTitleFont(42);
   fit_error2->Draw("SAME");
   
   TF1 *optimistic_error3 = new TF1("optimistic_error","Optimistic scenario : #propto 1/#sqrt{N_{#nu}}",0.1,2, TF1::EAddToList::kDefault);
   optimistic_error3->SetFillColor(19);
   optimistic_error3->SetFillStyle(0);
   optimistic_error3->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0000ff");
   optimistic_error3->SetLineColor(ci);
   optimistic_error3->SetLineStyle(2);
   optimistic_error3->GetXaxis()->SetLabelFont(42);
   optimistic_error3->GetXaxis()->SetLabelOffset(0.015);
   optimistic_error3->GetXaxis()->SetLabelSize(0.05);
   optimistic_error3->GetXaxis()->SetTitleSize(0.06);
   optimistic_error3->GetXaxis()->SetTitleOffset(1.05);
   optimistic_error3->GetXaxis()->SetTitleFont(42);
   optimistic_error3->GetYaxis()->SetLabelFont(42);
   optimistic_error3->GetYaxis()->SetLabelOffset(0.015);
   optimistic_error3->GetYaxis()->SetLabelSize(0.05);
   optimistic_error3->GetYaxis()->SetTitleSize(0.06);
   optimistic_error3->GetYaxis()->SetTitleOffset(1.2);
   optimistic_error3->GetYaxis()->SetTitleFont(42);
   optimistic_error3->SetParameter(0,4.558475);
   optimistic_error3->SetParError(0,0);
   optimistic_error3->SetParLimits(0,0,0);
   optimistic_error3->Draw("SAME");
   
   TLegend *leg = new TLegend(0.5,0.67,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("pesimistic_error","Pesimistic scenario : #propto 1/N_{#nu}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fit_error","Pseudo experiments fit","lpflpf");
   entry->SetFillColor(19);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("optimistic_error","Optimistic scenario : #propto 1/#sqrt{N_{#nu}}","lpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   TMarker *marker = new TMarker(1,4.558475,29);
   marker->SetMarkerStyle(29);
   marker->SetMarkerSize(3);
   marker->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
