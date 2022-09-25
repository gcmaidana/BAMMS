#pragma once
//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This windows form is for the user to input
// the names of team 1 and team 2, which will be
// reflected in the premium scoring screen.
//----------------------------------- 
#include "ScoringScreenPremium.h"
namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChooseTeam
	/// </summary>
	public ref class ChooseTeam : public System::Windows::Forms::Form
	{
	public:
		ChooseTeam(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChooseTeam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ submitBtn;
	private: System::Windows::Forms::Label^ enterTeamLabel;
	private: System::Windows::Forms::TextBox^ teamOneTextbox;
	private: System::Windows::Forms::TextBox^ teamTwoTextbox;


	private: System::Windows::Forms::Label^ TeamOneLabel;
	private: System::Windows::Forms::Label^ TeamTwoLabel;
	private: System::Windows::Forms::Button^ backBtn;
	private: System::Windows::Forms::Label^ errorLabel;

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->enterTeamLabel = (gcnew System::Windows::Forms::Label());
			this->teamOneTextbox = (gcnew System::Windows::Forms::TextBox());
			this->teamTwoTextbox = (gcnew System::Windows::Forms::TextBox());
			this->TeamOneLabel = (gcnew System::Windows::Forms::Label());
			this->TeamTwoLabel = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->errorLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// submitBtn
			// 
			this->submitBtn->Location = System::Drawing::Point(428, 412);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(86, 52);
			this->submitBtn->TabIndex = 0;
			this->submitBtn->Text = L"Submit";
			this->submitBtn->UseVisualStyleBackColor = true;
			this->submitBtn->Click += gcnew System::EventHandler(this, &ChooseTeam::submitBtn_Click);
			// 
			// enterTeamLabel
			// 
			this->enterTeamLabel->AutoSize = true;
			this->enterTeamLabel->Location = System::Drawing::Point(398, 27);
			this->enterTeamLabel->Name = L"enterTeamLabel";
			this->enterTeamLabel->Size = System::Drawing::Size(162, 13);
			this->enterTeamLabel->TabIndex = 1;
			this->enterTeamLabel->Text = L"Please Enter in the Team Names";
			this->enterTeamLabel->Click += gcnew System::EventHandler(this, &ChooseTeam::label1_Click);
			// 
			// teamOneTextbox
			// 
			this->teamOneTextbox->Location = System::Drawing::Point(428, 243);
			this->teamOneTextbox->Name = L"teamOneTextbox";
			this->teamOneTextbox->Size = System::Drawing::Size(100, 20);
			this->teamOneTextbox->TabIndex = 2;
			// 
			// teamTwoTextbox
			// 
			this->teamTwoTextbox->Location = System::Drawing::Point(428, 328);
			this->teamTwoTextbox->Name = L"teamTwoTextbox";
			this->teamTwoTextbox->Size = System::Drawing::Size(100, 20);
			this->teamTwoTextbox->TabIndex = 3;
			// 
			// TeamOneLabel
			// 
			this->TeamOneLabel->AutoSize = true;
			this->TeamOneLabel->Location = System::Drawing::Point(425, 227);
			this->TeamOneLabel->Name = L"TeamOneLabel";
			this->TeamOneLabel->Size = System::Drawing::Size(123, 13);
			this->TeamOneLabel->TabIndex = 4;
			this->TeamOneLabel->Text = L"Enter in Team 1\'s Name:";
			// 
			// TeamTwoLabel
			// 
			this->TeamTwoLabel->AutoSize = true;
			this->TeamTwoLabel->Location = System::Drawing::Point(425, 303);
			this->TeamTwoLabel->Name = L"TeamTwoLabel";
			this->TeamTwoLabel->Size = System::Drawing::Size(123, 13);
			this->TeamTwoLabel->TabIndex = 5;
			this->TeamTwoLabel->Text = L"Enter in Team 2\'s Name:";
			// 
			// backBtn
			// 
			this->backBtn->Location = System::Drawing::Point(13, 13);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(75, 23);
			this->backBtn->TabIndex = 6;
			this->backBtn->Text = L"Back";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ChooseTeam::backBtn_Click);
			// 
			// errorLabel
			// 
			this->errorLabel->AutoSize = true;
			this->errorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorLabel->Location = System::Drawing::Point(303, 380);
			this->errorLabel->Name = L"errorLabel";
			this->errorLabel->Size = System::Drawing::Size(0, 13);
			this->errorLabel->TabIndex = 7;
			// 
			// ChooseTeam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 610);
			this->Controls->Add(this->errorLabel);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->TeamTwoLabel);
			this->Controls->Add(this->TeamOneLabel);
			this->Controls->Add(this->teamTwoTextbox);
			this->Controls->Add(this->teamOneTextbox);
			this->Controls->Add(this->enterTeamLabel);
			this->Controls->Add(this->submitBtn);
			this->Name = L"ChooseTeam";
			this->Text = L"ChooseTeam";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}


	// When user presses the submit button set the names of the teams in the Scoring Screen Premium
	private: System::Void submitBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		ScoringScreenPremium^ ssp = gcnew ScoringScreenPremium;
		bool teamOneNotEmpty = false;
		bool teamTwoNotEmpty = false;
		if (teamOneTextbox->Text->Equals("")) // textbox cannot be empty
		{
			errorLabel->Text = "You must input a team name. A team name cannot be empty.";
		}
		else
		{
			ssp->setTeamOneName(teamOneTextbox->Text);
			teamOneNotEmpty = true;
		}

		if (teamTwoTextbox->Text->Equals(""))
		{
			errorLabel->Text = "You must input a team name. A team name cannot be empty.";
		}
		else
		{
			ssp->setTeamTwoname(teamTwoTextbox->Text);
			teamTwoNotEmpty = true;
		}

		if (teamOneNotEmpty && teamTwoNotEmpty)
		{
			this->Hide();
			ssp->ShowDialog();
		}
	
		
	}
private: System::Void backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
