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
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1Change(TObject *Sender)
{
   if(RadioButton1->Checked == true)
    {if (Edit1->Text=="")
{
DM->ADOTable1->Filtered=0;
}
else
{
   DBGrid1->DataSource->DataSet->Filter="Base LIKE '" + Edit1->Text + "*'";
DBGrid1->DataSource->DataSet->Filtered=true;
}  }
if(RadioButton2->Checked == true)
    {if (Edit1->Text=="")
{
DM->ADOTable1->Filtered=0;
}
else
{
   DBGrid1->DataSource->DataSet->Filter="Destination LIKE '" + Edit1->Text + "*'";
DBGrid1->DataSource->DataSet->Filtered=true;
}  }
if(RadioButton3->Checked == true)
    {if (Edit1->Text=="")
{
DM->ADOTable1->Filtered=0;
}
else
{
   DBGrid1->DataSource->DataSet->Filter="Format LIKE '" + Edit1->Text + "*'";
DBGrid1->DataSource->DataSet->Filtered=true;
}  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DBImage1DblClick(TObject *Sender)
{
if (OpenPictureDialog1->Execute())
{
DM->ADOTable1->Edit();
DM->ADOTable1Foto->LoadFromFile(OpenPictureDialog1->FileName);
DM->ADOTable1->Post();
}        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
Main_Form->Close();
Form1->Close();
Form2->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::DBGrid1TitleClick(TColumn *Column)
{
DM->ADOTable1->IndexFieldNames = Column->FieldName;        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
Cleave->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm2::BitBtn3Click(TObject *Sender)
{
Shop->Show();
}
//---------------------------------------------------------------------------






