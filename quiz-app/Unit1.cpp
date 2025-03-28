//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
#pragma hdrstop
#include <fstream>
#include <sstream>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

class Question{
   public:

   char* Text;
   char* Answer1;
   char* Answer2;
   char* Answer3;

   int CorrectAnswer;
   int points;

   Question(){}
   Question(char* text, char* ans1, char* ans2, char* ans3, int correctAns, int point){
		Text=text;
		Answer1=ans1;
		Answer2=ans2;
		Answer3=ans3;
		CorrectAnswer=correctAns;
		points = point;

   }

};


std::queue<Question> LoadQuestions(){

	Question q1= Question(" Avustralya'n�n ba�kenti neresidir?","Sydney","Melbourne","Canberra", 3, 2);
	Question q2= Question(" K�z�l Gezegen olarak bilinen gezegen hangisidir?","Merk�r","Mars","J�piter", 2, 1);
	Question q3= Question(" Kanada'n�n ba�kenti neresidir?","Ottawa","Toronto","Vancouver", 1, 2);


	std::queue<Question> questions;
	questions.push(q1);
	questions.push(q2);
	questions.push(q3);

	return questions;
	}


std::queue<Question> questions;
Question currentQuestion;
int selectedAnswer;
int score= 0;
int QuestionNumber= 1;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	 questions= LoadQuestions();
	 currentQuestion= questions.front();

	 QuestionNumberLabel->Text = QuestionNumber;

	 QuestionLabel->Text= currentQuestion.Text;
	 Answer1RadioButton->Text= currentQuestion.Answer1;
	 Answer2RadioButton->Text= currentQuestion.Answer2;
	 Answer3RadioButton->Text= currentQuestion.Answer3;
	 PointsLabel->Text=score;

	 questions.pop();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Answer1RadioButtonChange(TObject *Sender)
{
	selectedAnswer= 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Answer2RadioButtonChange(TObject *Sender)
{
	selectedAnswer= 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Answer3RadioButtonChange(TObject *Sender)
{
    selectedAnswer= 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConfirmButtonClick(TObject *Sender)
{
	if(selectedAnswer==currentQuestion.CorrectAnswer){
	   score += currentQuestion.points;
	   PointsLabel->Text=score;
	   AnswerStatus->Text= "Do�ru Cevap!";
	}
	else{
	   AnswerStatus->Text= "Yanl�� Cevap!";
	}


	FeedbackTimer->Enabled= true;
	ConfirmButton->Enabled=false;
	ConfirmButton->Text="Bekleyin";


}
//---------------------------------------------------------------------------

void __fastcall TForm1::ResetButtonClick(TObject *Sender)
{
	 questions= LoadQuestions();

     currentQuestion= questions.front();

	 QuestionLabel->Text= currentQuestion.Text;
	 Answer1RadioButton->Text= currentQuestion.Answer1;
	 Answer2RadioButton->Text= currentQuestion.Answer2;
	 Answer3RadioButton->Text= currentQuestion.Answer3;

	 questions.pop();

	 Answer1RadioButton->IsChecked= false;
	 Answer2RadioButton->IsChecked= false;
	 Answer3RadioButton->IsChecked= false;

	 score = 0;
	 PointsLabel->Text=score;

	 QuestionNumber= 1;

	 ConfirmButton->Enabled=true;
	 ConfirmButton->Text="Do�rula";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FeedbackTimerTimer(TObject *Sender)
{
	 FeedbackTimer->Enabled= false;
	 AnswerStatus->Text="";

	 ConfirmButton->Enabled=true;
	 ConfirmButton->Text="Do�rula";


     if(!questions.empty()){
	   currentQuestion= questions.front();

	   QuestionLabel->Text= currentQuestion.Text;
	   Answer1RadioButton->Text= currentQuestion.Answer1;
	   Answer2RadioButton->Text= currentQuestion.Answer2;
	   Answer3RadioButton->Text= currentQuestion.Answer3;

	   questions.pop();

	   Answer1RadioButton->IsChecked= false;
	   Answer2RadioButton->IsChecked= false;
	   Answer3RadioButton->IsChecked= false;


	}
	else{
	   ConfirmButton->Enabled=false;
	   ConfirmButton->Text="Oyun bitti";
	}


}
//---------------------------------------------------------------------------

