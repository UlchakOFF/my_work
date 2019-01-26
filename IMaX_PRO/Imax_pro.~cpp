//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("D:\Smart_test\Unit1.cpp", Form1);
USEFORM("D:\Smart_test\Unit2.cpp", DM); /* TDataModule: File Type */
USEFORM("D:\Smart_test\Unit3.cpp", Main_Form);
USEFORM("D:\Smart_test\Unit4.cpp", Form2);
USEFORM("D:\Smart_test\Unit6.cpp", Shop);
USEFORM("D:\Smart_test\Unit7.cpp", Cleave);
USEFORM("D:\Smart_test\Unit5.cpp", Printm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TMain_Form), &Main_Form);
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TDM), &DM);
                 Application->CreateForm(__classid(TForm2), &Form2);
                 Application->CreateForm(__classid(TShop), &Shop);
                 Application->CreateForm(__classid(TCleave), &Cleave);
                 Application->CreateForm(__classid(TPrintm), &Printm);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
