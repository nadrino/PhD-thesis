void SNR_spectrum_phase2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Feb 17 10:28:16 2020) by ROOT version 6.18/04
   TCanvas *c1 = new TCanvas("c1", "c1",1806,224,800,602);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.4821429,-0.4144737,7.625,2.348684);
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
   
   TH1D *hSBR__copy__1 = new TH1D("hSBR__copy__1","Signal over Noise Ratio across the spectrum",13,1.625,8.125);
   hSBR__copy__1->SetBinContent(1,0.6275339);
   hSBR__copy__1->SetBinContent(2,0.7730873);
   hSBR__copy__1->SetBinContent(3,1.352029);
   hSBR__copy__1->SetBinContent(4,1.62468);
   hSBR__copy__1->SetBinContent(5,1.5251);
   hSBR__copy__1->SetBinContent(6,1.454947);
   hSBR__copy__1->SetBinContent(7,0.8833519);
   hSBR__copy__1->SetBinContent(8,0.5187159);
   hSBR__copy__1->SetBinContent(9,0.4992173);
   hSBR__copy__1->SetBinContent(10,0.4664367);
   hSBR__copy__1->SetBinContent(11,0.340009);
   hSBR__copy__1->SetBinContent(12,0.183789);
   hSBR__copy__1->SetBinContent(13,0.08516049);
   hSBR__copy__1->SetBinContent(14,363.8575);
   hSBR__copy__1->SetBinError(1,0.02146428);
   hSBR__copy__1->SetBinError(2,0.02094211);
   hSBR__copy__1->SetBinError(3,0.03484989);
   hSBR__copy__1->SetBinError(4,0.03819111);
   hSBR__copy__1->SetBinError(5,0.03736422);
   hSBR__copy__1->SetBinError(6,0.03820769);
   hSBR__copy__1->SetBinError(7,0.02674957);
   hSBR__copy__1->SetBinError(8,0.02084843);
   hSBR__copy__1->SetBinError(9,0.02461998);
   hSBR__copy__1->SetBinError(10,0.02883912);
   hSBR__copy__1->SetBinError(11,0.03169435);
   hSBR__copy__1->SetBinError(12,0.03122012);
   hSBR__copy__1->SetBinError(13,0.03218949);
   hSBR__copy__1->SetBinError(14,3.499804);
   hSBR__copy__1->SetMinimum(0);
   hSBR__copy__1->SetMaximum(2.1);
   hSBR__copy__1->SetEntries(15);
   hSBR__copy__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.2);
   hSBR__copy__1->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hSBR__copy__1->SetLineColor(ci);
   hSBR__copy__1->SetLineWidth(3);

   ci = TColor::GetColor("#00cc00");
   hSBR__copy__1->SetMarkerColor(ci);
   hSBR__copy__1->SetMarkerStyle(8);
   hSBR__copy__1->SetMarkerSize(1.2);
   hSBR__copy__1->GetXaxis()->SetTitle("Reconstructed Energy (MeV)");
   hSBR__copy__1->GetXaxis()->SetRange(1,11);
   hSBR__copy__1->GetXaxis()->SetLabelFont(42);
   hSBR__copy__1->GetXaxis()->SetLabelOffset(0.015);
   hSBR__copy__1->GetXaxis()->SetLabelSize(0.05);
   hSBR__copy__1->GetXaxis()->SetTitleSize(0.06);
   hSBR__copy__1->GetXaxis()->SetTitleOffset(1.05);
   hSBR__copy__1->GetXaxis()->SetTitleFont(42);
   hSBR__copy__1->GetYaxis()->SetTitle("R_{#nu}/R_{BG}");
   hSBR__copy__1->GetYaxis()->SetLabelFont(42);
   hSBR__copy__1->GetYaxis()->SetLabelOffset(0.015);
   hSBR__copy__1->GetYaxis()->SetLabelSize(0.05);
   hSBR__copy__1->GetYaxis()->SetTitleSize(0.06);
   hSBR__copy__1->GetYaxis()->SetTitleOffset(1.2);
   hSBR__copy__1->GetYaxis()->SetTitleFont(42);
   hSBR__copy__1->GetZaxis()->SetLabelFont(42);
   hSBR__copy__1->GetZaxis()->SetLabelSize(0.05);
   hSBR__copy__1->GetZaxis()->SetTitleSize(0.06);
   hSBR__copy__1->GetZaxis()->SetTitleOffset(1);
   hSBR__copy__1->GetZaxis()->SetTitleFont(42);
   hSBR__copy__1->Draw("BAR");
   
   TPaveText *pt = new TPaveText(0.01,0.9239199,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Signal over Noise Ratio across the spectrum");
   pt->Draw();
   TLine *line = new TLine(1.625,0.8900549,7.125,0.8900549);

   ci = TColor::GetColor("#009900");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   TLatex *   tex = new TLatex(5.475,0.9123063,"Spectrum Average");

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
