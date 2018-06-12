void Graph_1()
{
   TFile* file = TFile::Open("B4.root");
   TCanvas* c =new TCanvas();
   c->Divide(1,2);
   c->cd(1);
   file->Get("LongitudinalProfile")->Draw();
   c->cd(2);
   file->Get("TotalEnergy")->Draw();
}
