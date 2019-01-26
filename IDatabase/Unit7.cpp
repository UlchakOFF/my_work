//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

    Integer count = 0;

void __fastcall TForm7::BitBtn1Click(TObject *Sender)
{

/*N = StrToFloat(Edit4->Text);
D = StrToFloat(DBEdit7->Text);

if(N<=D){ShowMessage("Замовлення було успішно оформлено.");
 DM->ADOTable2->Edit();
DBEdit7->Text=FloatToStr(D-N);
                      */
if(Form7->DBGrid1->Fields[0]->AsString==NULL){ShowMessage(" Постачальників ' " + DM->ADOQuery2->FieldByName("Delivery_company")->AsString + " ' -  не має!"); }
else{

DM->ADOQuery2->First();
while(!DM->ADOQuery2->Eof){

  //EDIT ?

 // DM->ADOTable5->FieldByName("Price")->Value = DBEdit5->Text;
 //Edit1->Clear();
  //String N;
  //N= Edit1->Text;

if(Edit1->Text == DM -> ADOQuery2->FieldByName("Delivery_company")->AsString)
{
 count++;
}
  DM->ADOQuery2->Next();

  }



if(count==0){


if(Form7->Edit1->Text==""){ShowMessage("Постачальника не було введено!(");}
else{


if(Edit2->Text.Length()==13)
{



DM->ADOQuery2->Insert();


 DM->ADOQuery2->FieldByName("Delivery_company")-> AsString= Edit1->Text;
 DM->ADOQuery2->FieldByName("Phone")-> AsString=Edit2->Text;


DM->ADOQuery2->Post();

DM->ADOQuery2->Active = False;

DM->ADOQuery2->Active = True;


Edit1->Clear();
Edit2->Clear(); Edit2->Text="+380";

        }  else ShowMessage("Номер телефону введено не правильно");

}

}

else{

  ShowMessage("Цей постачальник уже є в списку!");

   
Edit1->Clear();
Edit2->Clear(); Edit2->Text="+380";


 count=0;
}
    }




}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn2Click(TObject *Sender)
{
Form1->DBComboBox2->Items->Clear();
DM->ADOQuery2->Open();
DM->ADOQuery2->First();

while (!DM->ADOQuery2->Eof)
{
Form1->DBComboBox2->Items->Add(DM->ADOQuery2->FieldByName("Delivery_company")->AsString);
DM->ADOQuery2->Next();
}
DM->ADOQuery2->First();


Form7->Visible=false;
Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{
ShowMessage("Програмний продукт буде закрито!");
        Application->Terminate();

}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn3Click(TObject *Sender)
{
if(!DM->ADOQuery2->IsEmpty()){ DM->ADOQuery2->Delete();}
else {ShowMessage("OOps!(");}
}
//---------------------------------------------------------------------------










