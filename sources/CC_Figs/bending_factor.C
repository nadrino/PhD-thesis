void bending_factor()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Feb 17 10:23:54 2020) by ROOT version 6.18/04
   TCanvas *c1 = new TCanvas("c1", "c1",1613,115,800,602);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.4821429,-0.2368421,7.625,1.342105);
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
   
   TH1D *E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1 = new TH1D("E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1","Cell 1 / #Deltam^{2} = 1.462177 eV^{2} / sin(2#theta) = 1",11,1.625,7.125);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(0,0.4197635);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(1,0.7605322);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(2,0.4719594);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(3,0.1300527);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(4,0.2049066);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(5,0.5083313);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(6,0.795249);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(7,0.9444721);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(8,0.96665);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(9,0.8976748);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(10,0.7832082);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(11,0.6515321);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinContent(12,0.530376);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(0,0.009670975);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(1,0.01394902);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(2,0.009235368);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(3,0.003098684);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(4,0.004406074);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(5,0.00971028);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(6,0.01496443);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(7,0.01809726);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(8,0.01897434);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(9,0.01781735);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(10,0.01584229);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(11,0.01408553);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetBinError(12,0.01219726);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetMinimum(0);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetMaximum(1.2);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetEntries(13);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.19);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetLineColor(ci);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetLineWidth(3);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->SetMarkerSize(1.2);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetTitle("E (MeV)");
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetLabelFont(42);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetLabelOffset(0.015);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetLabelSize(0.05);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetTitleSize(0.06);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetTitleOffset(1.05);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetXaxis()->SetTitleFont(42);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetTitle("R_{cb} (Osc/Non-Osc)");
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetLabelFont(42);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetLabelOffset(0.015);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetLabelSize(0.05);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetTitleSize(0.06);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetTitleOffset(1.2);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetYaxis()->SetTitleFont(42);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetZaxis()->SetLabelFont(42);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetZaxis()->SetLabelSize(0.05);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetZaxis()->SetTitleSize(0.06);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetZaxis()->SetTitleOffset(1);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->GetZaxis()->SetTitleFont(42);
   E_reconstructed_Detector_IBDmICellmI1_dm2mIbinmI57dOTH1D__copy__1->Draw("BAR");
   
   TPaveText *pt = new TPaveText(0.01,0.9113763,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("Cell 1 / #Deltam^{2} = 1.462177 eV^{2} / sin(2#theta) = 1");
   pt->Draw();
   TLine *line = new TLine(1.631,1,7.125,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(5);
   line->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
