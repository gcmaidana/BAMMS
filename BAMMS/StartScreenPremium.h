#pragma once
//----------------------------------- 
// Name:    Lucas DeMars, Jacob P, Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: Main Screen for the premium version of our system.
//----------------------------------- 
// 
// 

#include <mysql.h>
#include <sstream>
#include <iostream>
#include "PremiumTutorial.h"
#include "PlayerStatisticsScreen.h"
#include "ScoringScreenPremium.h"
#include "ChooseTeam.h"
#include "DBManager.h"
//#include "LandingPageForm.h"
using namespace std;
namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for StartScreenPremium
	/// </summary>
	public ref class StartScreenPremium : public System::Windows::Forms::Form
	{
	public:
		StartScreenPremium(void)
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
		~StartScreenPremium()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnTeamCreator;
	private: System::Windows::Forms::Button^ btnLogout;
	protected:

	private: System::Windows::Forms::Button^ btnStart;

	private: System::Windows::Forms::Label^ lblWelcome;


	private: System::Windows::Forms::Button^ btnPremiumTutorial;

	private: System::Windows::Forms::Label^ lblError;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnTeamCreator = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnPremiumTutorial = (gcnew System::Windows::Forms::Button());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnTeamCreator
			// 
			this->btnTeamCreator->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnTeamCreator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTeamCreator->Location = System::Drawing::Point(298, 132);
			this->btnTeamCreator->Margin = System::Windows::Forms::Padding(2);
			this->btnTeamCreator->Name = L"btnTeamCreator";
			this->btnTeamCreator->Size = System::Drawing::Size(198, 60);
			this->btnTeamCreator->TabIndex = 0;
			this->btnTeamCreator->Text = L"Start Match";
			this->btnTeamCreator->UseVisualStyleBackColor = true;
			this->btnTeamCreator->Click += gcnew System::EventHandler(this, &StartScreenPremium::btnScoreboard_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Location = System::Drawing::Point(11, 11);
			this->btnLogout->Margin = System::Windows::Forms::Padding(2);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(74, 27);
			this->btnLogout->TabIndex = 2;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &StartScreenPremium::btnLeaveGame_Click);
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(298, 229);
			this->btnStart->Margin = System::Windows::Forms::Padding(2);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(198, 60);
			this->btnStart->TabIndex = 3;
			this->btnStart->Text = L"View Stats";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &StartScreenPremium::btnStartMatch_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->AutoSize = true;
			this->lblWelcome->BackColor = System::Drawing::SystemColors::Control;
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblWelcome->Location = System::Drawing::Point(131, 35);
			this->lblWelcome->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(543, 73);
			this->lblWelcome->TabIndex = 4;
			this->lblWelcome->Text = L"BAMSS Premium";
			// 
			// btnPremiumTutorial
			// 
			this->btnPremiumTutorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPremiumTutorial->Location = System::Drawing::Point(298, 334);
			this->btnPremiumTutorial->Margin = System::Windows::Forms::Padding(2);
			this->btnPremiumTutorial->Name = L"btnPremiumTutorial";
			this->btnPremiumTutorial->Size = System::Drawing::Size(198, 60);
			this->btnPremiumTutorial->TabIndex = 6;
			this->btnPremiumTutorial->Text = L"Tutorial";
			this->btnPremiumTutorial->UseVisualStyleBackColor = true;
			this->btnPremiumTutorial->Click += gcnew System::EventHandler(this, &StartScreenPremium::btnPremiumTutorial_Click);
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Location = System::Drawing::Point(286, 287);
			this->lblError->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 13);
			this->lblError->TabIndex = 8;
			// 
			// StartScreenPremium
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 434);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->btnPremiumTutorial);
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->btnTeamCreator);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StartScreenPremium";
			this->Text = L"StartScreenPremium";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Logs the user out of the system.
	private: System::Void btnLeaveGame_Click(System::Object^ sender, System::EventArgs^ e) {
		DBManager dbm;
		string userID = dbm.retrieverUserID();
		int userIDInt = stoi(userID);
		dbm.setUserAsNOTLoggedIn(userIDInt);
		this->Close();
	}

	//Takes user to the premium score board
	private: System::Void btnScoreboard_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		ChooseTeam^ ct = gcnew ChooseTeam;
		ct->ShowDialog();
		this->Show();
	}

	//Takes user to the stats screen
	private: System::Void btnStartMatch_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		PlayerStatisticsScreen^ pst = gcnew PlayerStatisticsScreen;
		pst->ShowDialog();
		this->Show();

	}

	//Takes the user to the tutorial for the premium version
	private: System::Void btnPremiumTutorial_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PremiumTutorial^ pt = gcnew PremiumTutorial;
		pt->ShowDialog();
		this->Show();
	}


	};
}
