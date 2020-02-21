void Escale_distortion_relat()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  6 18:16:11 2019) by ROOT version 6.13/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.4821429,-4.091308,7.625,7.818634);
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
   
   TH1D *M_b__1 = new TH1D("M_b__1","",11,1.625,7.125);
   M_b__1->SetBinContent(1,-1.894315);
   M_b__1->SetBinContent(2,-1.390026);
   M_b__1->SetBinContent(3,-0.9595356);
   M_b__1->SetBinContent(4,-0.4091705);
   M_b__1->SetBinContent(5,0.2242229);
   M_b__1->SetBinContent(6,0.8056567);
   M_b__1->SetBinContent(7,1.452796);
   M_b__1->SetBinContent(8,2.002932);
   M_b__1->SetBinContent(9,2.596345);
   M_b__1->SetBinContent(10,4.106883);
   M_b__1->SetBinContent(11,6.315712);
   M_b__1->SetEntries(11);
   M_b__1->SetLineWidth(5);
   M_b__1->SetMarkerSize(1.2);
   M_b__1->GetXaxis()->SetTitle("Reconstructed Energy (MeV)");
   M_b__1->GetXaxis()->SetLabelFont(42);
   M_b__1->GetXaxis()->SetLabelOffset(0.015);
   M_b__1->GetXaxis()->SetLabelSize(0.05);
   M_b__1->GetXaxis()->SetTitleSize(0.06);
   M_b__1->GetXaxis()->SetTitleOffset(1.05);
   M_b__1->GetXaxis()->SetTitleFont(42);
   M_b__1->GetYaxis()->SetTitle("Spectrum Distortion (%)");
   M_b__1->GetYaxis()->SetLabelFont(42);
   M_b__1->GetYaxis()->SetLabelOffset(0.015);
   M_b__1->GetYaxis()->SetLabelSize(0.05);
   M_b__1->GetYaxis()->SetTitleSize(0.06);
   M_b__1->GetYaxis()->SetTitleOffset(1.2);
   M_b__1->GetYaxis()->SetTitleFont(42);
   M_b__1->GetZaxis()->SetLabelFont(42);
   M_b__1->GetZaxis()->SetLabelSize(0.05);
   M_b__1->GetZaxis()->SetTitleSize(0.06);
   M_b__1->GetZaxis()->SetTitleFont(42);
   M_b__1->Draw("");
   TLine *line = new TLine(1.625,0,7.125,0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(5);
   line->Draw();
   
   TLegend *leg = new TLegend(0.2,0.7,0.55,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("M_b","#alpha^{EC} = 1 %","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TLine","No Distortion","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
