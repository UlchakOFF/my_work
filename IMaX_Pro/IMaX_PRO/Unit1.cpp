//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>

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
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
DBEdit1->SetFocus();
DM->ADOTable1->Insert();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 DM->ADOTable1->Edit();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
if (MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons() <<mbYes<< mbNo,0) == mrYes)
DM->ADOTable1->Delete();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
if ((DM->ADOTable1->State==dsInsert) || (DM->ADOTable1->
State==dsEdit)) // перевіряєм чи таблиця знаходиться в режимі додавання

{
DM->ADOTable1->Post(); // зберігаємо зміни
MessageDlg("Дані успішно збережені", mtInformation,TMsgDlgButtons()
<<mbOK,0) ;
}
else
{
MessageDlg("Не було внесено жодних змін", mtInformation,
TMsgDlgButtons() <<mbOK,0) ;
DM->ADOTable1->Cancel();
}        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
DM->ADOTable1->Cancel();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DBImage1DblClick(TObject *Sender)
{
if (OpenPictureDialog1->Execute())
{
DM->ADOTable1->Edit();
DM->ADOTable1Foto->LoadFromFile(OpenPictureDialog1->FileName);
DM->ADOTable1->Post();
}
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Edit1Change(TObject *Sender)
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



void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
if ((DM->ADOTable1->State==dsInsert) || (DM->ADOTable1->
State==dsEdit)) // перевіряєм чи таблиця знаходиться в режимі додавання

{
DM->ADOTable1->Post(); // зберігаємо зміни
MessageDlg("Дані успішно збережені", mtInformation,TMsgDlgButtons()
<<mbOK,0) ;
}
else
{
MessageDlg("Не було внесено жодних змін", mtInformation,
TMsgDlgButtons() <<mbOK,0) ;
DM->ADOTable1->Cancel();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
 DM->ADOTable1->Edit();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DBGrid1TitleClick(TColumn *Column)
{
DM->ADOTable1->IndexFieldNames = Column->FieldName;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::BitBtn8Click(TObject *Sender)
{
Main_Form->Close();
Form1->Close();
Form2->Close();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::BitBtn9Click(TObject *Sender)
{
Cleave->Show();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::BitBtn10Click(TObject *Sender)
{
DM->ADOTable2->Insert();        
}
//---------------------------------------------------------------------------


