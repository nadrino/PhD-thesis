void profile_dm2_PDF_dm2-bin-50_sin2theta-bin-90()
{
//=========Macro generated from canvas: c2/c2
//=========  (Sat Jun 22 14:49:36 2019) by ROOT version 6.13/02
   TCanvas *c2 = new TCanvas("c2", "c2",20,43,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c2->SetHighLightColor(2);
   c2->Range(-0.4301889,-0.2072369,2.258492,1.174342);
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
   
   TH1D *profile_dm2__2 = new TH1D("profile_dm2__2","",50,0,2.070284);
   profile_dm2__2->SetBinContent(24,0.01476793);
   profile_dm2__2->SetBinContent(26,1);
   profile_dm2__2->SetBinContent(27,0.04008439);
   profile_dm2__2->SetBinError(24,0.005581754);
   profile_dm2__2->SetBinError(26,0.04593152);
   profile_dm2__2->SetBinError(27,0.009195989);
   profile_dm2__2->SetEntries(500);
   profile_dm2__2->SetLineWidth(3);
   profile_dm2__2->SetMarkerSize(1.2);
   profile_dm2__2->GetXaxis()->SetTitle("#Deltam^{2}_{14} for #chi^{2}_{best-fit}");
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
   TLine *line = new TLine(1.035142,0,1.035142,1.05);

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
