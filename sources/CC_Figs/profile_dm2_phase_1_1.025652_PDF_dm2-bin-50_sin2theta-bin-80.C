void profile_dm2_phase_1_1.025652_PDF_dm2-bin-50_sin2theta-bin-80()
{
//=========Macro generated from canvas: c2/c2
//=========  (Sat Jun 22 16:06:11 2019) by ROOT version 6.13/02
   TCanvas *c2 = new TCanvas("c2", "c2",20,43,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.4262449,-0.2072369,2.237786,1.174342);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetGridx();
   c2->SetGridy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.16);
   c2->SetRightMargin(0.07);
   c2->SetBottomMargin(0.15);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   
   TH1D *profile_dm2__2 = new TH1D("profile_dm2__2","",100,0,2.051304);
   profile_dm2__2->SetBinContent(51,1);
   profile_dm2__2->SetBinError(51,0.0100636);
   profile_dm2__2->SetEntries(9874);
   profile_dm2__2->SetLineWidth(3);
   profile_dm2__2->SetMarkerSize(1.2);
   profile_dm2__2->GetXaxis()->SetTitle("#Deltam^{2}_{14} for #chi^{2}_{best-fit} (eV^{2})");
   profile_dm2__2->GetXaxis()->SetLabelFont(42);
   profile_dm2__2->GetXaxis()->SetLabelOffset(0.015);
   profile_dm2__2->GetXaxis()->SetLabelSize(0.05);
   profile_dm2__2->GetXaxis()->SetTitleSize(0.06);
   profile_dm2__2->GetXaxis()->SetTitleOffset(1.05);
   profile_dm2__2->GetXaxis()->SetTitleFont(42);
   profile_dm2__2->GetYaxis()->SetTitle("Counts (a.u.)");
   profile_dm2__2->GetYaxis()->SetLabelFont(42);
   profile_dm2__2->GetYaxis()->SetLabelOffset(0.015);
   profile_dm2__2->GetYaxis()->SetLabelSize(0.05);
   profile_dm2__2->GetYaxis()->SetTitleSize(0.06);
   profile_dm2__2->GetYaxis()->SetTitleOffset(1.2);
   profile_dm2__2->GetYaxis()->SetTitleFont(42);
   profile_dm2__2->GetZaxis()->SetLabelFont(42);
   profile_dm2__2->GetZaxis()->SetLabelSize(0.05);
   profile_dm2__2->GetZaxis()->SetTitleSize(0.06);
   profile_dm2__2->GetZaxis()->SetTitleFont(42);
   profile_dm2__2->Draw("HIST");
   TLine *line = new TLine(1.025652,0,1.025652,1.05);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(4);
   line->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
