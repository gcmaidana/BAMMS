#pragma once
//----------------------------------- 
// Name:    Lucas DeMars
// Project: BAMSS
// Purpose: View stats of the teams in the database.
//----------------------------------- 

#include "Team.h"
#include "DBManager.h"
#include <msclr\marshal_cppstd.h>
#include <mysql.h>

namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayerStatisticsScreen
	/// </summary>
	public ref class PlayerStatisticsScreen : public System::Windows::Forms::Form
	{
	public:
		PlayerStatisticsScreen(void)
		{
			InitializeComponent();
		
		}
		void setTeam(Team* team) {
			this->team = team;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlayerStatisticsScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ name;
	private: Team* team;




	private: System::Windows::Forms::Label^ teamNameLabel;
	private: System::Windows::Forms::Button^ confirmTeamNameButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ apgBox;
	private: System::Windows::Forms::RichTextBox^ rpgBox;
	private: System::Windows::Forms::RichTextBox^ spgBox;
	private: System::Windows::Forms::RichTextBox^ totalGameBox;




	private: System::Windows::Forms::RichTextBox^ bpgBox;
	private: System::Windows::Forms::TextBox^ enterTeamNameBox;

	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::RichTextBox^ ppgBox;

	protected:

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
			this->teamNameLabel = (gcnew System::Windows::Forms::Label());
			this->confirmTeamNameButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->apgBox = (gcnew System::Windows::Forms::RichTextBox());
			this->rpgBox = (gcnew System::Windows::Forms::RichTextBox());
			this->spgBox = (gcnew System::Windows::Forms::RichTextBox());
			this->totalGameBox = (gcnew System::Windows::Forms::RichTextBox());
			this->bpgBox = (gcnew System::Windows::Forms::RichTextBox());
			this->enterTeamNameBox = (gcnew System::Windows::Forms::TextBox());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->ppgBox = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// teamNameLabel
			// 
			this->teamNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->teamNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teamNameLabel->Location = System::Drawing::Point(0, 0);
			this->teamNameLabel->Name = L"teamNameLabel";
			this->teamNameLabel->Size = System::Drawing::Size(708, 432);
			this->teamNameLabel->TabIndex = 13;
			this->teamNameLabel->Text = L"Team";
			this->teamNameLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// confirmTeamNameButton
			// 
			this->confirmTeamNameButton->Location = System::Drawing::Point(374, 84);
			this->confirmTeamNameButton->Name = L"confirmTeamNameButton";
			this->confirmTeamNameButton->Size = System::Drawing::Size(75, 23);
			this->confirmTeamNameButton->TabIndex = 14;
			this->confirmTeamNameButton->Text = L"Enter";
			this->confirmTeamNameButton->UseVisualStyleBackColor = true;
			this->confirmTeamNameButton->Click += gcnew System::EventHandler(this, &PlayerStatisticsScreen::confirmTeamNameButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(301, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Assists Per Game";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Points Per Game";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(559, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Rebounds Per Game";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Steals Per Game";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(301, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Blocks Per Game";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(569, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Total Games";
			// 
			// apgBox
			// 
			this->apgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apgBox->Location = System::Drawing::Point(277, 149);
			this->apgBox->Margin = System::Windows::Forms::Padding(2);
			this->apgBox->Name = L"apgBox";
			this->apgBox->Size = System::Drawing::Size(145, 77);
			this->apgBox->TabIndex = 21;
			this->apgBox->Text = L"";
			// 
			// rpgBox
			// 
			this->rpgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rpgBox->Location = System::Drawing::Point(530, 149);
			this->rpgBox->Margin = System::Windows::Forms::Padding(2);
			this->rpgBox->Name = L"rpgBox";
			this->rpgBox->Size = System::Drawing::Size(145, 77);
			this->rpgBox->TabIndex = 22;
			this->rpgBox->Text = L"";
			// 
			// spgBox
			// 
			this->spgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spgBox->Location = System::Drawing::Point(35, 295);
			this->spgBox->Margin = System::Windows::Forms::Padding(2);
			this->spgBox->Name = L"spgBox";
			this->spgBox->Size = System::Drawing::Size(145, 77);
			this->spgBox->TabIndex = 23;
			this->spgBox->Text = L"";
			// 
			// totalGameBox
			// 
			this->totalGameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalGameBox->Location = System::Drawing::Point(530, 295);
			this->totalGameBox->Margin = System::Windows::Forms::Padding(2);
			this->totalGameBox->Name = L"totalGameBox";
			this->totalGameBox->Size = System::Drawing::Size(145, 77);
			this->totalGameBox->TabIndex = 24;
			this->totalGameBox->Text = L"";
			// 
			// bpgBox
			// 
			this->bpgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpgBox->Location = System::Drawing::Point(277, 295);
			this->bpgBox->Margin = System::Windows::Forms::Padding(2);
			this->bpgBox->Name = L"bpgBox";
			this->bpgBox->Size = System::Drawing::Size(145, 77);
			this->bpgBox->TabIndex = 25;
			this->bpgBox->Text = L"";
			// 
			// enterTeamNameBox
			// 
			this->enterTeamNameBox->Location = System::Drawing::Point(256, 87);
			this->enterTeamNameBox->Name = L"enterTeamNameBox";
			this->enterTeamNameBox->Size = System::Drawing::Size(100, 20);
			this->enterTeamNameBox->TabIndex = 26;
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 12);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(75, 23);
			this->backButton->TabIndex = 27;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &PlayerStatisticsScreen::backButton_Click);
			// 
			// ppgBox
			// 
			this->ppgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ppgBox->Location = System::Drawing::Point(35, 149);
			this->ppgBox->Margin = System::Windows::Forms::Padding(2);
			this->ppgBox->Name = L"ppgBox";
			this->ppgBox->Size = System::Drawing::Size(145, 77);
			this->ppgBox->TabIndex = 28;
			this->ppgBox->Text = L"";
			// 
			// PlayerStatisticsScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 432);
			this->Controls->Add(this->ppgBox);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->enterTeamNameBox);
			this->Controls->Add(this->bpgBox);
			this->Controls->Add(this->totalGameBox);
			this->Controls->Add(this->spgBox);
			this->Controls->Add(this->rpgBox);
			this->Controls->Add(this->apgBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirmTeamNameButton);
			this->Controls->Add(this->teamNameLabel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PlayerStatisticsScreen";
			this->Text = L"PlayerStatisticsScreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


	//Upon clicking the user will either see the stats displayed for the team they entered or 
	// it will tell them that the team doesnt exist.
	private: System::Void confirmTeamNameButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context;
		name = enterTeamNameBox->Text;
		string teamName = context.marshal_as<std::string>(enterTeamNameBox->Text);
		DBManager dbm;
		if (!dbm.checkIfTeamAlreadyExists(teamName))//Check if team exists.
		{
			teamNameLabel->Text = "Team Doesn't Exist";
			return;
		}
		teamNameLabel->Text = name;
		vector<string> teamStats;
		teamStats = dbm.retrieveExistingTeamStats(teamName);

		string points, rebounds, games, steals, assists, blocks;

		//Grab Stats
		points = teamStats.at(3);
		rebounds = teamStats.at(6);
		games = teamStats.at(9);
		steals = teamStats.at(8);
		assists = teamStats.at(5);
		blocks = teamStats.at(7);


		CalculateStats(stod(points), stod(rebounds), stod(steals), stod(assists), stod(blocks), stod(games));
	}

	//Calculates the stats in the form of doubles for more specific readings. Each stat is divided
	// By the total number of games played for the per game stats.
	private: void CalculateStats(double totPoints, double totRebounds, double totSteals, double totAssists, double totBlocks, double totGames)
	{
		double ppg = totPoints / totGames;
		double apg = totAssists / totGames;
		double rpg = totRebounds / totGames;
		double spg = totSteals / totGames;
		double bpg = totBlocks / totGames;

		const double multiplier = std::pow(10.0, 1);
		ppg = std::ceil(ppg * multiplier) / multiplier;
		apg = std::ceil(apg * 100.0) / 100.0;
		spg = std::ceil(spg * 100.0) / 100.0;
		bpg = std::ceil(bpg * 100.0) / 100.0;
		rpg = std::ceil(rpg * 100.0) / 100.0;

		ppgBox->Text = ppg.ToString();
		apgBox->Text = apg.ToString();
		rpgBox->Text = rpg.ToString();
		spgBox->Text = spg.ToString();
		bpgBox->Text = bpg.ToString();
		totalGameBox->Text = totGames.ToString();
	}

	//Returns the user to the previous page.
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

};
}
