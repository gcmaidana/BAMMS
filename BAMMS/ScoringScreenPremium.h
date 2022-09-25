#pragma once
//-----------------------------------------------------------------------
// Name:  Lucas D, Sean M
// Project: BAMSS
// Purpose: Scoreboard screen for the premium version of our system. 
// Add score and specific team stats and end the game to save the stats.
//-----------------------------------------------------------------------
#include "Game.h"
#include "NBAGame.h"
#include "CollegeGame.h"
#include "DBManager.h"
#include <msclr\marshal_cppstd.h>


namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 
	/// </summary>
	public ref class ScoringScreenPremium : public System::Windows::Forms::Form
	{
		int seconds;
		int minutes;
		String^ sec;
		String^ min;
		String^ shotClockStr;
	private: System::Windows::Forms::RichTextBox^ periodNumBox;
	private: System::Windows::Forms::Button^ fieldGoalHome;
	private: System::Windows::Forms::Button^ threePointerHome;
	private: System::Windows::Forms::Button^ fieldGoalAway;
	private: System::Windows::Forms::Button^ threePointerAway;
	private: System::Windows::Forms::Button^ addAssistHome;
	private: System::Windows::Forms::Button^ removeAssistHome;
	private: System::Windows::Forms::Button^ addReboundHome;
	private: System::Windows::Forms::Button^ removeReboundHome;
	private: System::Windows::Forms::Button^ addBlockHome;
	private: System::Windows::Forms::Button^ removeBlockHome;






	private: System::Windows::Forms::Button^ addStealHome;
	private: System::Windows::Forms::Button^ removeStealHome;
	private: System::Windows::Forms::RichTextBox^ reboundsHome;



	private: System::Windows::Forms::RichTextBox^ assistsHome;
	private: System::Windows::Forms::RichTextBox^ blocksHome;


	private: System::Windows::Forms::RichTextBox^ stealsHome;
	private: System::Windows::Forms::RichTextBox^ assistsAway;
	private: System::Windows::Forms::RichTextBox^ reboundsAway;
	private: System::Windows::Forms::RichTextBox^ stealsAway;
	private: System::Windows::Forms::RichTextBox^ blocksAway;





	private: System::Windows::Forms::Button^ addAssistAway;
	private: System::Windows::Forms::Button^ removeAssistAway;
	private: System::Windows::Forms::Button^ addReboundAway;
	private: System::Windows::Forms::Button^ removeReboundAway;
	private: System::Windows::Forms::Button^ addStealAway;





	private: System::Windows::Forms::Button^ removeStealAway;
	private: System::Windows::Forms::Button^ addBlockAway;
	private: System::Windows::Forms::Button^ removeBlockAway;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ endGame;

	private: System::Windows::Forms::ComboBox^ gameTypeSelection;

	public:
		ScoringScreenPremium(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScoringScreenPremium()
		{
			if (components)
			{
				delete components;
			}
		}

	private: bool clockActive;
	private: const int HOME = 1;
	private: const int AWAY = 2;
	private: const int ADD = 1;
	private: const int REMOVE = 0;
	private: Game* bballGame;
	private: System::String^ teamOneName;
	private: System::String^ teamTwoName;
	

	private: System::Windows::Forms::Label^ scoreLabel;
	private: System::Windows::Forms::RichTextBox^ timeBox;
	private: System::Windows::Forms::Button^ stopTimeBtn;
	private: System::Windows::Forms::Button^ startTimeBtn;
private: System::Windows::Forms::RichTextBox^ homeScoreBox;





	private: System::Windows::Forms::Button^ addHomeScore;
	private: System::Windows::Forms::Button^ removeHomeScore;
	private: System::Windows::Forms::Button^ addScoreAway;
	private: System::Windows::Forms::Button^ removeScoreAway;
private: System::Windows::Forms::RichTextBox^ awayScoreBox;






	private: System::Windows::Forms::RichTextBox^ bonusBoxHome;
	private: System::Windows::Forms::RichTextBox^ bonusBoxAway;






	private: System::Windows::Forms::Button^ changeQuarter;
	private: System::Windows::Forms::Button^ newGame;
	private: System::Windows::Forms::Button^ backFreeBtn;




	private: System::Windows::Forms::RichTextBox^ foulCountHome;
	private: System::Windows::Forms::RichTextBox^ foulCountAway;

	private: System::Windows::Forms::Button^ addFoulHome;



	private: System::Windows::Forms::Button^ removeFoulHome;
	private: System::Windows::Forms::Button^ addFoulAway;
	private: System::Windows::Forms::Button^ removeFoulAway;
	private: System::Windows::Forms::Button^ removeTimeoutHome;
	private: System::Windows::Forms::Button^ removeTimeoutAway;





	private: System::Windows::Forms::RichTextBox^ timeOutsHome;
	private: System::Windows::Forms::RichTextBox^ timeOutsAway;
private: System::Windows::Forms::Label^ teamTwoLabel;

private: System::Windows::Forms::Label^ teamOneLabel;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ gameClock;
	private: System::Windows::Forms::Timer^ shotClock;
	private: System::Windows::Forms::Button^ logoutButton;
	private: System::Windows::Forms::RichTextBox^ shotClockBox;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ shotClockReset;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ posChange;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RichTextBox^ posHome;
	private: System::Windows::Forms::RichTextBox^ posAway;
private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->timeBox = (gcnew System::Windows::Forms::RichTextBox());
			this->stopTimeBtn = (gcnew System::Windows::Forms::Button());
			this->startTimeBtn = (gcnew System::Windows::Forms::Button());
			this->homeScoreBox = (gcnew System::Windows::Forms::RichTextBox());
			this->addHomeScore = (gcnew System::Windows::Forms::Button());
			this->removeHomeScore = (gcnew System::Windows::Forms::Button());
			this->addScoreAway = (gcnew System::Windows::Forms::Button());
			this->removeScoreAway = (gcnew System::Windows::Forms::Button());
			this->awayScoreBox = (gcnew System::Windows::Forms::RichTextBox());
			this->bonusBoxHome = (gcnew System::Windows::Forms::RichTextBox());
			this->bonusBoxAway = (gcnew System::Windows::Forms::RichTextBox());
			this->changeQuarter = (gcnew System::Windows::Forms::Button());
			this->newGame = (gcnew System::Windows::Forms::Button());
			this->backFreeBtn = (gcnew System::Windows::Forms::Button());
			this->foulCountHome = (gcnew System::Windows::Forms::RichTextBox());
			this->foulCountAway = (gcnew System::Windows::Forms::RichTextBox());
			this->addFoulHome = (gcnew System::Windows::Forms::Button());
			this->removeFoulHome = (gcnew System::Windows::Forms::Button());
			this->addFoulAway = (gcnew System::Windows::Forms::Button());
			this->removeFoulAway = (gcnew System::Windows::Forms::Button());
			this->removeTimeoutHome = (gcnew System::Windows::Forms::Button());
			this->removeTimeoutAway = (gcnew System::Windows::Forms::Button());
			this->timeOutsHome = (gcnew System::Windows::Forms::RichTextBox());
			this->timeOutsAway = (gcnew System::Windows::Forms::RichTextBox());
			this->teamTwoLabel = (gcnew System::Windows::Forms::Label());
			this->teamOneLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gameClock = (gcnew System::Windows::Forms::Timer(this->components));
			this->shotClock = (gcnew System::Windows::Forms::Timer(this->components));
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->shotClockBox = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->shotClockReset = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->posChange = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->posHome = (gcnew System::Windows::Forms::RichTextBox());
			this->posAway = (gcnew System::Windows::Forms::RichTextBox());
			this->periodNumBox = (gcnew System::Windows::Forms::RichTextBox());
			this->fieldGoalHome = (gcnew System::Windows::Forms::Button());
			this->threePointerHome = (gcnew System::Windows::Forms::Button());
			this->fieldGoalAway = (gcnew System::Windows::Forms::Button());
			this->threePointerAway = (gcnew System::Windows::Forms::Button());
			this->gameTypeSelection = (gcnew System::Windows::Forms::ComboBox());
			this->addAssistHome = (gcnew System::Windows::Forms::Button());
			this->removeAssistHome = (gcnew System::Windows::Forms::Button());
			this->addReboundHome = (gcnew System::Windows::Forms::Button());
			this->removeReboundHome = (gcnew System::Windows::Forms::Button());
			this->addBlockHome = (gcnew System::Windows::Forms::Button());
			this->removeBlockHome = (gcnew System::Windows::Forms::Button());
			this->addStealHome = (gcnew System::Windows::Forms::Button());
			this->removeStealHome = (gcnew System::Windows::Forms::Button());
			this->reboundsHome = (gcnew System::Windows::Forms::RichTextBox());
			this->assistsHome = (gcnew System::Windows::Forms::RichTextBox());
			this->blocksHome = (gcnew System::Windows::Forms::RichTextBox());
			this->stealsHome = (gcnew System::Windows::Forms::RichTextBox());
			this->assistsAway = (gcnew System::Windows::Forms::RichTextBox());
			this->reboundsAway = (gcnew System::Windows::Forms::RichTextBox());
			this->stealsAway = (gcnew System::Windows::Forms::RichTextBox());
			this->blocksAway = (gcnew System::Windows::Forms::RichTextBox());
			this->addAssistAway = (gcnew System::Windows::Forms::Button());
			this->removeAssistAway = (gcnew System::Windows::Forms::Button());
			this->addReboundAway = (gcnew System::Windows::Forms::Button());
			this->removeReboundAway = (gcnew System::Windows::Forms::Button());
			this->addStealAway = (gcnew System::Windows::Forms::Button());
			this->removeStealAway = (gcnew System::Windows::Forms::Button());
			this->addBlockAway = (gcnew System::Windows::Forms::Button());
			this->removeBlockAway = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->endGame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// scoreLabel
			// 
			this->scoreLabel->AutoSize = true;
			this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreLabel->Location = System::Drawing::Point(137, 9);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(658, 73);
			this->scoreLabel->TabIndex = 0;
			this->scoreLabel->Text = L"BAMMS Score Board";
			this->scoreLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// timeBox
			// 
			this->timeBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeBox->Location = System::Drawing::Point(337, 121);
			this->timeBox->Name = L"timeBox";
			this->timeBox->Size = System::Drawing::Size(267, 120);
			this->timeBox->TabIndex = 1;
			this->timeBox->Text = L"12:00";
			// 
			// stopTimeBtn
			// 
			this->stopTimeBtn->Location = System::Drawing::Point(520, 247);
			this->stopTimeBtn->Name = L"stopTimeBtn";
			this->stopTimeBtn->Size = System::Drawing::Size(75, 23);
			this->stopTimeBtn->TabIndex = 2;
			this->stopTimeBtn->Text = L"Stop Time";
			this->stopTimeBtn->UseVisualStyleBackColor = true;
			this->stopTimeBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::stopTimeBtn_MouseDown);
			// 
			// startTimeBtn
			// 
			this->startTimeBtn->Location = System::Drawing::Point(349, 247);
			this->startTimeBtn->Name = L"startTimeBtn";
			this->startTimeBtn->Size = System::Drawing::Size(75, 23);
			this->startTimeBtn->TabIndex = 3;
			this->startTimeBtn->Text = L"Start Time";
			this->startTimeBtn->UseVisualStyleBackColor = true;
			this->startTimeBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::startTimeBtn_MouseDown);
			// 
			// homeScoreBox
			// 
			this->homeScoreBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeScoreBox->Location = System::Drawing::Point(12, 124);
			this->homeScoreBox->Name = L"homeScoreBox";
			this->homeScoreBox->Size = System::Drawing::Size(207, 117);
			this->homeScoreBox->TabIndex = 4;
			this->homeScoreBox->Text = L"0";
			// 
			// addHomeScore
			// 
			this->addHomeScore->Location = System::Drawing::Point(228, 124);
			this->addHomeScore->Name = L"addHomeScore";
			this->addHomeScore->Size = System::Drawing::Size(75, 23);
			this->addHomeScore->TabIndex = 5;
			this->addHomeScore->Text = L"Free Throw";
			this->addHomeScore->UseVisualStyleBackColor = true;
			this->addHomeScore->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addHomeScore_MouseDown);
			// 
			// removeHomeScore
			// 
			this->removeHomeScore->Location = System::Drawing::Point(228, 211);
			this->removeHomeScore->Name = L"removeHomeScore";
			this->removeHomeScore->Size = System::Drawing::Size(75, 23);
			this->removeHomeScore->TabIndex = 6;
			this->removeHomeScore->Text = L"Undo";
			this->removeHomeScore->UseVisualStyleBackColor = true;
			this->removeHomeScore->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeHomeScore_MouseDown);
			// 
			// addScoreAway
			// 
			this->addScoreAway->Location = System::Drawing::Point(634, 124);
			this->addScoreAway->Name = L"addScoreAway";
			this->addScoreAway->Size = System::Drawing::Size(75, 23);
			this->addScoreAway->TabIndex = 7;
			this->addScoreAway->Text = L"Free Throw";
			this->addScoreAway->UseVisualStyleBackColor = true;
			this->addScoreAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addScoreAway_MouseDown);
			// 
			// removeScoreAway
			// 
			this->removeScoreAway->Location = System::Drawing::Point(634, 211);
			this->removeScoreAway->Name = L"removeScoreAway";
			this->removeScoreAway->Size = System::Drawing::Size(75, 23);
			this->removeScoreAway->TabIndex = 8;
			this->removeScoreAway->Text = L"Undo";
			this->removeScoreAway->UseVisualStyleBackColor = true;
			this->removeScoreAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeScoreAway_MouseDown);
			// 
			// awayScoreBox
			// 
			this->awayScoreBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->awayScoreBox->Location = System::Drawing::Point(715, 124);
			this->awayScoreBox->Name = L"awayScoreBox";
			this->awayScoreBox->Size = System::Drawing::Size(207, 117);
			this->awayScoreBox->TabIndex = 9;
			this->awayScoreBox->Text = L"0";
			// 
			// bonusBoxHome
			// 
			this->bonusBoxHome->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->bonusBoxHome->Location = System::Drawing::Point(12, 270);
			this->bonusBoxHome->Name = L"bonusBoxHome";
			this->bonusBoxHome->Size = System::Drawing::Size(100, 39);
			this->bonusBoxHome->TabIndex = 10;
			this->bonusBoxHome->Text = L"";
			// 
			// bonusBoxAway
			// 
			this->bonusBoxAway->Location = System::Drawing::Point(822, 263);
			this->bonusBoxAway->Name = L"bonusBoxAway";
			this->bonusBoxAway->Size = System::Drawing::Size(100, 36);
			this->bonusBoxAway->TabIndex = 11;
			this->bonusBoxAway->Text = L"";
			// 
			// changeQuarter
			// 
			this->changeQuarter->Location = System::Drawing::Point(428, 526);
			this->changeQuarter->Name = L"changeQuarter";
			this->changeQuarter->Size = System::Drawing::Size(86, 23);
			this->changeQuarter->TabIndex = 14;
			this->changeQuarter->Text = L"New Period";
			this->changeQuarter->UseVisualStyleBackColor = true;
			this->changeQuarter->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::changeQuarter_MouseDown);
			// 
			// newGame
			// 
			this->newGame->Location = System::Drawing::Point(819, 9);
			this->newGame->Name = L"newGame";
			this->newGame->Size = System::Drawing::Size(103, 23);
			this->newGame->TabIndex = 15;
			this->newGame->Text = L"Start New Game";
			this->newGame->UseVisualStyleBackColor = true;
			this->newGame->Click += gcnew System::EventHandler(this, &ScoringScreenPremium::newGame_Click);
			this->newGame->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::newGame_MouseDown);
			// 
			// backFreeBtn
			// 
			this->backFreeBtn->Location = System::Drawing::Point(12, 9);
			this->backFreeBtn->Name = L"backFreeBtn";
			this->backFreeBtn->Size = System::Drawing::Size(75, 23);
			this->backFreeBtn->TabIndex = 16;
			this->backFreeBtn->Text = L"Back";
			this->backFreeBtn->UseVisualStyleBackColor = true;
			this->backFreeBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::backFreeBtn_MouseDown);
			// 
			// foulCountHome
			// 
			this->foulCountHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foulCountHome->Location = System::Drawing::Point(12, 359);
			this->foulCountHome->Name = L"foulCountHome";
			this->foulCountHome->Size = System::Drawing::Size(54, 54);
			this->foulCountHome->TabIndex = 17;
			this->foulCountHome->Text = L"0";
			// 
			// foulCountAway
			// 
			this->foulCountAway->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->foulCountAway->Location = System::Drawing::Point(868, 359);
			this->foulCountAway->Name = L"foulCountAway";
			this->foulCountAway->Size = System::Drawing::Size(54, 54);
			this->foulCountAway->TabIndex = 18;
			this->foulCountAway->Text = L"0";
			// 
			// addFoulHome
			// 
			this->addFoulHome->Location = System::Drawing::Point(72, 359);
			this->addFoulHome->Name = L"addFoulHome";
			this->addFoulHome->Size = System::Drawing::Size(75, 23);
			this->addFoulHome->TabIndex = 19;
			this->addFoulHome->Text = L"Add";
			this->addFoulHome->UseVisualStyleBackColor = true;
			this->addFoulHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addFoulHome_MouseDown);
			// 
			// removeFoulHome
			// 
			this->removeFoulHome->Location = System::Drawing::Point(72, 388);
			this->removeFoulHome->Name = L"removeFoulHome";
			this->removeFoulHome->Size = System::Drawing::Size(75, 23);
			this->removeFoulHome->TabIndex = 20;
			this->removeFoulHome->Text = L"Remove";
			this->removeFoulHome->UseVisualStyleBackColor = true;
			this->removeFoulHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeFoulHome_MouseDown);
			// 
			// addFoulAway
			// 
			this->addFoulAway->Location = System::Drawing::Point(787, 359);
			this->addFoulAway->Name = L"addFoulAway";
			this->addFoulAway->Size = System::Drawing::Size(75, 23);
			this->addFoulAway->TabIndex = 21;
			this->addFoulAway->Text = L"Add";
			this->addFoulAway->UseVisualStyleBackColor = true;
			this->addFoulAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addFoulAway_MouseDown);
			// 
			// removeFoulAway
			// 
			this->removeFoulAway->Location = System::Drawing::Point(787, 388);
			this->removeFoulAway->Name = L"removeFoulAway";
			this->removeFoulAway->Size = System::Drawing::Size(75, 23);
			this->removeFoulAway->TabIndex = 22;
			this->removeFoulAway->Text = L"Remove";
			this->removeFoulAway->UseVisualStyleBackColor = true;
			this->removeFoulAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeFoulAway_MouseDown);
			// 
			// removeTimeoutHome
			// 
			this->removeTimeoutHome->Location = System::Drawing::Point(45, 465);
			this->removeTimeoutHome->Name = L"removeTimeoutHome";
			this->removeTimeoutHome->Size = System::Drawing::Size(82, 23);
			this->removeTimeoutHome->TabIndex = 23;
			this->removeTimeoutHome->Text = L"Take Timeout";
			this->removeTimeoutHome->UseVisualStyleBackColor = true;
			this->removeTimeoutHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeTimeoutHome_MouseDown);
			// 
			// removeTimeoutAway
			// 
			this->removeTimeoutAway->Location = System::Drawing::Point(798, 465);
			this->removeTimeoutAway->Name = L"removeTimeoutAway";
			this->removeTimeoutAway->Size = System::Drawing::Size(91, 23);
			this->removeTimeoutAway->TabIndex = 24;
			this->removeTimeoutAway->Text = L"Take Timeout";
			this->removeTimeoutAway->UseVisualStyleBackColor = true;
			this->removeTimeoutAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeTimeoutAway_MouseDown);
			// 
			// timeOutsHome
			// 
			this->timeOutsHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeOutsHome->Location = System::Drawing::Point(12, 456);
			this->timeOutsHome->Name = L"timeOutsHome";
			this->timeOutsHome->Size = System::Drawing::Size(27, 52);
			this->timeOutsHome->TabIndex = 25;
			this->timeOutsHome->Text = L"7";
			// 
			// timeOutsAway
			// 
			this->timeOutsAway->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeOutsAway->Location = System::Drawing::Point(895, 456);
			this->timeOutsAway->Name = L"timeOutsAway";
			this->timeOutsAway->Size = System::Drawing::Size(27, 52);
			this->timeOutsAway->TabIndex = 26;
			this->timeOutsAway->Text = L"7";
			// 
			// teamTwoLabel
			// 
			this->teamTwoLabel->AutoSize = true;
			this->teamTwoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teamTwoLabel->Location = System::Drawing::Point(804, 79);
			this->teamTwoLabel->Name = L"teamTwoLabel";
			this->teamTwoLabel->Size = System::Drawing::Size(128, 42);
			this->teamTwoLabel->TabIndex = 27;
			this->teamTwoLabel->Text = L"AWAY";
			// 
			// teamOneLabel
			// 
			this->teamOneLabel->AutoSize = true;
			this->teamOneLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teamOneLabel->Location = System::Drawing::Point(5, 79);
			this->teamOneLabel->Name = L"teamOneLabel";
			this->teamOneLabel->Size = System::Drawing::Size(130, 42);
			this->teamOneLabel->TabIndex = 28;
			this->teamOneLabel->Text = L"HOME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Bonus";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(885, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Bonus";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 343);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Fouls";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(890, 343);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Fouls";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 440);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Timeouts";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(872, 440);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Timeouts";
			// 
			// gameClock
			// 
			this->gameClock->Interval = 1000;
			this->gameClock->Tick += gcnew System::EventHandler(this, &ScoringScreenPremium::gameClock_Tick);
			// 
			// shotClock
			// 
			this->shotClock->Interval = 1000;
			this->shotClock->Tick += gcnew System::EventHandler(this, &ScoringScreenPremium::shotClock_Tick);
			// 
			// logoutButton
			// 
			this->logoutButton->Location = System::Drawing::Point(858, 9);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(75, 23);
			this->logoutButton->TabIndex = 35;
			this->logoutButton->Text = L"Logout";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &ScoringScreenPremium::logoutButton_Click);
			// 
			// shotClockBox
			// 
			this->shotClockBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shotClockBox->Location = System::Drawing::Point(428, 328);
			this->shotClockBox->Name = L"shotClockBox";
			this->shotClockBox->Size = System::Drawing::Size(86, 78);
			this->shotClockBox->TabIndex = 35;
			this->shotClockBox->Text = L"24";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// shotClockReset
			// 
			this->shotClockReset->Location = System::Drawing::Point(428, 412);
			this->shotClockReset->Name = L"shotClockReset";
			this->shotClockReset->Size = System::Drawing::Size(86, 23);
			this->shotClockReset->TabIndex = 36;
			this->shotClockReset->Text = L"Reset";
			this->shotClockReset->UseVisualStyleBackColor = true;
			this->shotClockReset->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::shotClockReset_MouseDown);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(442, 312);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Shot Clock";
			// 
			// posChange
			// 
			this->posChange->Location = System::Drawing::Point(428, 244);
			this->posChange->Name = L"posChange";
			this->posChange->Size = System::Drawing::Size(86, 55);
			this->posChange->TabIndex = 39;
			this->posChange->Text = L"Change Possession";
			this->posChange->UseVisualStyleBackColor = true;
			this->posChange->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::posChange_MouseDown);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(115, 254);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Possession";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(755, 247);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 13);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Possession";
			// 
			// posHome
			// 
			this->posHome->BackColor = System::Drawing::Color::Red;
			this->posHome->Location = System::Drawing::Point(118, 270);
			this->posHome->Name = L"posHome";
			this->posHome->Size = System::Drawing::Size(100, 39);
			this->posHome->TabIndex = 42;
			this->posHome->Text = L"";
			// 
			// posAway
			// 
			this->posAway->BackColor = System::Drawing::Color::Red;
			this->posAway->Location = System::Drawing::Point(715, 263);
			this->posAway->Name = L"posAway";
			this->posAway->Size = System::Drawing::Size(100, 36);
			this->posAway->TabIndex = 43;
			this->posAway->Text = L"";
			// 
			// periodNumBox
			// 
			this->periodNumBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->periodNumBox->Location = System::Drawing::Point(445, 442);
			this->periodNumBox->Name = L"periodNumBox";
			this->periodNumBox->Size = System::Drawing::Size(48, 78);
			this->periodNumBox->TabIndex = 44;
			this->periodNumBox->Text = L"1";
			// 
			// fieldGoalHome
			// 
			this->fieldGoalHome->Location = System::Drawing::Point(228, 153);
			this->fieldGoalHome->Name = L"fieldGoalHome";
			this->fieldGoalHome->Size = System::Drawing::Size(75, 23);
			this->fieldGoalHome->TabIndex = 45;
			this->fieldGoalHome->Text = L"Score";
			this->fieldGoalHome->UseVisualStyleBackColor = true;
			this->fieldGoalHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::fieldGoalHome_MouseDown);
			// 
			// threePointerHome
			// 
			this->threePointerHome->Location = System::Drawing::Point(228, 182);
			this->threePointerHome->Name = L"threePointerHome";
			this->threePointerHome->Size = System::Drawing::Size(75, 23);
			this->threePointerHome->TabIndex = 46;
			this->threePointerHome->Text = L"Three";
			this->threePointerHome->UseVisualStyleBackColor = true;
			this->threePointerHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::threePointerHome_MouseDown);
			// 
			// fieldGoalAway
			// 
			this->fieldGoalAway->Location = System::Drawing::Point(634, 153);
			this->fieldGoalAway->Name = L"fieldGoalAway";
			this->fieldGoalAway->Size = System::Drawing::Size(75, 23);
			this->fieldGoalAway->TabIndex = 47;
			this->fieldGoalAway->Text = L"Score";
			this->fieldGoalAway->UseVisualStyleBackColor = true;
			this->fieldGoalAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::fieldGoalAway_MouseDown);
			// 
			// threePointerAway
			// 
			this->threePointerAway->Location = System::Drawing::Point(634, 182);
			this->threePointerAway->Name = L"threePointerAway";
			this->threePointerAway->Size = System::Drawing::Size(75, 23);
			this->threePointerAway->TabIndex = 48;
			this->threePointerAway->Text = L"Three";
			this->threePointerAway->UseVisualStyleBackColor = true;
			this->threePointerAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::threePointerAway_MouseDown);
			// 
			// gameTypeSelection
			// 
			this->gameTypeSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gameTypeSelection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gameTypeSelection->FormattingEnabled = true;
			this->gameTypeSelection->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NBA Game", L"College Game" });
			this->gameTypeSelection->Location = System::Drawing::Point(801, 38);
			this->gameTypeSelection->Name = L"gameTypeSelection";
			this->gameTypeSelection->Size = System::Drawing::Size(121, 21);
			this->gameTypeSelection->TabIndex = 49;
			// 
			// addAssistHome
			// 
			this->addAssistHome->Location = System::Drawing::Point(235, 359);
			this->addAssistHome->Name = L"addAssistHome";
			this->addAssistHome->Size = System::Drawing::Size(75, 23);
			this->addAssistHome->TabIndex = 50;
			this->addAssistHome->Text = L"Add";
			this->addAssistHome->UseVisualStyleBackColor = true;
			this->addAssistHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addAssistHome_MouseDown);
			// 
			// removeAssistHome
			// 
			this->removeAssistHome->Location = System::Drawing::Point(235, 390);
			this->removeAssistHome->Name = L"removeAssistHome";
			this->removeAssistHome->Size = System::Drawing::Size(75, 23);
			this->removeAssistHome->TabIndex = 51;
			this->removeAssistHome->Text = L"Remove";
			this->removeAssistHome->UseVisualStyleBackColor = true;
			this->removeAssistHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeAssistHome_MouseDown);
			// 
			// addReboundHome
			// 
			this->addReboundHome->Location = System::Drawing::Point(235, 454);
			this->addReboundHome->Name = L"addReboundHome";
			this->addReboundHome->Size = System::Drawing::Size(75, 23);
			this->addReboundHome->TabIndex = 52;
			this->addReboundHome->Text = L"Add";
			this->addReboundHome->UseVisualStyleBackColor = true;
			this->addReboundHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addReboundHome_MouseDown);
			// 
			// removeReboundHome
			// 
			this->removeReboundHome->Location = System::Drawing::Point(235, 483);
			this->removeReboundHome->Name = L"removeReboundHome";
			this->removeReboundHome->Size = System::Drawing::Size(75, 23);
			this->removeReboundHome->TabIndex = 53;
			this->removeReboundHome->Text = L"Remove";
			this->removeReboundHome->UseVisualStyleBackColor = true;
			this->removeReboundHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeReboundHome_MouseDown);
			// 
			// addBlockHome
			// 
			this->addBlockHome->Location = System::Drawing::Point(72, 542);
			this->addBlockHome->Name = L"addBlockHome";
			this->addBlockHome->Size = System::Drawing::Size(75, 23);
			this->addBlockHome->TabIndex = 54;
			this->addBlockHome->Text = L"Add";
			this->addBlockHome->UseVisualStyleBackColor = true;
			this->addBlockHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addBlockHome_MouseDown);
			// 
			// removeBlockHome
			// 
			this->removeBlockHome->Location = System::Drawing::Point(72, 571);
			this->removeBlockHome->Name = L"removeBlockHome";
			this->removeBlockHome->Size = System::Drawing::Size(75, 23);
			this->removeBlockHome->TabIndex = 55;
			this->removeBlockHome->Text = L"Remove";
			this->removeBlockHome->UseVisualStyleBackColor = true;
			this->removeBlockHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeBlockHome_MouseDown);
			// 
			// addStealHome
			// 
			this->addStealHome->Location = System::Drawing::Point(235, 542);
			this->addStealHome->Name = L"addStealHome";
			this->addStealHome->Size = System::Drawing::Size(75, 23);
			this->addStealHome->TabIndex = 56;
			this->addStealHome->Text = L"Add";
			this->addStealHome->UseVisualStyleBackColor = true;
			this->addStealHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addStealHome_MouseDown);
			// 
			// removeStealHome
			// 
			this->removeStealHome->Location = System::Drawing::Point(235, 571);
			this->removeStealHome->Name = L"removeStealHome";
			this->removeStealHome->Size = System::Drawing::Size(75, 23);
			this->removeStealHome->TabIndex = 57;
			this->removeStealHome->Text = L"Remove";
			this->removeStealHome->UseVisualStyleBackColor = true;
			this->removeStealHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeStealHome_MouseDown);
			// 
			// reboundsHome
			// 
			this->reboundsHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reboundsHome->Location = System::Drawing::Point(175, 454);
			this->reboundsHome->Name = L"reboundsHome";
			this->reboundsHome->Size = System::Drawing::Size(54, 54);
			this->reboundsHome->TabIndex = 58;
			this->reboundsHome->Text = L"0";
			// 
			// assistsHome
			// 
			this->assistsHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assistsHome->Location = System::Drawing::Point(175, 359);
			this->assistsHome->Name = L"assistsHome";
			this->assistsHome->Size = System::Drawing::Size(54, 54);
			this->assistsHome->TabIndex = 59;
			this->assistsHome->Text = L"0";
			// 
			// blocksHome
			// 
			this->blocksHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blocksHome->Location = System::Drawing::Point(12, 542);
			this->blocksHome->Name = L"blocksHome";
			this->blocksHome->Size = System::Drawing::Size(54, 54);
			this->blocksHome->TabIndex = 60;
			this->blocksHome->Text = L"0";
			// 
			// stealsHome
			// 
			this->stealsHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stealsHome->Location = System::Drawing::Point(175, 540);
			this->stealsHome->Name = L"stealsHome";
			this->stealsHome->Size = System::Drawing::Size(54, 54);
			this->stealsHome->TabIndex = 61;
			this->stealsHome->Text = L"0";
			// 
			// assistsAway
			// 
			this->assistsAway->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assistsAway->Location = System::Drawing::Point(700, 359);
			this->assistsAway->Name = L"assistsAway";
			this->assistsAway->Size = System::Drawing::Size(54, 54);
			this->assistsAway->TabIndex = 62;
			this->assistsAway->Text = L"0";
			// 
			// reboundsAway
			// 
			this->reboundsAway->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reboundsAway->Location = System::Drawing::Point(700, 454);
			this->reboundsAway->Name = L"reboundsAway";
			this->reboundsAway->Size = System::Drawing::Size(54, 54);
			this->reboundsAway->TabIndex = 63;
			this->reboundsAway->Text = L"0";
			// 
			// stealsAway
			// 
			this->stealsAway->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stealsAway->Location = System::Drawing::Point(700, 540);
			this->stealsAway->Name = L"stealsAway";
			this->stealsAway->Size = System::Drawing::Size(54, 54);
			this->stealsAway->TabIndex = 64;
			this->stealsAway->Text = L"0";
			// 
			// blocksAway
			// 
			this->blocksAway->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blocksAway->Location = System::Drawing::Point(868, 540);
			this->blocksAway->Name = L"blocksAway";
			this->blocksAway->Size = System::Drawing::Size(54, 54);
			this->blocksAway->TabIndex = 65;
			this->blocksAway->Text = L"0";
			// 
			// addAssistAway
			// 
			this->addAssistAway->Location = System::Drawing::Point(619, 359);
			this->addAssistAway->Name = L"addAssistAway";
			this->addAssistAway->Size = System::Drawing::Size(75, 23);
			this->addAssistAway->TabIndex = 66;
			this->addAssistAway->Text = L"Add";
			this->addAssistAway->UseVisualStyleBackColor = true;
			this->addAssistAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addAssistAway_MouseDown);
			// 
			// removeAssistAway
			// 
			this->removeAssistAway->Location = System::Drawing::Point(619, 390);
			this->removeAssistAway->Name = L"removeAssistAway";
			this->removeAssistAway->Size = System::Drawing::Size(75, 23);
			this->removeAssistAway->TabIndex = 67;
			this->removeAssistAway->Text = L"Remove";
			this->removeAssistAway->UseVisualStyleBackColor = true;
			this->removeAssistAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeAssistAway_MouseDown);
			// 
			// addReboundAway
			// 
			this->addReboundAway->Location = System::Drawing::Point(619, 456);
			this->addReboundAway->Name = L"addReboundAway";
			this->addReboundAway->Size = System::Drawing::Size(75, 23);
			this->addReboundAway->TabIndex = 68;
			this->addReboundAway->Text = L"Add";
			this->addReboundAway->UseVisualStyleBackColor = true;
			this->addReboundAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addReboundAway_MouseDown);
			// 
			// removeReboundAway
			// 
			this->removeReboundAway->Location = System::Drawing::Point(619, 483);
			this->removeReboundAway->Name = L"removeReboundAway";
			this->removeReboundAway->Size = System::Drawing::Size(75, 23);
			this->removeReboundAway->TabIndex = 69;
			this->removeReboundAway->Text = L"Remove";
			this->removeReboundAway->UseVisualStyleBackColor = true;
			this->removeReboundAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeReboundAway_MouseDown);
			// 
			// addStealAway
			// 
			this->addStealAway->Location = System::Drawing::Point(619, 540);
			this->addStealAway->Name = L"addStealAway";
			this->addStealAway->Size = System::Drawing::Size(75, 23);
			this->addStealAway->TabIndex = 70;
			this->addStealAway->Text = L"Add";
			this->addStealAway->UseVisualStyleBackColor = true;
			this->addStealAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addStealAway_MouseDown);
			// 
			// removeStealAway
			// 
			this->removeStealAway->Location = System::Drawing::Point(619, 569);
			this->removeStealAway->Name = L"removeStealAway";
			this->removeStealAway->Size = System::Drawing::Size(75, 23);
			this->removeStealAway->TabIndex = 71;
			this->removeStealAway->Text = L"Remove";
			this->removeStealAway->UseVisualStyleBackColor = true;
			this->removeStealAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeStealAway_MouseDown);
			// 
			// addBlockAway
			// 
			this->addBlockAway->Location = System::Drawing::Point(787, 540);
			this->addBlockAway->Name = L"addBlockAway";
			this->addBlockAway->Size = System::Drawing::Size(75, 23);
			this->addBlockAway->TabIndex = 72;
			this->addBlockAway->Text = L"Add";
			this->addBlockAway->UseVisualStyleBackColor = true;
			this->addBlockAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::addBlockAway_MouseDown);
			// 
			// removeBlockAway
			// 
			this->removeBlockAway->Location = System::Drawing::Point(787, 569);
			this->removeBlockAway->Name = L"removeBlockAway";
			this->removeBlockAway->Size = System::Drawing::Size(75, 23);
			this->removeBlockAway->TabIndex = 73;
			this->removeBlockAway->Text = L"Remove";
			this->removeBlockAway->UseVisualStyleBackColor = true;
			this->removeBlockAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenPremium::removeBlockAway_MouseDown);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(172, 343);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 74;
			this->label12->Text = L"Assists";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(715, 343);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 13);
			this->label13->TabIndex = 75;
			this->label13->Text = L"Assists";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(172, 440);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 13);
			this->label14->TabIndex = 76;
			this->label14->Text = L"Rebounds";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(698, 440);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 77;
			this->label15->Text = L"Rebounds";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(172, 526);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 13);
			this->label16->TabIndex = 78;
			this->label16->Text = L"Steals";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(718, 526);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 13);
			this->label17->TabIndex = 79;
			this->label17->Text = L"Steals";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 526);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 13);
			this->label18->TabIndex = 80;
			this->label18->Text = L"Blocks";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(883, 526);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 81;
			this->label19->Text = L"Blocks";
			// 
			// endGame
			// 
			this->endGame->Location = System::Drawing::Point(715, 9);
			this->endGame->Name = L"endGame";
			this->endGame->Size = System::Drawing::Size(75, 23);
			this->endGame->TabIndex = 82;
			this->endGame->Text = L"End Game";
			this->endGame->UseVisualStyleBackColor = true;
			this->endGame->Visible = false;
			this->endGame->Click += gcnew System::EventHandler(this, &ScoringScreenPremium::endGame_Click);
			// 
			// ScoringScreenPremium
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 610);
			this->Controls->Add(this->endGame);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->removeBlockAway);
			this->Controls->Add(this->addBlockAway);
			this->Controls->Add(this->removeStealAway);
			this->Controls->Add(this->addStealAway);
			this->Controls->Add(this->removeReboundAway);
			this->Controls->Add(this->addReboundAway);
			this->Controls->Add(this->removeAssistAway);
			this->Controls->Add(this->addAssistAway);
			this->Controls->Add(this->blocksAway);
			this->Controls->Add(this->stealsAway);
			this->Controls->Add(this->reboundsAway);
			this->Controls->Add(this->assistsAway);
			this->Controls->Add(this->stealsHome);
			this->Controls->Add(this->blocksHome);
			this->Controls->Add(this->assistsHome);
			this->Controls->Add(this->reboundsHome);
			this->Controls->Add(this->removeStealHome);
			this->Controls->Add(this->addStealHome);
			this->Controls->Add(this->removeBlockHome);
			this->Controls->Add(this->addBlockHome);
			this->Controls->Add(this->removeReboundHome);
			this->Controls->Add(this->addReboundHome);
			this->Controls->Add(this->removeAssistHome);
			this->Controls->Add(this->addAssistHome);
			this->Controls->Add(this->gameTypeSelection);
			this->Controls->Add(this->threePointerAway);
			this->Controls->Add(this->fieldGoalAway);
			this->Controls->Add(this->threePointerHome);
			this->Controls->Add(this->fieldGoalHome);
			this->Controls->Add(this->periodNumBox);
			this->Controls->Add(this->posAway);
			this->Controls->Add(this->posHome);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->posChange);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->shotClockReset);
			this->Controls->Add(this->shotClockBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->teamOneLabel);
			this->Controls->Add(this->teamTwoLabel);
			this->Controls->Add(this->timeOutsAway);
			this->Controls->Add(this->timeOutsHome);
			this->Controls->Add(this->removeTimeoutAway);
			this->Controls->Add(this->removeTimeoutHome);
			this->Controls->Add(this->removeFoulAway);
			this->Controls->Add(this->addFoulAway);
			this->Controls->Add(this->removeFoulHome);
			this->Controls->Add(this->addFoulHome);
			this->Controls->Add(this->foulCountAway);
			this->Controls->Add(this->foulCountHome);
			this->Controls->Add(this->backFreeBtn);
			this->Controls->Add(this->newGame);
			this->Controls->Add(this->changeQuarter);
			this->Controls->Add(this->bonusBoxAway);
			this->Controls->Add(this->bonusBoxHome);
			this->Controls->Add(this->awayScoreBox);
			this->Controls->Add(this->removeScoreAway);
			this->Controls->Add(this->addScoreAway);
			this->Controls->Add(this->removeHomeScore);
			this->Controls->Add(this->addHomeScore);
			this->Controls->Add(this->homeScoreBox);
			this->Controls->Add(this->startTimeBtn);
			this->Controls->Add(this->stopTimeBtn);
			this->Controls->Add(this->timeBox);
			this->Controls->Add(this->scoreLabel);
			this->Name = L"ScoringScreenPremium";
			this->Text = L"BAMSS";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Adds score to home team
	private: System::Void addHomeScore_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			homeScoreBox->Text = bballGame->incrementScore(HOME, 1).ToString();
	}

		   //Removes score from the home team
	private: System::Void removeHomeScore_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			homeScoreBox->Text = bballGame->decrementScore(HOME).ToString();
	}

		   //Starts a new period or quarter depending on the ruleset being used.
	private: System::Void changeQuarter_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame->period < bballGame->GetNumOfPeriods())
		{
			if (gameTypeSelection->SelectedIndex == 0)
			{
				foulCountAway->Text = Convert::ToString(bballGame->resetFoul(AWAY));
				foulCountHome->Text = Convert::ToString(bballGame->resetFoul(HOME));
				clockReset();
				if (bballGame->period >= 2)
				{
					timeOutsAway->Text = Convert::ToString(bballGame->resetTimeout(AWAY));
					timeOutsHome->Text = Convert::ToString(bballGame->resetTimeout(HOME));

				}
				bballGame->incrementPeriod();
				periodNumBox->Text = Convert::ToString(bballGame->period);
			}
			else if (gameTypeSelection->SelectedIndex == 1)
			{
				foulCountAway->Text = Convert::ToString(bballGame->resetFoul(AWAY));
				foulCountHome->Text = Convert::ToString(bballGame->resetFoul(HOME));
				clockReset();
				timeOutsAway->Text = Convert::ToString(bballGame->resetTimeout(AWAY));
				timeOutsHome->Text = Convert::ToString(bballGame->resetTimeout(HOME));
				bballGame->incrementPeriod();
				periodNumBox->Text = Convert::ToString(bballGame->period);
			}
		}
	}

		   //Starts the clock
	private: System::Void startTimeBtn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			clockActive = true;
			gameClock->Start();
			shotClock->Start();
		}
	}

		   //Stops the clock
	private: System::Void stopTimeBtn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			clockActive = false;
			gameClock->Stop();
			shotClock->Stop();
		}
	}

		   //Adds points to the away teams score
	private: System::Void addScoreAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			awayScoreBox->Text = bballGame->incrementScore(AWAY, 1).ToString();
	}

		   //Removes points from the away teams score.
	private: System::Void removeScoreAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			awayScoreBox->Text = bballGame->decrementScore(AWAY).ToString();
	}

		   //Removes a foul from the home teams total
	private: System::Void removeFoulHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			foulCountHome->Text = bballGame->decrementFoul(HOME).ToString();
			int check = int::Parse(foulCountHome->Text);
			if (check < 5)
				bonusBoxHome->BackColor = BackColor.White;
		}
	}

		   //Adds a foul to the home teams total
	private: System::Void addFoulHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			foulCountHome->Text = bballGame->incrementFoul(HOME).ToString();
			int check = int::Parse(foulCountHome->Text);
			if (check >= 5)
				bonusBoxHome->BackColor = BackColor.Blue;
		}
	}

		   //Adds a foul to the away teams total
	private: System::Void addFoulAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			foulCountAway->Text = bballGame->incrementFoul(AWAY).ToString();
			int check = int::Parse(foulCountAway->Text);
			if (check >= 5)
				bonusBoxAway->BackColor = BackColor.Blue;
		}
	}

		   //Removes a foul from the away teams total
	private: System::Void removeFoulAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			foulCountAway->Text = bballGame->decrementFoul(AWAY).ToString();
			int check = int::Parse(foulCountAway->Text);
			if (check < 5)
				bonusBoxAway->BackColor = BackColor.White;
		}
	}

		   //Removes a timeout from the home team.
	private: System::Void removeTimeoutHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			timeOutsHome->Text = bballGame->decrementTimeout(HOME).ToString();
	}

		   //Removes a timeout from the away team.
	private: System::Void removeTimeoutAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			timeOutsAway->Text = bballGame->decrementTimeout(AWAY).ToString();
	}

		   //Returns user to the main menu
	private: System::Void backFreeBtn_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->Close();
	}

		   //Starts a new game. Need to finish some parts next iteration.
	private: System::Void newGame_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		/*if (bballGame != NULL)
			delete bballGame;*/
		if (gameTypeSelection->SelectedIndex == 0)
		{
			bballGame = new NBAGame();
			scoreLabel->Text = "NBA Game";
		}
		else if (gameTypeSelection->SelectedIndex == 1)
		{
			bballGame = new CollegeGame();
			scoreLabel->Text = "College Game";
		}
		else
		{
			scoreLabel->Text = "Invalid Game";
			return;
		}

		endGame->Visible = true;
		clockReset();
		statReset();
		bballGame->SetPossession(true);

	}

		   //Called when the logout button is clicked.
	private: System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e)
	{

		this->Close();
	}

		   //Game clock driver handles the game clock counting
		   //Might be able to be cleaned up a bit
	private: System::Void gameClock_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		seconds--;

		if (seconds <= 0)
		{
			seconds = 59;
			minutes--;
		}

		if (minutes == 0)
			gameClock->Stop();

		sec = Convert::ToString(seconds);
		min = Convert::ToString(minutes);

		if (minutes < 10 && seconds < 10)
			timeBox->Text = "0" + min + ":" + "0" + sec;
		else if (minutes < 10)
			timeBox->Text = "0" + min + ":" + sec;
		else if (seconds < 10)
			timeBox->Text = min + ":" + "0" + sec;
		else
			timeBox->Text = min + ":" + sec;
	}

		   //Called as the shot clock increments. Stops incrmenting if shot clock is at 0 and it stops the clock when
		   //the shot clock hits zero.
	private: System::Void shotClock_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (!bballGame->GetShotclock() <= 0)
			bballGame->decrementShotclock();

		if (bballGame->GetShotclock() == 0)
		{
			gameClock->Stop();
			shotClock->Stop();
		}

		shotClockStr = Convert::ToString(bballGame->GetShotclock());
		shotClockBox->Text = shotClockStr;
	}

		   //Resests the stats
	private: Void statReset()
	{
		homeScoreBox->Text = "0";
		awayScoreBox->Text = "0";
		foulCountAway->Text = "0";
		foulCountHome->Text = "0";
		timeOutsHome->Text = Convert::ToString(bballGame->GetNumOfTimeouts());
		timeOutsAway->Text = Convert::ToString(bballGame->GetNumOfTimeouts());
		assistsHome->Text = "0";
		assistsAway->Text = "0";
		reboundsAway->Text = "0";
		reboundsHome->Text = "0";
		stealsHome->Text = "0";
		stealsAway->Text = "0";
		blocksHome->Text = "0";
		blocksAway->Text = "0";
	}

		   //Resets all the clocks 
	private: Void clockReset()
	{
		gameClock->Stop();
		shotClock->Stop();
		minutes = bballGame->periodLength;
		seconds = 0;
		periodNumBox->Text = Convert::ToString(bballGame->GetPeriod());
		bballGame->resetShotclock();
		shotClockStr = Convert::ToString(bballGame->GetShotclock());
		sec = Convert::ToString(seconds);
		min = Convert::ToString(minutes);
		shotClockBox->Text = shotClockStr;
		timeBox->Text = min + ":" + "0" + sec;
	}

		   //Called when the shot clock reset button is pressed. Resests the shot clock and starts it again if the game clock
		   // is already active
	private: System::Void shotClockReset_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			if (gameTypeSelection->SelectedIndex == 0)
			{
				NBAShotClock();
			}
			else if (gameTypeSelection->SelectedIndex == 1)
			{
				collegeShotClock();
			}
			else
				return;
		}
	}

		   //Called when the possession change button is pressed. Changes is the possession by setting the possesion box of the team
		   //with possession to green and the other to red. Also automatically resets the shot clock.
	private: System::Void posChange_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
		{
			shotClock->Stop();
			bballGame->resetShotclock();
			shotClockStr = Convert::ToString(bballGame->GetShotclock());
			shotClockBox->Text = shotClockStr;
			if (clockActive)
				shotClock->Start();

			if (!bballGame->GetPosession())
			{
				posAway->BackColor = BackColor.Green;
				posHome->BackColor = BackColor.Red;
				bballGame->SetPossession(true);
			}
			else
			{
				posAway->BackColor = BackColor.Red;
				posHome->BackColor = BackColor.Green;
				bballGame->SetPossession(false);
			}
		}
	}

	// Adds the score equivelent to scoring a field goal for the home team
	private: System::Void fieldGoalHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			homeScoreBox->Text = bballGame->incrementScore(HOME, 2).ToString();
	}

	// Adds score equivalent to scoring a field goal for the away team
	private: System::Void fieldGoalAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			awayScoreBox->Text = bballGame->incrementScore(AWAY, 2).ToString();
	}

	//Adds score equivalent to scoring a three pointer for the home team
	private: System::Void threePointerHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			homeScoreBox->Text = bballGame->incrementScore(HOME, 3).ToString();
	}

	//Adds score equivalent to scoring a three pointer for the away team
	private: System::Void threePointerAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			awayScoreBox->Text = bballGame->incrementScore(AWAY, 3).ToString();
	}


    //Called when the shot clock is reset during an NBA Game
	private: Void NBAShotClock()
	{
		int check = int::Parse(shotClockStr);
		if (gameTypeSelection->SelectedIndex == 0 && 14 <= check)
		{
			return;
		}
		else
		{
			shotClock->Stop();
			bballGame->offRebShotClkResetNBA();
		}
		shotClockStr = Convert::ToString(bballGame->GetShotclock());
		shotClockBox->Text = shotClockStr;
		if (clockActive)
			shotClock->Start();
	}

		   //Called when the shot clock is reset during a college game
	private: Void collegeShotClock()
	{
		int check = int::Parse(shotClockStr);
		if (gameTypeSelection->SelectedIndex == 1 && 20 <= check)
		{
			return;
		}
		else
		{
			shotClock->Stop();
			bballGame->offRebShotClkResetCollege();
		}
		shotClockStr = Convert::ToString(bballGame->GetShotclock());
		shotClockBox->Text = shotClockStr;
		if (clockActive)
			shotClock->Start();
	}
	
	//Adds an assist to the home team
	private: System::Void addAssistHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			assistsHome->Text = bballGame->incrementAssists(HOME, ADD).ToString();
	}
	
	//Removes an assist from the home team
	private: System::Void removeAssistHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			assistsHome->Text = bballGame->incrementAssists(HOME, REMOVE).ToString();
	}
	
	//Add a rebound to the home team
	private: System::Void addReboundHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			reboundsHome->Text = bballGame->incrementRebounds(HOME, ADD).ToString();
	}

	//Removes a rebound from the home team
	private: System::Void removeReboundHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			reboundsHome->Text = bballGame->incrementRebounds(HOME, REMOVE).ToString();
	}

	//Adds a  steal to the home team
	private: System::Void addStealHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			stealsHome->Text = bballGame->incrementSteals(HOME, ADD).ToString();
	}

	//Removes a steal from the home team
	private: System::Void removeStealHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			stealsHome->Text = bballGame->incrementSteals(HOME, REMOVE).ToString();
	}

	//Adds a block to the home team
	private: System::Void addBlockHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			blocksHome->Text = bballGame->incrementBlocks(HOME, ADD).ToString();
	}

	//Removes a block from the home team
	private: System::Void removeBlockHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			blocksHome->Text = bballGame->incrementBlocks(HOME, REMOVE).ToString();
	}


	private: System::Void addAssistAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			assistsAway->Text = bballGame->incrementAssists(AWAY, ADD).ToString();
	}

	private: System::Void removeAssistAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			assistsAway->Text = bballGame->incrementAssists(AWAY, REMOVE).ToString();
	}

	private: System::Void addReboundAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			reboundsAway->Text = bballGame->incrementRebounds(AWAY, ADD).ToString();
	}

	private: System::Void removeReboundAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			reboundsAway->Text = bballGame->incrementRebounds(AWAY, REMOVE).ToString();

	}

	private: System::Void addStealAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			stealsAway->Text = bballGame->incrementSteals(AWAY, ADD).ToString();
	}

	private: System::Void removeStealAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			stealsAway->Text = bballGame->incrementSteals(AWAY, REMOVE).ToString();
	}

	private: System::Void addBlockAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			blocksAway->Text = bballGame->incrementBlocks(AWAY, ADD).ToString();
	}

	private: System::Void removeBlockAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (bballGame != NULL)
			blocksAway->Text = bballGame->incrementBlocks(AWAY, REMOVE).ToString();
	}


	public: System::Void setTeamOneName(System::String^ teamOneNameInput)
	{
			teamOneName = teamOneNameInput;
			teamOneLabel->Text = teamOneName;
	}

	public: System::String^ getTeamOneName()
	{
		return teamOneName;
	}

	public: System::Void setTeamTwoname(System::String^ teamTwoNameInput)
	{
		teamTwoName = teamTwoNameInput;
		teamTwoLabel->Text = teamTwoName;
	}

	public: System::String^ getUsername()
	{
		return teamTwoName;
	}


	// Push to database once a game ends
	private: System::Void endGame_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// in the context of how the designer looks, 
		// home team = team 1
		// away team = team 2



		// Team 1 and 2 names
		msclr::interop::marshal_context context;
		string teamNameOne = context.marshal_as<std::string>(teamOneLabel->Text);
		string teamNameTwo = context.marshal_as<std::string>(teamTwoLabel->Text);

		// Team 1 and 2 scores
		string teamOneScoreStr = context.marshal_as<std::string>(homeScoreBox->Text);
		int teamOneScore = std::stoi(teamOneScoreStr);
		string teamTwoScoreStr = context.marshal_as<std::string>(awayScoreBox->Text);
		int teamTwoScore = std::stoi(teamTwoScoreStr);

		// Team 1 and 2 fouls
		string teamOneFoulStr = context.marshal_as<std::string>(foulCountHome->Text);
		int teamOneFoul = std::stoi(teamOneFoulStr);
		string teamTwoFoulStr = context.marshal_as<std::string>(foulCountAway->Text);
		int teamTwoFoul = std::stoi(teamTwoFoulStr);

		// Team 1 and 2 assists
		string teamOneAssistsStr = context.marshal_as<std::string>(assistsHome->Text);
		int teamOneAssists = std::stoi(teamOneAssistsStr);
		string teamTwoAssistsStr = context.marshal_as<std::string>(assistsAway->Text);
		int teamTwoAssists = std::stoi(teamTwoAssistsStr);

		// Team 1 and 2 rebounds
		string teamOneReboundsStr = context.marshal_as<std::string>(reboundsHome->Text);
		int teamOneRebounds = std::stoi(teamOneReboundsStr);
		string teamTwoReboundsStr = context.marshal_as<std::string>(reboundsAway->Text);
		int teamTwoRebounds = std::stoi(teamTwoReboundsStr);

		// Team 1 and 2 blocks
		string teamOneBlocksStr = context.marshal_as<std::string>(blocksHome->Text);
		int teamOneBlocks = std::stoi(teamOneBlocksStr);
		string teamTwoBlocksStr = context.marshal_as<std::string>(blocksAway->Text);
		int teamTwoBlocks = std::stoi(teamTwoBlocksStr);

		// Team 1 and 2 steals
		string teamOneStealsStr = context.marshal_as<std::string>(stealsHome->Text);
		int teamOneSteals = std::stoi(teamOneStealsStr);
		string teamTwoStealsStr = context.marshal_as<std::string>(stealsAway->Text);
		int teamTwoSteals = std::stoi(teamTwoStealsStr);

		// Team 1 and 2 totalGames... use some DB function
		int teamOneTotalGames;
		int teamTwoTotalGames;


		//int userIDRef, string teamName, int totalScore, int totalFouls, int totalAssists, int totalRebounds, int totalBlocks, int totalSteals, int totalGames

		/*
		//---------------------------------------------------------
		// for output testing purposes
		cout << "Team 1 names: " << teamNameOne << endl;
		cout << "Team 2 names: " << teamNameTwo << endl;
		cout << endl;
		cout << "Team 1 score: " << teamOneScore << endl;
		cout << "Team 2 score: " << teamTwoScore << endl;
		cout << endl;
		cout << "Team 1 fouls: " << teamOneFoul << endl;
		cout << "Team 2 fouls: " << teamTwoFoul << endl;
		cout << endl;
		cout << "Team 1 assists: " << teamOneAssists << endl;
		cout << "Team 2 assists: " << teamTwoAssists << endl;
		cout << endl;
		cout << "Team 1 rebounds: " << teamOneRebounds << endl;
		cout << "Team 2 rebounds: " << teamTwoRebounds << endl;
		cout << endl;
		cout << "Team 1 blocks: " << teamOneBlocks << endl;
		cout << "Team 2 blocks: " << teamTwoBlocks << endl;
		cout << endl;
		cout << "Team 1 steals: " << teamOneSteals << endl;
		cout << "Team 2 steals: " << teamTwoSteals << endl;
		cout << endl;
		*/
		
		DBManager dbm;
		string userID = dbm.retrieverUserID();
		int userIDRef = stoi(userID);
		cout << "The user ID of the logged in user is: " << userID << endl;
		
		// now check if team name already exists in database
		// first we handle everything about team 1
		bool doesTeamOneAlreadyExist = dbm.checkIfTeamAlreadyExists(teamNameOne);

			if(doesTeamOneAlreadyExist)
			{
				
				vector<string> teamStatsT1 = dbm.retrieveExistingTeamStats(teamNameOne);
				// for reference purposes
				// this is what each column in the teams table each index corresponds to
				// 0 teamID 
				// 1 userIDReference
				// 2 teamName
				// 3 totalScore
				// 4 totalFouls
				// 5 totalAssists
				// 6 totalRebounds
				// 7 totalBlocks
				// 8 totalSteals
				// 9 totalGames
				string teamName = teamStatsT1.at(2);
				string totalScoreStr = teamStatsT1.at(3);
				string totalFoulsStr = teamStatsT1.at(4);
				string totalAssistsStr = teamStatsT1.at(5);
				string totalReboundsStr = teamStatsT1.at(6);
				string totalBlocksStr = teamStatsT1.at(7);
				string totalStealsStr = teamStatsT1.at(8);
				string totalGamesStr = teamStatsT1.at(9);

				int totalScore = teamOneScore + stoi(totalScoreStr);
				int totalFouls = teamOneFoul + stoi(totalFoulsStr);
				int totalAssists = teamOneAssists + stoi(totalAssistsStr);
				int totalRebounds = teamOneRebounds + stoi(totalReboundsStr);
				int totalBlocks = teamOneBlocks + stoi(totalBlocksStr);
				int totalSteals = teamOneSteals + stoi(totalStealsStr);
				int totalGames = 1 + stoi(totalGamesStr);
				dbm.updateTeam(teamNameOne, totalScore, totalFouls, totalAssists, totalRebounds, totalBlocks, totalSteals, totalGames);
					
				
			}
			else
			{
				// Since the team does not exist yet, we do not need to worry about adding up scores and fouls, etc
				// since there are no previous stats to combine with the current stats for this game
				cout << "Team does not exist already!" << endl;
					bool teamCreated = dbm.createTeam(userIDRef, teamNameOne, teamOneScore, teamOneFoul, teamOneAssists, teamOneRebounds, teamOneBlocks, teamOneSteals, 1);
			}


			// now we must handle the stats for team 2
			bool doesTeamTwoAlreadyExist = dbm.checkIfTeamAlreadyExists(teamNameTwo);

			if (doesTeamTwoAlreadyExist)
			{

				vector<string> teamStats = dbm.retrieveExistingTeamStats(teamNameTwo);
				// for reference purposes
				// this is what each column in the teams table each index corresponds to
				// 0 teamID 
				// 1 userIDReference
				// 2 teamName
				// 3 totalScore
				// 4 totalFouls
				// 5 totalAssists
				// 6 totalRebounds
				// 7 totalBlocks
				// 8 totalSteals
				// 9 totalGames
				string teamName = teamStats.at(2);
				string totalScoreStr = teamStats.at(3);
				string totalFoulsStr = teamStats.at(4);
				string totalAssistsStr = teamStats.at(5);
				string totalReboundsStr = teamStats.at(6);
				string totalBlocksStr = teamStats.at(7);
				string totalStealsStr = teamStats.at(8);
				string totalGamesStr = teamStats.at(9);

				int totalScore = teamTwoScore + stoi(totalScoreStr);
				int totalFouls = teamTwoFoul + stoi(totalFoulsStr);
				int totalAssists = teamTwoAssists + stoi(totalAssistsStr);
				int totalRebounds = teamTwoRebounds + stoi(totalReboundsStr);
				int totalBlocks = teamTwoBlocks + stoi(totalBlocksStr);
				int totalSteals = teamTwoSteals + stoi(totalStealsStr);
				int totalGames = 1 + stoi(totalGamesStr);
				dbm.updateTeam(teamNameTwo, totalScore, totalFouls, totalAssists, totalRebounds, totalBlocks, totalSteals, totalGames);
				

			}
			else
			{
				// Since the team does not exist yet, we do not need to worry about adding up scores and fouls, etc
				// since there are no previous stats to combine with the current stats for this game
				cout << "Team does not exist already!" << endl;
				bool teamCreated = dbm.createTeam(userIDRef, teamNameTwo, teamTwoScore, teamTwoFoul, teamTwoAssists, teamTwoRebounds, teamTwoBlocks, teamTwoSteals, 1);
			}

		clockReset();
		statReset();

	}


private: System::Void newGame_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}