void profile_dm2_PDF_dm2-bin-90_sin2theta-bin-90()
{
//=========Macro generated from canvas: c2/c2
//=========  (Sat Jun 22 14:45:44 2019) by ROOT version 6.13/02
   TCanvas *c2 = new TCanvas("c2", "c2",20,43,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c2->SetHighLightColor(2);
   c2->Range(-6.818035,-0.2072369,35.79469,1.174342);
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
   
   TH1D *profile_dm2__2 = new TH1D("profile_dm2__2","",50,0,32.8118);
   profile_dm2__2->SetBinContent(1,0.06521739);
   profile_dm2__2->SetBinContent(2,0.7934783);
   profile_dm2__2->SetBinContent(3,1);
   profile_dm2__2->SetBinContent(4,0.9347826);
   profile_dm2__2->SetBinContent(5,0.5978261);
   profile_dm2__2->SetBinContent(6,0.6630435);
   profile_dm2__2->SetBinContent(7,0.3586957);
   profile_dm2__2->SetBinContent(8,0.4891304);
   profile_dm2__2->SetBinContent(9,0.2826087);
   profile_dm2__2->SetBinContent(10,0.07608696);
   profile_dm2__2->SetBinContent(11,0.1195652);
   profile_dm2__2->SetBinContent(12,0.01086957);
   profile_dm2__2->SetBinContent(13,0.01086957);
   profile_dm2__2->SetBinContent(15,0.0326087);
   profile_dm2__2->SetBinError(1,0.02662489);
   profile_dm2__2->SetBinError(2,0.09286961);
   profile_dm2__2->SetBinError(3,0.1042572);
   profile_dm2__2->SetBinError(4,0.1008002);
   profile_dm2__2->SetBinError(5,0.08061085);
   profile_dm2__2->SetBinError(6,0.08489402);
   profile_dm2__2->SetBinError(7,0.0624409);
   profile_dm2__2->SetBinError(8,0.07291526);
   profile_dm2__2->SetBinError(9,0.05542413);
   profile_dm2__2->SetBinError(10,0.02875817);
   profile_dm2__2->SetBinError(11,0.03605027);
   profile_dm2__2->SetBinError(12,0.01086957);
   profile_dm2__2->SetBinError(13,0.01086957);
   profile_dm2__2->SetBinError(15,0.01882664);
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
   TLine *line = new TLine(16.4059,0,16.4059,1.05);

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
