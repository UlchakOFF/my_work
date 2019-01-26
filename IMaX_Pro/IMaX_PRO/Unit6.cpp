//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"

#include <math.h>
#include "Math.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShop *Shop;
//---------------------------------------------------------------------------
__fastcall TShop::TShop(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TShop::BitBtn1Click(TObject *Sender)
{
double l_room,w_room,h_room;
double l_walp,w_walp;
double P,A,B,C;

l_room=StrToFloat(Edit1->Text);
w_room=StrToFloat(Edit2->Text);
h_room=StrToFloat(Edit3->Text);

if(DBEdit4->Text=="10,05 x 0,53"){l_walp=10.05; w_walp=0.53;}
if(DBEdit4->Text=="10,05 x 1,06"){l_walp=10.05; w_walp=1.06;}
if(DBEdit4->Text=="25 x 1,06"){l_walp=25; w_walp=1.06;}


P=2*l_room+2*w_room;

A=floor(l_walp/h_room);

B=ceil(P/w_walp);

C=ceil(B/A);
Edit4->Text=FloatToStr(C);

Edit5->Text=FloatToStr(StrToFloat(DBEdit5->Text)*C);

//=FloatToStr();
//=StrToFloat();
// ceil(double x); floor(doudle x)


}
//---------------------------------------------------------------------------

void __fastcall TShop::BitBtn2Click(TObject *Sender)
{ double N,D;
N = StrToFloat(Edit4->Text);
D = StrToFloat(DBEdit7->Text);

if(N<=D){ShowMessage("���������� ���� ������ ���������.");
 DM->ADOTable2->Edit();
DBEdit7->Text=FloatToStr(D-N);

DM->ADOTable2->Post();


DM->ADOTable5->Insert();

DM->ADOTable5->FieldByName("Article")->Text = DBEdit1->Text;
DM->ADOTable5->FieldByName("Base")->Value = DBEdit2->Text;
DM->ADOTable5->FieldByName("Destination")->Value = DBEdit3->Text;
DM->ADOTable5->FieldByName("Format")->Value = DBEdit4->Text;
DM->ADOTable5->FieldByName("Price")->Value = DBEdit5->Text;
DM->ADOTable5->FieldByName("N_M")->Value = DBComboBox1->Text;
DM->ADOTable5->FieldByName("Num_Wall")->Value = Edit4->Text;
DM->ADOTable5->FieldByName("Total_Price")->Value = Edit5->Text;
DM->ADOTable5->FieldByName("Date_Shop")->Value = Date();

DM->ADOTable5->Post();

Printm->Show();

}else {ShowMessage("�� ����� ���������� ������� ������.(");}



Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
Edit4->Clear();
Edit5->Clear();


Shop->Close();

}
//---------------------------------------------------------------------------
void __fastcall TShop::BitBtn3Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

