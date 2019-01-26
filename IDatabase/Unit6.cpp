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
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
ShowMessage("Програмний продукт буде закрито!");
        Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
Form6->Visible=false;
Form1->Show();
}
//---------------------------------------------------------------------------












void __fastcall TForm6::DBGrid2TitleClick(TColumn *Column)
{
DM->ADOTable5->IndexFieldNames = Column->FieldName;         
}
//---------------------------------------------------------------------------



