void null_hypothesis_chi2_TEST()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Feb 17 10:48:07 2020) by ROOT version 6.18/04
   TCanvas *c1 = new TCanvas("c1", "c1",0,306,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-0.7792192,-0.009757895,129.0909,0.05529474);
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
   
   TH1F *h_chi2__1 = new TH1F("h_chi2__1","",20,20,120);
   h_chi2__1->SetBinContent(2,0.0004);
   h_chi2__1->SetBinContent(3,0.0028);
   h_chi2__1->SetBinContent(4,0.007);
   h_chi2__1->SetBinContent(5,0.0236);
   h_chi2__1->SetBinContent(6,0.0302);
   h_chi2__1->SetBinContent(7,0.0412);
   h_chi2__1->SetBinContent(8,0.0354);
   h_chi2__1->SetBinContent(9,0.026);
   h_chi2__1->SetBinContent(10,0.0192);
   h_chi2__1->SetBinContent(11,0.0074);
   h_chi2__1->SetBinContent(12,0.0036);
   h_chi2__1->SetBinContent(13,0.0016);
   h_chi2__1->SetBinContent(14,0.0008);
   h_chi2__1->SetBinContent(15,0.0006);
   h_chi2__1->SetBinContent(18,0.0002);
   h_chi2__1->SetBinError(2,0.0002828427);
   h_chi2__1->SetBinError(3,0.0007483315);
   h_chi2__1->SetBinError(4,0.001183216);
   h_chi2__1->SetBinError(5,0.002172556);
   h_chi2__1->SetBinError(6,0.002457641);
   h_chi2__1->SetBinError(7,0.00287054);
   h_chi2__1->SetBinError(8,0.002660827);
   h_chi2__1->SetBinError(9,0.002280351);
   h_chi2__1->SetBinError(10,0.001959592);
   h_chi2__1->SetBinError(11,0.001216553);
   h_chi2__1->SetBinError(12,0.0008485281);
   h_chi2__1->SetBinError(13,0.0005656854);
   h_chi2__1->SetBinError(14,0.0004);
   h_chi2__1->SetBinError(15,0.0003464102);
   h_chi2__1->SetBinError(18,0.0002);
   h_chi2__1->SetMinimum(0);
   h_chi2__1->SetMaximum(0.04944);
   h_chi2__1->SetEntries(1000);
   h_chi2__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_chi2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1000   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  55.18");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  10.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h_chi2__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_chi2__1);
   h_chi2__1->SetLineWidth(3);
   h_chi2__1->SetMarkerStyle(8);
   h_chi2__1->SetMarkerSize(1.2);
   h_chi2__1->GetXaxis()->SetTitle("#chi^{2}(H_{0})");
   h_chi2__1->GetXaxis()->SetLabelFont(42);
   h_chi2__1->GetXaxis()->SetLabelOffset(0.015);
   h_chi2__1->GetXaxis()->SetLabelSize(0.05);
   h_chi2__1->GetXaxis()->SetTitleSize(0.06);
   h_chi2__1->GetXaxis()->SetTitleOffset(1.05);
   h_chi2__1->GetXaxis()->SetTitleFont(42);
   h_chi2__1->GetYaxis()->SetTitle("Probability Density");
   h_chi2__1->GetYaxis()->SetNdivisions(3000510);
   h_chi2__1->GetYaxis()->SetLabelFont(42);
   h_chi2__1->GetYaxis()->SetLabelOffset(0.015);
   h_chi2__1->GetYaxis()->SetLabelSize(0.05);
   h_chi2__1->GetYaxis()->SetTitleSize(0.06);
   h_chi2__1->GetYaxis()->SetTitleOffset(1.2);
   h_chi2__1->GetYaxis()->SetTitleFont(42);
   h_chi2__1->GetZaxis()->SetLabelFont(42);
   h_chi2__1->GetZaxis()->SetLabelSize(0.05);
   h_chi2__1->GetZaxis()->SetTitleSize(0.06);
   h_chi2__1->GetZaxis()->SetTitleOffset(1);
   h_chi2__1->GetZaxis()->SetTitleFont(42);
   h_chi2__1->Draw("E");
   
   TF1 *f_normal1 = new TF1("f_normal","Normal #chi^{2} PDF with 55 d.o.f.  ",20,120, TF1::EAddToList::kDefault);
   f_normal1->SetFillColor(19);
   f_normal1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   f_normal1->SetMarkerColor(ci);
   f_normal1->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   f_normal1->SetLineColor(ci);
   f_normal1->SetLineWidth(3);
   f_normal1->GetXaxis()->SetLabelFont(42);
   f_normal1->GetXaxis()->SetLabelSize(0.035);
   f_normal1->GetXaxis()->SetTitleSize(0.035);
   f_normal1->GetXaxis()->SetTitleOffset(1);
   f_normal1->GetXaxis()->SetTitleFont(42);
   f_normal1->GetYaxis()->SetLabelFont(42);
   f_normal1->GetYaxis()->SetLabelSize(0.035);
   f_normal1->GetYaxis()->SetTitleSize(0.035);
   f_normal1->GetYaxis()->SetTitleFont(42);
   f_normal1->SetParameter(0,55);
   f_normal1->SetParError(0,0);
   f_normal1->SetParLimits(0,0,0);
   f_normal1->Draw("SAME");
   
   TLegend *leg = new TLegend(0.5,0.67,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_chi2","Pseudo-experiments #chi^{2}","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f_normal","Normal #chi^{2} PDF with 55 d.o.f.  ","lpflpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(45.42833,0,45.42833,0.04944);

   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(5);
   line->Draw();
   
   TF1 *f_normal2 = new TF1("f_normal","Normal #chi^{2} PDF with 55 d.o.f.  ",20,45.42833, TF1::EAddToList::kDefault);

   ci = TColor::GetColor("#ff0000");
   f_normal2->SetFillColor(ci);
   f_normal2->SetFillStyle(3002);

   ci = TColor::GetColor("#ff0000");
   f_normal2->SetMarkerColor(ci);
   f_normal2->SetMarkerSize(1.2);

   ci = TColor::GetColor("#ff0000");
   f_normal2->SetLineColor(ci);
   f_normal2->SetLineWidth(3);
   f_normal2->GetXaxis()->SetLabelFont(42);
   f_normal2->GetXaxis()->SetLabelSize(0.035);
   f_normal2->GetXaxis()->SetTitleSize(0.035);
   f_normal2->GetXaxis()->SetTitleOffset(1);
   f_normal2->GetXaxis()->SetTitleFont(42);
   f_normal2->GetYaxis()->SetLabelFont(42);
   f_normal2->GetYaxis()->SetLabelSize(0.035);
   f_normal2->GetYaxis()->SetTitleSize(0.035);
   f_normal2->GetYaxis()->SetTitleFont(42);
   f_normal2->SetParameter(0,55);
   f_normal2->SetParError(0,0);
   f_normal2->SetParLimits(0,0,0);
   f_normal2->Draw("SAME");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
