void Erec34_nH_phase-2_fit-crystalball_stacks-20_analysis_Data_vs_MC()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Thu Jun 13 10:39:04 2019) by ROOT version 6.13/02
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,23,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas->SetHighLightColor(2);
   canvas->Range(-0.7467532,-4.184211,7.045455,3.710526);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.16);
   canvas->SetRightMargin(0.07);
   canvas->SetBottomMargin(0.15);
   canvas->SetFrameLineWidth(2);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(2);
   canvas->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1001[6] = {
   0.5830776,
   1.151694,
   0.2835187,
   0.6138314,
   0.9699586,
   0.03714733};
   Double_t Graph0_fex1001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[6] = {
   0.1042176,
   0.09578458,
   0.1186785,
   0.1326948,
   0.1206647,
   0.08722807};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("n-H peak deviation from MC");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","n-H peak deviation from MC",100,0.5,6.5);
   Graph_Graph01001->SetMinimum(-3);
   Graph_Graph01001->SetMaximum(3);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("Cell #");
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Deviation to MC / %");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *Target average1002 = new TF1("Target average","[0]",0.5,6.5, TF1::EAddToList::kNo);
   Target average1002->SetFillColor(19);
   Target average1002->SetFillStyle(0);
   Target average1002->SetLineColor(2);
   Target average1002->SetLineWidth(2);
   Target average1002->SetChisquare(91.10257);
   Target average1002->SetNDF(5);
   Target average1002->GetXaxis()->SetLabelFont(42);
   Target average1002->GetXaxis()->SetLabelOffset(0.015);
   Target average1002->GetXaxis()->SetLabelSize(0.05);
   Target average1002->GetXaxis()->SetTitleSize(0.06);
   Target average1002->GetXaxis()->SetTitleOffset(100);
   Target average1002->GetXaxis()->SetTitleFont(42);
   Target average1002->GetYaxis()->SetLabelFont(42);
   Target average1002->GetYaxis()->SetLabelOffset(0.015);
   Target average1002->GetYaxis()->SetLabelSize(0.05);
   Target average1002->GetYaxis()->SetTitleSize(0.06);
   Target average1002->GetYaxis()->SetTitleOffset(1.2);
   Target average1002->GetYaxis()->SetTitleFont(42);
   Target average1002->SetParameter(0,0.5779275);
   Target average1002->SetParError(0,0.04347962);
   Target average1002->SetParLimits(0,0,0);
   Target average1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(Target average1002);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetLineWidth(2);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf =  91.1 / 5");
   ptstats_LaTex = ptstats->AddText("Prob  = 3.942e-18");
   ptstats_LaTex = ptstats->AddText("p0       = 0.5779 #pm 0.04348 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap0");
   
   TPaveText *pt = new TPaveText(0.01,0.9239199,0.6089474,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   TText *pt_LaTex = pt->AddText("n-H peak deviation from MC");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
