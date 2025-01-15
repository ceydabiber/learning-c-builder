//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <fstream>

#include "RegistirationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegistirationForm *MyRegistirationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegistirationForm::TMyRegistirationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyRegistirationForm::SaveButtonClick(TObject *Sender)
{
   fstream myFile;
   myFile.open("registeredUsers.txt", ios::app);

   if (myFile.is_open()) {

	  AnsiString name = nameEdit->Text;
	  AnsiString age = AgeEdit->Text;
	  AnsiString username = UsernameEdit->Text;
	  AnsiString password = PasswordEdit->Text;
   }


}
//---------------------------------------------------------------------------

