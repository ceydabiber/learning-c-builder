//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
   String taskText= TaskInput->Text;

   if (taskText != "")
   {
	TasksListBox->Items->Add(taskText);
   }

   TaskInput->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddClearButton(TObject *Sender)
{
   TasksListBox->Items->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
   //int index = Item->Index;
   //TasksListBox->Items->Delete(index);

   Item->StyledSettings = Item->StyledSettings >> TStyledSetting::Style; // Disable default styling for the font
   Item->TextSettings->Font->Style = Item->TextSettings->Font->Style << TFontStyle::fsStrikeOut; // Add strike-out

}
//---------------------------------------------------------------------------
