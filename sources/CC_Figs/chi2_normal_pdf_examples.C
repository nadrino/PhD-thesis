void chi2_normal_pdf_examples()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul 17 17:31:18 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-3.116883,-0.05921053,16.36364,0.3355263);
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
   
   TF1 *f_normal1 = new TF1("f_normal","#chi^{2} Probability Density Functions",0,15, TF1::EAddToList::kDefault);
   f_normal1->SetFillColor(19);
   f_normal1->SetFillStyle(0);
   f_normal1->SetMarkerSize(1.2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33cc33");
   f_normal1->SetLineColor(ci);
   f_normal1->SetLineWidth(3);
   f_normal1->GetXaxis()->SetTitle("#chi^{2}");
   f_normal1->GetXaxis()->SetLabelFont(42);
   f_normal1->GetXaxis()->SetLabelOffset(0.015);
   f_normal1->GetXaxis()->SetLabelSize(0.05);
   f_normal1->GetXaxis()->SetTitleSize(0.06);
   f_normal1->GetXaxis()->SetTitleOffset(1.05);
   f_normal1->GetXaxis()->SetTitleFont(42);
   f_normal1->GetYaxis()->SetTitle("Probability Density");
   f_normal1->GetYaxis()->SetLabelFont(42);
   f_normal1->GetYaxis()->SetLabelOffset(0.015);
   f_normal1->GetYaxis()->SetLabelSize(0.05);
   f_normal1->GetYaxis()->SetTitleSize(0.06);
   f_normal1->GetYaxis()->SetTitleOffset(1.2);
   f_normal1->GetYaxis()->SetTitleFont(42);
   f_normal1->SetParameter(0,1);
   f_normal1->SetParError(0,0);
   f_normal1->SetParLimits(0,0,0);
   f_normal1->Draw("");
   
   TF1 *f_normal2 = new TF1("f_normal","2 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_normal2->SetFillColor(19);
   f_normal2->SetFillStyle(0);
   f_normal2->SetMarkerSize(1.2);

   ci = TColor::GetColor("#006633");
   f_normal2->SetLineColor(ci);
   f_normal2->SetLineWidth(3);
   f_normal2->GetXaxis()->SetTitle("#chi^{2}");
   f_normal2->GetXaxis()->SetLabelFont(42);
   f_normal2->GetXaxis()->SetLabelOffset(0.015);
   f_normal2->GetXaxis()->SetLabelSize(0.05);
   f_normal2->GetXaxis()->SetTitleSize(0.06);
   f_normal2->GetXaxis()->SetTitleOffset(1.05);
   f_normal2->GetXaxis()->SetTitleFont(42);
   f_normal2->GetYaxis()->SetTitle("Probability Density");
   f_normal2->GetYaxis()->SetLabelFont(42);
   f_normal2->GetYaxis()->SetLabelOffset(0.015);
   f_normal2->GetYaxis()->SetLabelSize(0.05);
   f_normal2->GetYaxis()->SetTitleSize(0.06);
   f_normal2->GetYaxis()->SetTitleOffset(1.2);
   f_normal2->GetYaxis()->SetTitleFont(42);
   f_normal2->SetParameter(0,2);
   f_normal2->SetParError(0,0);
   f_normal2->SetParLimits(0,0,0);
   f_normal2->Draw("SAME");
   
   TF1 *f_normal3 = new TF1("f_normal","3 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_normal3->SetFillColor(19);
   f_normal3->SetFillStyle(0);
   f_normal3->SetMarkerSize(1.2);

   ci = TColor::GetColor("#0099ff");
   f_normal3->SetLineColor(ci);
   f_normal3->SetLineWidth(3);
   f_normal3->GetXaxis()->SetTitle("#chi^{2}");
   f_normal3->GetXaxis()->SetLabelFont(42);
   f_normal3->GetXaxis()->SetLabelOffset(0.015);
   f_normal3->GetXaxis()->SetLabelSize(0.05);
   f_normal3->GetXaxis()->SetTitleSize(0.06);
   f_normal3->GetXaxis()->SetTitleOffset(1.05);
   f_normal3->GetXaxis()->SetTitleFont(42);
   f_normal3->GetYaxis()->SetTitle("Probability Density");
   f_normal3->GetYaxis()->SetLabelFont(42);
   f_normal3->GetYaxis()->SetLabelOffset(0.015);
   f_normal3->GetYaxis()->SetLabelSize(0.05);
   f_normal3->GetYaxis()->SetTitleSize(0.06);
   f_normal3->GetYaxis()->SetTitleOffset(1.2);
   f_normal3->GetYaxis()->SetTitleFont(42);
   f_normal3->SetParameter(0,3);
   f_normal3->SetParError(0,0);
   f_normal3->SetParLimits(0,0,0);
   f_normal3->Draw("SAME");
   
   TF1 *f_normal4 = new TF1("f_normal","4 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_normal4->SetFillColor(19);
   f_normal4->SetFillStyle(0);
   f_normal4->SetMarkerSize(1.2);

   ci = TColor::GetColor("#339999");
   f_normal4->SetLineColor(ci);
   f_normal4->SetLineWidth(3);
   f_normal4->GetXaxis()->SetTitle("#chi^{2}");
   f_normal4->GetXaxis()->SetLabelFont(42);
   f_normal4->GetXaxis()->SetLabelOffset(0.015);
   f_normal4->GetXaxis()->SetLabelSize(0.05);
   f_normal4->GetXaxis()->SetTitleSize(0.06);
   f_normal4->GetXaxis()->SetTitleOffset(1.05);
   f_normal4->GetXaxis()->SetTitleFont(42);
   f_normal4->GetYaxis()->SetTitle("Probability Density");
   f_normal4->GetYaxis()->SetLabelFont(42);
   f_normal4->GetYaxis()->SetLabelOffset(0.015);
   f_normal4->GetYaxis()->SetLabelSize(0.05);
   f_normal4->GetYaxis()->SetTitleSize(0.06);
   f_normal4->GetYaxis()->SetTitleOffset(1.2);
   f_normal4->GetYaxis()->SetTitleFont(42);
   f_normal4->SetParameter(0,4);
   f_normal4->SetParError(0,0);
   f_normal4->SetParLimits(0,0,0);
   f_normal4->Draw("SAME");
   
   TF1 *f_normal5 = new TF1("f_normal","5 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_normal5->SetFillColor(19);
   f_normal5->SetFillStyle(0);
   f_normal5->SetMarkerSize(1.2);

   ci = TColor::GetColor("#6666ff");
   f_normal5->SetLineColor(ci);
   f_normal5->SetLineWidth(3);
   f_normal5->GetXaxis()->SetTitle("#chi^{2}");
   f_normal5->GetXaxis()->SetLabelFont(42);
   f_normal5->GetXaxis()->SetLabelOffset(0.015);
   f_normal5->GetXaxis()->SetLabelSize(0.05);
   f_normal5->GetXaxis()->SetTitleSize(0.06);
   f_normal5->GetXaxis()->SetTitleOffset(1.05);
   f_normal5->GetXaxis()->SetTitleFont(42);
   f_normal5->GetYaxis()->SetTitle("Probability Density");
   f_normal5->GetYaxis()->SetLabelFont(42);
   f_normal5->GetYaxis()->SetLabelOffset(0.015);
   f_normal5->GetYaxis()->SetLabelSize(0.05);
   f_normal5->GetYaxis()->SetTitleSize(0.06);
   f_normal5->GetYaxis()->SetTitleOffset(1.2);
   f_normal5->GetYaxis()->SetTitleFont(42);
   f_normal5->SetParameter(0,5);
   f_normal5->SetParError(0,0);
   f_normal5->SetParLimits(0,0,0);
   f_normal5->Draw("SAME");
   
   TF1 *f_normal6 = new TF1("f_normal","6 d.o.f.",0,15, TF1::EAddToList::kDefault);
   f_normal6->SetFillColor(19);
   f_normal6->SetFillStyle(0);
   f_normal6->SetMarkerSize(1.2);

   ci = TColor::GetColor("#000099");
   f_normal6->SetLineColor(ci);
   f_normal6->SetLineWidth(3);
   f_normal6->GetXaxis()->SetTitle("#chi^{2}");
   f_normal6->GetXaxis()->SetLabelFont(42);
   f_normal6->GetXaxis()->SetLabelOffset(0.015);
   f_normal6->GetXaxis()->SetLabelSize(0.05);
   f_normal6->GetXaxis()->SetTitleSize(0.06);
   f_normal6->GetXaxis()->SetTitleOffset(1.05);
   f_normal6->GetXaxis()->SetTitleFont(42);
   f_normal6->GetYaxis()->SetTitle("Probability Density");
   f_normal6->GetYaxis()->SetLabelFont(42);
   f_normal6->GetYaxis()->SetLabelOffset(0.015);
   f_normal6->GetYaxis()->SetLabelSize(0.05);
   f_normal6->GetYaxis()->SetTitleSize(0.06);
   f_normal6->GetYaxis()->SetTitleOffset(1.2);
   f_normal6->GetYaxis()->SetTitleFont(42);
   f_normal6->SetParameter(0,6);
   f_normal6->SetParError(0,0);
   f_normal6->SetParLimits(0,0,0);
   f_normal6->Draw("SAME");
   
   TPaveText *pt = new TPaveText(0.01,0.929,0.7004261,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("#chi^{2} Probability Density Functions");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5676692,0.6646342,0.8984962,0.8754355,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("f_normal","1 d.o.f.","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","2 d.o.f.","lpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","3 d.o.f.","lpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","4 d.o.f.","lpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","5 d.o.f.","lpflpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","6 d.o.f.","lpflpflpflpflpflpf");
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
   entry=leg->AddEntry("f_normal","1 d.o.f.","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","2 d.o.f.","lpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","3 d.o.f.","lpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","4 d.o.f.","lpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#339999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","5 d.o.f.","lpflpflpflpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","6 d.o.f.","lpflpflpflpflpflpf");
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
