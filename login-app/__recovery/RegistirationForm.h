//---------------------------------------------------------------------------

#ifndef RegistirationFormH
#define RegistirationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyRegistirationForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *nameEdit;
	TLabel *Label1;
	TEdit *AgeEdit;
	TLabel *Label2;
	TEdit *UsernameEdit;
	TLabel *Label3;
	TEdit *PasswordEdit;
	TLabel *Label4;
	TButton *SaveButton;
private:	// User declarations
public:		// User declarations
	__fastcall TMyRegistirationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyRegistirationForm *MyRegistirationForm;
//---------------------------------------------------------------------------
#endif
