//---------------------------------------------------------------------------

#include <vcl.h>
#include <io.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
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


void __fastcall TMain_Form::BitBtn1Click(TObject *Sender)
{
Main_Form->Close();
Form1->Close();
Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMain_Form::BitBtn2Click(TObject *Sender)
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
                 // ����� ������� ��� ���������
    bl=DM->ADOTable3->FieldByName("FIO")->AsString;
    bp=DM->ADOTable3->FieldByName("Password")->AsString;


            if((al==bl)&&(ap==bp))
               {
                 Form2->Show();
                 Main_Form->Visible=false;
                 num++;

               }



if(num==0){  ShowMessage("���� �����, �������� ������������ ��������� �����!");}
}
//---------------------------------------------------------------------------






