//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TCleave : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TPrintDialog *PrintDialog1;
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TCleave(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCleave *Cleave;
//---------------------------------------------------------------------------
#endif
