void profile_sin2theta_PDF_dm2-bin-50_sin2theta-bin-90()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jun 22 14:49:33 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.2683238,-0.2072369,1.4087,1.174342);
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
   
   TH1D *profile_sin2theta__1 = new TH1D("profile_sin2theta__1","",100,0,1.291308);
   profile_sin2theta__1->SetBinContent(27,0.004115226);
   profile_sin2theta__1->SetBinContent(34,0.004115226);
   profile_sin2theta__1->SetBinContent(37,0.004115226);
   profile_sin2theta__1->SetBinContent(38,0.02469136);
   profile_sin2theta__1->SetBinContent(40,0.06584362);
   profile_sin2theta__1->SetBinContent(42,0.1028807);
   profile_sin2theta__1->SetBinContent(44,0.1234568);
   profile_sin2theta__1->SetBinContent(46,0.1728395);
   profile_sin2theta__1->SetBinContent(48,0.2510288);
   profile_sin2theta__1->SetBinContent(51,1);
   profile_sin2theta__1->SetBinContent(53,0.08230453);
   profile_sin2theta__1->SetBinContent(55,0.127572);
   profile_sin2theta__1->SetBinContent(58,0.0781893);
   profile_sin2theta__1->SetBinContent(61,0.01646091);
   profile_sin2theta__1->SetBinError(27,0.004115226);
   profile_sin2theta__1->SetBinError(34,0.004115226);
   profile_sin2theta__1->SetBinError(37,0.004115226);
   profile_sin2theta__1->SetBinError(38,0.0100802);
   profile_sin2theta__1->SetBinError(40,0.01646091);
   profile_sin2theta__1->SetBinError(42,0.02057613);
   profile_sin2theta__1->SetBinError(44,0.02254002);
   profile_sin2theta__1->SetBinError(46,0.02666971);
   profile_sin2theta__1->SetBinError(48,0.03214095);
   profile_sin2theta__1->SetBinError(51,0.06415003);
   profile_sin2theta__1->SetBinError(53,0.01840385);
   profile_sin2theta__1->SetBinError(55,0.02291261);
   profile_sin2theta__1->SetBinError(58,0.01793786);
   profile_sin2theta__1->SetBinError(61,0.008230453);
   profile_sin2theta__1->SetEntries(500);
   profile_sin2theta__1->SetLineWidth(3);
   profile_sin2theta__1->SetMarkerSize(1.2);
   profile_sin2theta__1->GetXaxis()->SetTitle("sin^{2}(2#theta_{14}) for #chi^{2}_{best-fit}");
   profile_sin2theta__1->GetXaxis()->SetLabelFont(42);
   profile_sin2theta__1->GetXaxis()->SetLabelOffset(0.015);
   profile_sin2theta__1->GetXaxis()->SetLabelSize(0.05);
   profile_sin2theta__1->GetXaxis()->SetTitleSize(0.06);
   profile_sin2theta__1->GetXaxis()->SetTitleOffset(1.05);
   profile_sin2theta__1->GetXaxis()->SetTitleFont(42);
   profile_sin2theta__1->GetYaxis()->SetTitle("Counts (a.u.)");
   profile_sin2theta__1->GetYaxis()->SetLabelFont(42);
   profile_sin2theta__1->GetYaxis()->SetLabelOffset(0.015);
   profile_sin2theta__1->GetYaxis()->SetLabelSize(0.05);
   profile_sin2theta__1->GetYaxis()->SetTitleSize(0.06);
   profile_sin2theta__1->GetYaxis()->SetTitleOffset(1.2);
   profile_sin2theta__1->GetYaxis()->SetTitleFont(42);
   profile_sin2theta__1->GetZaxis()->SetLabelFont(42);
   profile_sin2theta__1->GetZaxis()->SetLabelSize(0.05);
   profile_sin2theta__1->GetZaxis()->SetTitleSize(0.06);
   profile_sin2theta__1->GetZaxis()->SetTitleFont(42);
   profile_sin2theta__1->Draw("HIST");
   TLine *line = new TLine(0.6456542,0,0.6456542,1.05);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(4);
   line->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
