#pragma once
//----------------------------------- 
// Name:   Sean Maidana Dollanarte, 
// Project: project description/name (one line, same in all files, not just the assignment number)
// Purpose: General purpose of code and/or declarations in the file
//----------------------------------- 
#include "ScoringScreenFree.h"
#include "StartScreenPremium.h"
#include <mysql.h>
#include <sstream>
#include <iostream>
#include "DBManager.h"
using namespace std;

namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static string username;
	static string password;
	/// <summary>
	/// Summary for StartScreenFree
	/// </summary>
	public ref class StartScreenFree : public System::Windows::Forms::Form
	{
	public:
		StartScreenFree(void)
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
		~StartScreenFree()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startMatchBtn;
	protected:


	private: System::Windows::Forms::Button^ goPremiumBtn;
	protected:

	protected:

	protected:



	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Panel^ tutorialPanel;


	private: System::Windows::Forms::Button^ tutorialReturnBtn;
	private: System::Windows::Forms::Button^ tutorialBtn;
	private: System::Windows::Forms::RichTextBox^ tutScoreBox;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ tutScoreAdd;
	private: System::Windows::Forms::Button^ premiumButton;

	private: System::Windows::Forms::Button^ logoutButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ threeTut;

	private: System::Windows::Forms::Button^ fieldGoalTut;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;




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
			this->startMatchBtn = (gcnew System::Windows::Forms::Button());
			this->goPremiumBtn = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->tutorialBtn = (gcnew System::Windows::Forms::Button());
			this->tutorialPanel = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->threeTut = (gcnew System::Windows::Forms::Button());
			this->fieldGoalTut = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->premiumButton = (gcnew System::Windows::Forms::Button());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->tutScoreBox = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tutScoreAdd = (gcnew System::Windows::Forms::Button());
			this->tutorialReturnBtn = (gcnew System::Windows::Forms::Button());
			this->tutorialPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// startMatchBtn
			// 
			this->startMatchBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startMatchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startMatchBtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->startMatchBtn->Location = System::Drawing::Point(374, 188);
			this->startMatchBtn->Margin = System::Windows::Forms::Padding(2);
			this->startMatchBtn->Name = L"startMatchBtn";
			this->startMatchBtn->Size = System::Drawing::Size(198, 60);
			this->startMatchBtn->TabIndex = 0;
			this->startMatchBtn->Text = L"Start Match";
			this->startMatchBtn->UseVisualStyleBackColor = true;
			this->startMatchBtn->Click += gcnew System::EventHandler(this, &StartScreenFree::startMatchBtn_Click);
			this->startMatchBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::startMatch_MouseDown);
			// 
			// goPremiumBtn
			// 
			this->goPremiumBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->goPremiumBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goPremiumBtn->Location = System::Drawing::Point(374, 423);
			this->goPremiumBtn->Margin = System::Windows::Forms::Padding(2);
			this->goPremiumBtn->Name = L"goPremiumBtn";
			this->goPremiumBtn->Size = System::Drawing::Size(198, 60);
			this->goPremiumBtn->TabIndex = 2;
			this->goPremiumBtn->Text = L"Go Premium";
			this->goPremiumBtn->UseVisualStyleBackColor = true;
			this->goPremiumBtn->Click += gcnew System::EventHandler(this, &StartScreenFree::goPremiumBtn_Click);
			this->goPremiumBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::goPremium_MouseDown);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(363, 32);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(262, 73);
			this->title->TabIndex = 3;
			this->title->Text = L"BAMSS";
			// 
			// tutorialBtn
			// 
			this->tutorialBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tutorialBtn->Location = System::Drawing::Point(374, 304);
			this->tutorialBtn->Name = L"tutorialBtn";
			this->tutorialBtn->Size = System::Drawing::Size(198, 60);
			this->tutorialBtn->TabIndex = 4;
			this->tutorialBtn->Text = L"Tutorial";
			this->tutorialBtn->UseVisualStyleBackColor = true;
			this->tutorialBtn->Click += gcnew System::EventHandler(this, &StartScreenFree::tutorialBtn_Click);
			this->tutorialBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::tutorialBtn_MouseDown);
			// 
			// tutorialPanel
			// 
			this->tutorialPanel->Controls->Add(this->label8);
			this->tutorialPanel->Controls->Add(this->label7);
			this->tutorialPanel->Controls->Add(this->richTextBox1);
			this->tutorialPanel->Controls->Add(this->button4);
			this->tutorialPanel->Controls->Add(this->button3);
			this->tutorialPanel->Controls->Add(this->label5);
			this->tutorialPanel->Controls->Add(this->label4);
			this->tutorialPanel->Controls->Add(this->label3);
			this->tutorialPanel->Controls->Add(this->threeTut);
			this->tutorialPanel->Controls->Add(this->fieldGoalTut);
			this->tutorialPanel->Controls->Add(this->label2);
			this->tutorialPanel->Controls->Add(this->button1);
			this->tutorialPanel->Controls->Add(this->comboBox1);
			this->tutorialPanel->Controls->Add(this->label1);
			this->tutorialPanel->Controls->Add(this->premiumButton);
			this->tutorialPanel->Controls->Add(this->logoutButton);
			this->tutorialPanel->Controls->Add(this->tutScoreBox);
			this->tutorialPanel->Controls->Add(this->button2);
			this->tutorialPanel->Controls->Add(this->tutScoreAdd);
			this->tutorialPanel->Controls->Add(this->tutorialReturnBtn);
			this->tutorialPanel->Enabled = false;
			this->tutorialPanel->Location = System::Drawing::Point(13, 1);
			this->tutorialPanel->Name = L"tutorialPanel";
			this->tutorialPanel->Size = System::Drawing::Size(909, 562);
			this->tutorialPanel->TabIndex = 5;
			this->tutorialPanel->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(540, 397);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(340, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Reset, only reset  if the offense gets a rebound";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(545, 363);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(335, 20);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Change Possession resets the shotclock fully. ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(706, 256);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(89, 78);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"24";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(706, 337);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(594, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 55);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Change Possession";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(564, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(287, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Start and Stop Clock as a Normal Clock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 387);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(337, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"The rest of the stats are manages the similarly.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(329, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Use the control to practice tracking the score.";
			// 
			// threeTut
			// 
			this->threeTut->Location = System::Drawing::Point(239, 317);
			this->threeTut->Name = L"threeTut";
			this->threeTut->Size = System::Drawing::Size(75, 23);
			this->threeTut->TabIndex = 12;
			this->threeTut->Text = L"Three";
			this->threeTut->UseVisualStyleBackColor = true;
			this->threeTut->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::threeTut_MouseDown);
			// 
			// fieldGoalTut
			// 
			this->fieldGoalTut->Location = System::Drawing::Point(239, 288);
			this->fieldGoalTut->Name = L"fieldGoalTut";
			this->fieldGoalTut->Size = System::Drawing::Size(75, 23);
			this->fieldGoalTut->TabIndex = 11;
			this->fieldGoalTut->Text = L"Score";
			this->fieldGoalTut->UseVisualStyleBackColor = true;
			this->fieldGoalTut->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::fieldGoalTut_MouseDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(533, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(364, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Select Start New Game after selecting gamemode";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(681, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Start New Game";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NBA Game", L"College Game" });
			this->comboBox1->Location = System::Drawing::Point(135, 80);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(370, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Click drop down box and select desired gamemode.";
			// 
			// premiumButton
			// 
			this->premiumButton->Location = System::Drawing::Point(380, 3);
			this->premiumButton->Name = L"premiumButton";
			this->premiumButton->Size = System::Drawing::Size(150, 45);
			this->premiumButton->TabIndex = 6;
			this->premiumButton->Text = L"UPGRADE TO PREMIUM";
			this->premiumButton->UseVisualStyleBackColor = true;
			this->premiumButton->Click += gcnew System::EventHandler(this, &StartScreenFree::premiumButton_Click);
			// 
			// logoutButton
			// 
			this->logoutButton->Location = System::Drawing::Point(834, 3);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(75, 23);
			this->logoutButton->TabIndex = 5;
			this->logoutButton->Text = L"Logout";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &StartScreenFree::logoutButton_Click);
			// 
			// tutScoreBox
			// 
			this->tutScoreBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tutScoreBox->Location = System::Drawing::Point(57, 256);
			this->tutScoreBox->Name = L"tutScoreBox";
			this->tutScoreBox->Size = System::Drawing::Size(176, 113);
			this->tutScoreBox->TabIndex = 4;
			this->tutScoreBox->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 346);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::button2_MouseDown);
			// 
			// tutScoreAdd
			// 
			this->tutScoreAdd->Location = System::Drawing::Point(239, 256);
			this->tutScoreAdd->Name = L"tutScoreAdd";
			this->tutScoreAdd->Size = System::Drawing::Size(75, 23);
			this->tutScoreAdd->TabIndex = 2;
			this->tutScoreAdd->Text = L"Free Throw";
			this->tutScoreAdd->UseVisualStyleBackColor = true;
			this->tutScoreAdd->Click += gcnew System::EventHandler(this, &StartScreenFree::tutScoreAdd_Click);
			this->tutScoreAdd->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::tutScoreAdd_MouseDown);
			// 
			// tutorialReturnBtn
			// 
			this->tutorialReturnBtn->Location = System::Drawing::Point(3, 3);
			this->tutorialReturnBtn->Name = L"tutorialReturnBtn";
			this->tutorialReturnBtn->Size = System::Drawing::Size(75, 23);
			this->tutorialReturnBtn->TabIndex = 1;
			this->tutorialReturnBtn->Text = L"Back";
			this->tutorialReturnBtn->UseVisualStyleBackColor = true;
			this->tutorialReturnBtn->Click += gcnew System::EventHandler(this, &StartScreenFree::tutorialReturnBtn_Click);
			this->tutorialReturnBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StartScreenFree::tutorialReturnBtn_MouseDown);
			// 
			// StartScreenFree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 561);
			this->Controls->Add(this->tutorialPanel);
			this->Controls->Add(this->tutorialBtn);
			this->Controls->Add(this->title);
			this->Controls->Add(this->goPremiumBtn);
			this->Controls->Add(this->startMatchBtn);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StartScreenFree";
			this->Text = L"BAMSS";
			this->tutorialPanel->ResumeLayout(false);
			this->tutorialPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Called when the start match button is clicked in the free menu.
	private: System::Void startMatch_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->Hide();
		ScoringScreenFree^ scoreFree = gcnew ScoringScreenFree();
		scoreFree->ShowDialog();
		this->Show();
	}

		   //Called when the go premium button is clicked in the free menu.
	private: System::Void goPremium_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){}

		   //Called when the tutorial button is pressed.
	private: System::Void tutorialBtn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		tutorialPanel->Enabled = true;
		tutorialPanel->Visible = true;
	}

		   //Called when the tutorial screen back button is pressed. 
	private: System::Void tutorialReturnBtn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		tutorialPanel->Enabled = false;
		tutorialPanel->Visible = false;
	}

		   //Called when adding score to the tutorial box
	private: System::Void tutScoreAdd_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		int score;
		String^ temp = tutScoreBox->Text;
		score = int::Parse(temp);
		score++;
		tutScoreBox->Text = score.ToString();
	}
		   //Called when removing score to the tutorial box
	private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		int score;
		String^ temp = tutScoreBox->Text;
		score = int::Parse(temp);
		score--;
		if (score < 0)
			score = 0;
		tutScoreBox->Text = score.ToString();

	}
	private: System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DBManager dbm;
		string userID = dbm.retrieverUserID();
		int userIDInt = stoi(userID);
		dbm.setUserAsNOTLoggedIn(userIDInt);
		this->Close();

	}
	private: System::Void goPremiumBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		boolean userIsNowPremium = false;
		DBManager dbm;
		bool userSuccesfullyUpgraded = dbm.subscriberToPremium(getUsername(), getPassword());
		if (userSuccesfullyUpgraded)
		{
			this->Hide();
			StartScreenPremium^ ssp = gcnew StartScreenPremium();
			ssp->ShowDialog();
		}
	}
	private: System::Void premiumButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// This button is used to upgrade a user from the free version to the premium version

		boolean userIsNowPremium = false;
		DBManager dbm;
		bool userSuccesfullyUpgraded = dbm.subscriberToPremium(getUsername(), getPassword());
		if (userSuccesfullyUpgraded)
		{
			this->Hide();
			StartScreenPremium^ ssp = gcnew StartScreenPremium();
			ssp->ShowDialog();
		}
	}

	public: System::Void setUserCredentials(string user, string pass)
	{
		username = user;
		password = pass;
	}

	public: string getUsername()
	{
		return username;
	}

	public: string getPassword()
	{
		return password;
	}

	private: System::Void fieldGoalTut_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		int score;
		String^ temp = tutScoreBox->Text;
		score = int::Parse(temp);
		score += 2;
		tutScoreBox->Text = score.ToString();
	}
	private: System::Void threeTut_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		int score;
		String^ temp = tutScoreBox->Text;
		score = int::Parse(temp);
		score += 3;
		tutScoreBox->Text = score.ToString();
	}

	private: System::Void startMatchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tutorialBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tutScoreAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tutorialReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
