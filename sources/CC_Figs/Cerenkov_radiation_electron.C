void Cerenkov_radiation_electron()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jul 27 18:10:39 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-1.246753,-47.70034,6.545455,270.3019);
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
   
   TF1 *f1 = new TF1("f","",0,6, TF1::EAddToList::kDefault);
   f1->SetFillColor(19);
   f1->SetFillStyle(0);
   f1->SetMarkerSize(1.2);
   f1->GetXaxis()->SetTitle("Electron Kinetic Energy (MeV)");
   f1->GetXaxis()->SetLabelFont(42);
   f1->GetXaxis()->SetLabelOffset(0.015);
   f1->GetXaxis()->SetLabelSize(0.05);
   f1->GetXaxis()->SetTitleSize(0.06);
   f1->GetXaxis()->SetTitleOffset(1.05);
   f1->GetXaxis()->SetTitleFont(42);
   f1->GetYaxis()->SetTitle("Nb Photons Radiated (/cm)");
   f1->GetYaxis()->SetLabelFont(42);
   f1->GetYaxis()->SetLabelOffset(0.015);
   f1->GetYaxis()->SetLabelSize(0.05);
   f1->GetYaxis()->SetTitleSize(0.06);
   f1->GetYaxis()->SetTitleOffset(1.2);
   f1->GetYaxis()->SetTitleFont(42);
   f1->SetParameter(0,1e+07);
   f1->SetParError(0,0);
   f1->SetParLimits(0,0,0);
   f1->SetParameter(1,350);
   f1->SetParError(1,0);
   f1->SetParLimits(1,0,0);
   f1->SetParameter(2,450);
   f1->SetParError(2,0);
   f1->SetParLimits(2,0,0);
   f1->SetParameter(3,1.5);
   f1->SetParError(3,0);
   f1->SetParLimits(3,0,0);
   f1->Draw("");
   TLine *line = new TLine(0.1745784,0,0.1745784,241.6817);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(5);
   line->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
