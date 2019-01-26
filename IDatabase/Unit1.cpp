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
TMain_Form *Main_Form;
//---------------------------------------------------------------------------
__fastcall TMain_Form::TMain_Form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMain_Form::BitBtn2Click(TObject *Sender)
{
Main_Form->Close();
Form1->Close();
Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::BitBtn1Click(TObject *Sender)
{
AnsiString al=ComboBox1->Text,ap=Edit2->Text, bl,bp;

DM->ADOTable3->First();

   double num=0;

    bl=DM->ADOTable3->FieldByName("FIO")->AsString;
    bp=DM->ADOTable3->FieldByName("Password")->AsString;


            if((al==bl)&&(ap==bp))
               {
                 Form1->Show();
                 Main_Form->Visible=false;
                 num++;
               }
                DM->ADOTable3->Next();
    // Права доступу для менеджера
    bl=DM->ADOTable3->FieldByName("FIO")->AsString;
    bp=DM->ADOTable3->FieldByName("Password")->AsString;

            if((al==bl)&&(ap==bp))
               {
                 Form2->Show();
                 Main_Form->Visible=false;
                 num++;
               }

if(num==0){  ShowMessage("Будь ласка, перевірте правильність написання даних!");}
}
//---------------------------------------------------------------------------


void __fastcall TMain_Form::FormClose(TObject *Sender,
     TCloseAction &Action)
{
       ShowMessage("Програмний продукт буде закрито!");
      Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::ComboBox1Change(TObject *Sender)
{
 /*  Main_Form->ComboBox1->Items->Clear();
DM->ADOQuery3->Open();
DM->ADOQuery3->First();

while (!DM->ADOQuery3->Eof)
{
Main_Form->ComboBox1->Items->Add(DM->ADOQuery3->FieldByName("FIO")->AsString);
DM->ADOQuery3->Next();
}
DM->ADOQuery3->First();  */
}
//---------------------------------------------------------------------------


