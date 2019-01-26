//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TADOTable *ADOTable2;
        TIntegerField *ADOTable1Article;
        TWideStringField *ADOTable1Base;
        TWideStringField *ADOTable1Destination;
        TWideStringField *ADOTable1Format;
        TIntegerField *ADOTable1Price;
        TBlobField *ADOTable1Foto;
        TIntegerField *ADOTable2Article;
        TIntegerField *ADOTable2Number_wallpapers;
        TAutoIncField *ADOTable2Delivery_num;
        TADOTable *ADOTable3;
        TDataSource *DataSource3;
        TADOTable *ADOTable4;
        TADOTable *ADOTable5;
        TDataSource *DataSource4;
        TDataSource *DataSource5;
        TWideStringField *ADOTable4FIO;
        TAutoIncField *ADOTable5ID;
        TIntegerField *ADOTable5Article;
        TWideStringField *ADOTable5Base;
        TWideStringField *ADOTable5Destination;
        TWideStringField *ADOTable5Format;
        TIntegerField *ADOTable5Price;
        TWideStringField *ADOTable5N_M;
        TIntegerField *ADOTable5Num_Wall;
        TIntegerField *ADOTable5Total_Price;
        TDateTimeField *ADOTable5Date_Shop;
private:	// User declarations
public:		// User declarations
        __fastcall TDM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
