void chi2_p_value_functions_examples()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul 17 17:32:13 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-3.116883,-19.73684,16.36364,111.8421);
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
   
   TF1 *f_prob19 = new TF1("f_prob","#chi^{2} p-value Functions with Normal Laws",0,15, TF1::EAddToList::kDefault);
   f_prob19->SetFillColor(19);
   f_prob19->SetFillStyle(0);
   f_prob19->SetMarkerSize(1.2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33cc33");
   f_prob19->SetLineColor(ci);
   f_prob19->SetLineWidth(3);
   f_prob19->GetXaxis()->SetTitle("#chi^{2}");
   f_prob19->GetXaxis()->SetLabelFont(42);
   f_prob19->GetXaxis()->SetLabelOffset(0.015);
   f_prob19->GetXaxis()->SetLabelSize(0.05);
   f_prob19->GetXaxis()->SetTitleSize(0.06);
   f_prob19->GetXaxis()->SetTitleOffset(1.05);
   f_prob19->GetXaxis()->SetTitleFont(42);
   f_prob19->GetYaxis()->SetTitle("p-value (%)");
   f_prob19->GetYaxis()->SetLabelFont(42);
   f_prob19->GetYaxis()->SetLabelOffset(0.015);
   f_prob19->GetYaxis()->SetLabelSize(0.05);
   f_prob19->GetYaxis()->SetTitleSize(0.06);
   f_prob19->GetYaxis()->SetTitleOffset(1.2);
   f_prob19->GetYaxis()->SetTitleFont(42);
   f_prob19->SetParameter(0,1);
   f_prob19->SetParError(0,0);
   f_prob19->SetParLimits(0,0,0);
   f_prob19->Draw("");
   
   TF1 *f_prob20 = new TF1("f_prob","2 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_prob20->SetFillColor(19);
   f_prob20->SetFillStyle(0);
   f_prob20->SetMarkerSize(1.2);

   ci = TColor::GetColor("#006633");
   f_prob20->SetLineColor(ci);
   f_prob20->SetLineWidth(3);
   f_prob20->GetXaxis()->SetTitle("#chi^{2}");
   f_prob20->GetXaxis()->SetLabelFont(42);
   f_prob20->GetXaxis()->SetLabelOffset(0.015);
   f_prob20->GetXaxis()->SetLabelSize(0.05);
   f_prob20->GetXaxis()->SetTitleSize(0.06);
   f_prob20->GetXaxis()->SetTitleOffset(1.05);
   f_prob20->GetXaxis()->SetTitleFont(42);
   f_prob20->GetYaxis()->SetTitle("p-value (%)");
   f_prob20->GetYaxis()->SetLabelFont(42);
   f_prob20->GetYaxis()->SetLabelOffset(0.015);
   f_prob20->GetYaxis()->SetLabelSize(0.05);
   f_prob20->GetYaxis()->SetTitleSize(0.06);
   f_prob20->GetYaxis()->SetTitleOffset(1.2);
   f_prob20->GetYaxis()->SetTitleFont(42);
   f_prob20->SetParameter(0,2);
   f_prob20->SetParError(0,0);
   f_prob20->SetParLimits(0,0,0);
   f_prob20->Draw("SAME");
   
   TF1 *f_prob21 = new TF1("f_prob","3 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_prob21->SetFillColor(19);
   f_prob21->SetFillStyle(0);
   f_prob21->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0099ff");
   f_prob21->SetLineColor(ci);
   f_prob21->SetLineWidth(3);
   f_prob21->GetXaxis()->SetTitle("#chi^{2}");
   f_prob21->GetXaxis()->SetLabelFont(42);
   f_prob21->GetXaxis()->SetLabelOffset(0.015);
   f_prob21->GetXaxis()->SetLabelSize(0.05);
   f_prob21->GetXaxis()->SetTitleSize(0.06);
   f_prob21->GetXaxis()->SetTitleOffset(1.05);
   f_prob21->GetXaxis()->SetTitleFont(42);
   f_prob21->GetYaxis()->SetTitle("p-value (%)");
   f_prob21->GetYaxis()->SetLabelFont(42);
   f_prob21->GetYaxis()->SetLabelOffset(0.015);
   f_prob21->GetYaxis()->SetLabelSize(0.05);
   f_prob21->GetYaxis()->SetTitleSize(0.06);
   f_prob21->GetYaxis()->SetTitleOffset(1.2);
   f_prob21->GetYaxis()->SetTitleFont(42);
   f_prob21->SetParameter(0,3);
   f_prob21->SetParError(0,0);
   f_prob21->SetParLimits(0,0,0);
   f_prob21->Draw("SAME");
   
   TF1 *f_prob22 = new TF1("f_prob","4 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_prob22->SetFillColor(19);
   f_prob22->SetFillStyle(0);
   f_prob22->SetMarkerSize(1.2);

   ci = TColor::GetColor("#339999");
   f_prob22->SetLineColor(ci);
   f_prob22->SetLineWidth(3);
   f_prob22->GetXaxis()->SetTitle("#chi^{2}");
   f_prob22->GetXaxis()->SetLabelFont(42);
   f_prob22->GetXaxis()->SetLabelOffset(0.015);
   f_prob22->GetXaxis()->SetLabelSize(0.05);
   f_prob22->GetXaxis()->SetTitleSize(0.06);
   f_prob22->GetXaxis()->SetTitleOffset(1.05);
   f_prob22->GetXaxis()->SetTitleFont(42);
   f_prob22->GetYaxis()->SetTitle("p-value (%)");
   f_prob22->GetYaxis()->SetLabelFont(42);
   f_prob22->GetYaxis()->SetLabelOffset(0.015);
   f_prob22->GetYaxis()->SetLabelSize(0.05);
   f_prob22->GetYaxis()->SetTitleSize(0.06);
   f_prob22->GetYaxis()->SetTitleOffset(1.2);
   f_prob22->GetYaxis()->SetTitleFont(42);
   f_prob22->SetParameter(0,4);
   f_prob22->SetParError(0,0);
   f_prob22->SetParLimits(0,0,0);
   f_prob22->Draw("SAME");
   
   TF1 *f_prob23 = new TF1("f_prob","5 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_prob23->SetFillColor(19);
   f_prob23->SetFillStyle(0);
   f_prob23->SetMarkerSize(1.2);

   ci = TColor::GetColor("#6666ff");
   f_prob23->SetLineColor(ci);
   f_prob23->SetLineWidth(3);
   f_prob23->GetXaxis()->SetTitle("#chi^{2}");
   f_prob23->GetXaxis()->SetLabelFont(42);
   f_prob23->GetXaxis()->SetLabelOffset(0.015);
   f_prob23->GetXaxis()->SetLabelSize(0.05);
   f_prob23->GetXaxis()->SetTitleSize(0.06);
   f_prob23->GetXaxis()->SetTitleOffset(1.05);
   f_prob23->GetXaxis()->SetTitleFont(42);
   f_prob23->GetYaxis()->SetTitle("p-value (%)");
   f_prob23->GetYaxis()->SetLabelFont(42);
   f_prob23->GetYaxis()->SetLabelOffset(0.015);
   f_prob23->GetYaxis()->SetLabelSize(0.05);
   f_prob23->GetYaxis()->SetTitleSize(0.06);
   f_prob23->GetYaxis()->SetTitleOffset(1.2);
   f_prob23->GetYaxis()->SetTitleFont(42);
   f_prob23->SetParameter(0,5);
   f_prob23->SetParError(0,0);
   f_prob23->SetParLimits(0,0,0);
   f_prob23->Draw("SAME");
   
   TF1 *f_prob24 = new TF1("f_prob","6 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_prob24->SetFillColor(19);
   f_prob24->SetFillStyle(0);
   f_prob24->SetMarkerSize(1.2);

   ci = TColor::GetColor("#000099");
   f_prob24->SetLineColor(ci);
   f_prob24->SetLineWidth(3);
   f_prob24->GetXaxis()->SetTitle("#chi^{2}");
   f_prob24->GetXaxis()->SetLabelFont(42);
   f_prob24->GetXaxis()->SetLabelOffset(0.015);
   f_prob24->GetXaxis()->SetLabelSize(0.05);
   f_prob24->GetXaxis()->SetTitleSize(0.06);
   f_prob24->GetXaxis()->SetTitleOffset(1.05);
   f_prob24->GetXaxis()->SetTitleFont(42);
   f_prob24->GetYaxis()->SetTitle("p-value (%)");
   f_prob24->GetYaxis()->SetLabelFont(42);
   f_prob24->GetYaxis()->SetLabelOffset(0.015);
   f_prob24->GetYaxis()->SetLabelSize(0.05);
   f_prob24->GetYaxis()->SetTitleSize(0.06);
   f_prob24->GetYaxis()->SetTitleOffset(1.2);
   f_prob24->GetYaxis()->SetTitleFont(42);
   f_prob24->SetParameter(0,6);
   f_prob24->SetParError(0,0);
   f_prob24->SetParLimits(0,0,0);
   f_prob24->Draw("SAME");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("#chi^{2} p-value Functions with Normal Laws");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("f_prob","1 d.o.f.","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","2 d.o.f.","lpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","3 d.o.f.","lpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","4 d.o.f.","lpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","5 d.o.f.","lpflpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","6 d.o.f.","lpflpflpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
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
   entry=leg->AddEntry("f_prob","1 d.o.f.","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","2 d.o.f.","lpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","3 d.o.f.","lpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","4 d.o.f.","lpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","5 d.o.f.","lpflpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_prob","6 d.o.f.","lpflpflpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
