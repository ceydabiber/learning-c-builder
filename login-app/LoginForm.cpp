//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
	LoginButton->Enabled = false; // Initialize button state
}

void __fastcall TMyLoginForm::TextChanged(TObject *Sender)
{
	// Check if both text fields are non-empty
	if (!UsernameEdit->Text.IsEmpty() && !PasswordEdit->Text.IsEmpty())
	{
		LoginButton->Enabled = true;
	}
	else
	{
		LoginButton->Enabled = false;
	}
}

//---------------------------------------------------------------------------
std::vector<std::string> parseCommaDelimitedString(std::string line){

	std::vector<std::string> result;
	std::stringstream s_stream(line);

	while(s_stream.good()){

	   std::string substr;
	   getline(s_stream, substr, ',');
	   result.push_back(substr);
	}

	return result;
}

const char* convertToCharPtr(AnsiString ansiStr){

	 return ansiStr.c_str();
}

void __fastcall TMyLoginForm::LoginButtonClick(TObject *Sender)
{
    fstream myFile;
    myFile.open("registeredUsers.txt", ios::in);

    if (myFile.is_open()) {
        std::string line;

        while (getline(myFile, line)) {
            std::vector<std::string> parsedLine = parseCommaDelimitedString(line);

			if (parsedLine.size() < 4) {
                continue;
            }

			const char* username = parsedLine.at(2).c_str();
			//AnsiString editUsername = UsernameEdit->Text;
			//const char* usernameString = editUsername.c_str();


			if (std::strcmp(username, convertToCharPtr(UsernameEdit->Text)) == 0) {
				const char* password = parsedLine.at(3).c_str();
				//AnsiString editPassword = PasswordEdit->Text;
				//const char* passwordString = editPassword.c_str();

				if (std::strcmp(password, convertToCharPtr(PasswordEdit->Text)) == 0) {
                    loginStatus->Text = "baþarýlý";
                } else {
					loginStatus->Text = "hatalý þifre";
				}
                break;
            }
        }
    } else {
        loginStatus->Text = "Dosya açýlamadý";
    }

    myFile.close();
}

//---------------------------------------------------------------------------

