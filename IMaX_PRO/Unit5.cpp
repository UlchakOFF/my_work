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
TPrintm *Printm;

Double A,B,C;
//---------------------------------------------------------------------------
__fastcall TPrintm::TPrintm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPrintm::BitBtn1Click(TObject *Sender)
{
PrintDialog1->Execute();
Printm->Print();        
}
//---------------------------------------------------------------------------
void __fastcall TPrintm::BitBtn2Click(TObject *Sender)
{
Printm->Close();
}
//---------------------------------------------------------------------------

