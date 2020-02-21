void BG_spectrum_phase2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Feb 17 10:30:12 2020) by ROOT version 6.18/04
   TCanvas *c1 = new TCanvas("c1", "c1",1886,336,800,602);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.4821429,-15.78947,7.625,89.47368);
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
   
   TH1D *hBackground__copy__1 = new TH1D("hBackground__copy__1","Electron-recoil type background spectrum",13,1.625,8.125);
   hBackground__copy__1->SetBinContent(1,64.4356);
   hBackground__copy__1->SetBinContent(2,65.23218);
   hBackground__copy__1->SetBinContent(3,37.3716);
   hBackground__copy__1->SetBinContent(4,31.04564);
   hBackground__copy__1->SetBinContent(5,28.69492);
   hBackground__copy__1->SetBinContent(6,25.73659);
   hBackground__copy__1->SetBinContent(7,35.4095);
   hBackground__copy__1->SetBinContent(8,44.66459);
   hBackground__copy__1->SetBinContent(9,31.66137);
   hBackground__copy__1->SetBinContent(10,22.65654);
   hBackground__copy__1->SetBinContent(11,17.25599);
   hBackground__copy__1->SetBinContent(12,15.87641);
   hBackground__copy__1->SetBinContent(13,13.95854);
   hBackground__copy__1->SetBinContent(14,363.8575);
   hBackground__copy__1->SetBinError(1,2);
   hBackground__copy__1->SetBinError(2,2);
   hBackground__copy__1->SetBinError(3,2);
   hBackground__copy__1->SetBinError(4,2);
   hBackground__copy__1->SetBinError(5,2);
   hBackground__copy__1->SetBinError(6,2);
   hBackground__copy__1->SetBinError(7,2);
   hBackground__copy__1->SetBinError(8,2);
   hBackground__copy__1->SetBinError(9,2);
   hBackground__copy__1->SetBinError(10,2);
   hBackground__copy__1->SetBinError(11,2);
   hBackground__copy__1->SetBinError(12,2);
   hBackground__copy__1->SetBinError(13,2);
   hBackground__copy__1->SetBinError(14,3.499804);
   hBackground__copy__1->SetMinimum(0);
   hBackground__copy__1->SetMaximum(80);
   hBackground__copy__1->SetEntries(15);
   hBackground__copy__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 1, 0, 0, " ", 0.2);
   hBackground__copy__1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hBackground__copy__1->SetLineColor(ci);
   hBackground__copy__1->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hBackground__copy__1->SetMarkerColor(ci);
   hBackground__copy__1->SetMarkerStyle(8);
   hBackground__copy__1->SetMarkerSize(1.2);
   hBackground__copy__1->GetXaxis()->SetTitle("Reconstructed Energy (MeV)");
   hBackground__copy__1->GetXaxis()->SetRange(1,11);
   hBackground__copy__1->GetXaxis()->SetLabelFont(42);
   hBackground__copy__1->GetXaxis()->SetLabelOffset(0.015);
   hBackground__copy__1->GetXaxis()->SetLabelSize(0.05);
   hBackground__copy__1->GetXaxis()->SetTitleSize(0.06);
   hBackground__copy__1->GetXaxis()->SetTitleOffset(1.05);
   hBackground__copy__1->GetXaxis()->SetTitleFont(42);
   hBackground__copy__1->GetYaxis()->SetTitle("Counts (/day/500keV)");
   hBackground__copy__1->GetYaxis()->SetLabelFont(42);
   hBackground__copy__1->GetYaxis()->SetLabelOffset(0.015);
   hBackground__copy__1->GetYaxis()->SetLabelSize(0.05);
   hBackground__copy__1->GetYaxis()->SetTitleSize(0.06);
   hBackground__copy__1->GetYaxis()->SetTitleOffset(1.2);
   hBackground__copy__1->GetYaxis()->SetTitleFont(42);
   hBackground__copy__1->GetZaxis()->SetLabelFont(42);
   hBackground__copy__1->GetZaxis()->SetLabelSize(0.05);
   hBackground__copy__1->GetZaxis()->SetTitleSize(0.06);
   hBackground__copy__1->GetZaxis()->SetTitleOffset(1);
   hBackground__copy__1->GetZaxis()->SetTitleFont(42);
   hBackground__copy__1->Draw("BAR");
   
   TPaveText *pt = new TPaveText(0.01,0.9239199,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Electron-recoil type background spectrum");
   pt->Draw();
   TLine *line = new TLine(2.22,0,2.22,80);
   line->SetLineStyle(2);
   line->SetLineWidth(4);
   line->Draw();
   TArrow *arrow = new TArrow(2.22,50,3.1,64,0.015,"<|");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(4);
   arrow->Draw();
   TLatex *   tex = new TLatex(3.2,65,"n-H");
   tex->SetLineWidth(2);
   tex->Draw();
   arrow = new TArrow(5.5,35,5.6,64,0.015,"<|");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(4);
   arrow->Draw();
      tex = new TLatex(4.2,65,"n + #gamma from ^{12}C(n,n'#gamma)^{12}C");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
