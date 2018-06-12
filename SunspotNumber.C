#include <iostream>
#include <fstream>
#include "math.h"
#include "TCanvas.h"

using namespace std;

void SunspotNumber()
{
  const Int_t day = 56;
  Double_t days[56];
  Double_t sunspotNum[56] = {0,29,26,36,0,0,0,0,0,0,56,50,54,0,0,0,75,64,49,0,0,0,52,78,95,0,0,0,0,79,82,68,0,0,0,0,49,60,35,0,0,0,0,27,39,26,0,0,0,0,39,65,50,0,0,0}

  for(int i=0;i<day;i++)
    {
      days[i]=i;
    }
  
  TCanvas *c1 = new TCanvas("Sunspot Number", "Sunspot Number", 200, 10, 700, 500);
  c1->SetFillColor(42);
  c1->SetGrid();

  TGraph *grr = new TGraph(day,days,sunspotNum);
  grr->SetMarkerColor(kBlue);
  grr->SetMarkerSyle(22);
  grr->SetTitle("Sunspot Number by Day");
  grr->GetXaxis()->SetTitle("Date");
  grr->GetYaxis()->SetTitle("Sunspot Number");

  grr->Draw("AP");
  
}
