#pragma once
//----------------------------------- 
// Name:    Lucas DeMars
// Project: BAMSS
// Purpose: The free version of our scoreboard for our system
//----------------------------------- 
#include "Game.h"
#include "NBAGame.h"
#include "CollegeGame.h"


namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScoringScreenFree
	/// </summary>
	public ref class ScoringScreenFree : public System::Windows::Forms::Form
	{

		int seconds;
		int minutes;
		String^ sec;
		String^ min;
	private: System::Windows::Forms::RichTextBox^ periodNumBox;
	private: System::Windows::Forms::Button^ fieldGoalHome;
	private: System::Windows::Forms::Button^ threePointerHome;
	private: System::Windows::Forms::Button^ fieldGoalAway;
	private: System::Windows::Forms::Button^ threePointerAway;
	private: System::Windows::Forms::ComboBox^ gameTypeSelection;




		   String^ shotClockStr;


	public:
		ScoringScreenFree(void)
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
		~ScoringScreenFree()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool clockActive;
	private: const int HOME = 1;
	private: const int AWAY = 2;
	private: Game* bballGame;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->stopTimeBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::stopTimeBtn_MouseDown);
			// 
			// startTimeBtn
			// 
			this->startTimeBtn->Location = System::Drawing::Point(349, 247);
			this->startTimeBtn->Name = L"startTimeBtn";
			this->startTimeBtn->Size = System::Drawing::Size(75, 23);
			this->startTimeBtn->TabIndex = 3;
			this->startTimeBtn->Text = L"Start Time";
			this->startTimeBtn->UseVisualStyleBackColor = true;
			this->startTimeBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::startTimeBtn_MouseDown);
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
			this->addHomeScore->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::addHomeScore_MouseDown);
			// 
			// removeHomeScore
			// 
			this->removeHomeScore->Location = System::Drawing::Point(228, 211);
			this->removeHomeScore->Name = L"removeHomeScore";
			this->removeHomeScore->Size = System::Drawing::Size(75, 23);
			this->removeHomeScore->TabIndex = 6;
			this->removeHomeScore->Text = L"Undo";
			this->removeHomeScore->UseVisualStyleBackColor = true;
			this->removeHomeScore->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::removeHomeScore_MouseDown);
			// 
			// addScoreAway
			// 
			this->addScoreAway->Location = System::Drawing::Point(634, 124);
			this->addScoreAway->Name = L"addScoreAway";
			this->addScoreAway->Size = System::Drawing::Size(75, 23);
			this->addScoreAway->TabIndex = 7;
			this->addScoreAway->Text = L"Free Throw";
			this->addScoreAway->UseVisualStyleBackColor = true;
			this->addScoreAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::addScoreAway_MouseDown);
			// 
			// removeScoreAway
			// 
			this->removeScoreAway->Location = System::Drawing::Point(634, 211);
			this->removeScoreAway->Name = L"removeScoreAway";
			this->removeScoreAway->Size = System::Drawing::Size(75, 23);
			this->removeScoreAway->TabIndex = 8;
			this->removeScoreAway->Text = L"Undo";
			this->removeScoreAway->UseVisualStyleBackColor = true;
			this->removeScoreAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::removeScoreAway_MouseDown);
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
			this->changeQuarter->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::changeQuarter_MouseDown);
			// 
			// newGame
			// 
			this->newGame->Location = System::Drawing::Point(819, 9);
			this->newGame->Name = L"newGame";
			this->newGame->Size = System::Drawing::Size(103, 23);
			this->newGame->TabIndex = 15;
			this->newGame->Text = L"Start New Game";
			this->newGame->UseVisualStyleBackColor = true;
			this->newGame->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::newGame_MouseDown);
			// 
			// backFreeBtn
			// 
			this->backFreeBtn->Location = System::Drawing::Point(12, 9);
			this->backFreeBtn->Name = L"backFreeBtn";
			this->backFreeBtn->Size = System::Drawing::Size(75, 23);
			this->backFreeBtn->TabIndex = 16;
			this->backFreeBtn->Text = L"Back";
			this->backFreeBtn->UseVisualStyleBackColor = true;
			this->backFreeBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::backFreeBtn_MouseDown);
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
			this->addFoulHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::addFoulHome_MouseDown);
			// 
			// removeFoulHome
			// 
			this->removeFoulHome->Location = System::Drawing::Point(72, 388);
			this->removeFoulHome->Name = L"removeFoulHome";
			this->removeFoulHome->Size = System::Drawing::Size(75, 23);
			this->removeFoulHome->TabIndex = 20;
			this->removeFoulHome->Text = L"Remove";
			this->removeFoulHome->UseVisualStyleBackColor = true;
			this->removeFoulHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::removeFoulHome_MouseDown);
			// 
			// addFoulAway
			// 
			this->addFoulAway->Location = System::Drawing::Point(787, 359);
			this->addFoulAway->Name = L"addFoulAway";
			this->addFoulAway->Size = System::Drawing::Size(75, 23);
			this->addFoulAway->TabIndex = 21;
			this->addFoulAway->Text = L"Add";
			this->addFoulAway->UseVisualStyleBackColor = true;
			this->addFoulAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::addFoulAway_MouseDown);
			// 
			// removeFoulAway
			// 
			this->removeFoulAway->Location = System::Drawing::Point(787, 388);
			this->removeFoulAway->Name = L"removeFoulAway";
			this->removeFoulAway->Size = System::Drawing::Size(75, 23);
			this->removeFoulAway->TabIndex = 22;
			this->removeFoulAway->Text = L"Remove";
			this->removeFoulAway->UseVisualStyleBackColor = true;
			this->removeFoulAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::removeFoulAway_MouseDown);
			// 
			// removeTimeoutHome
			// 
			this->removeTimeoutHome->Location = System::Drawing::Point(45, 465);
			this->removeTimeoutHome->Name = L"removeTimeoutHome";
			this->removeTimeoutHome->Size = System::Drawing::Size(82, 23);
			this->removeTimeoutHome->TabIndex = 23;
			this->removeTimeoutHome->Text = L"Take Timeout";
			this->removeTimeoutHome->UseVisualStyleBackColor = true;
			this->removeTimeoutHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::removeTimeoutHome_MouseDown);
			// 
			// removeTimeoutAway
			// 
			this->removeTimeoutAway->Location = System::Drawing::Point(798, 465);
			this->removeTimeoutAway->Name = L"removeTimeoutAway";
			this->removeTimeoutAway->Size = System::Drawing::Size(91, 23);
			this->removeTimeoutAway->TabIndex = 24;
			this->removeTimeoutAway->Text = L"Take Timeout";
			this->removeTimeoutAway->UseVisualStyleBackColor = true;
			this->removeTimeoutAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::removeTimeoutAway_MouseDown);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(804, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 42);
			this->label1->TabIndex = 27;
			this->label1->Text = L"AWAY";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 42);
			this->label2->TabIndex = 28;
			this->label2->Text = L"HOME";
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
			this->gameClock->Tick += gcnew System::EventHandler(this, &ScoringScreenFree::gameClock_Tick);
			// 
			// shotClock
			// 
			this->shotClock->Interval = 1000;
			this->shotClock->Tick += gcnew System::EventHandler(this, &ScoringScreenFree::shotClock_Tick);
			// 
			// logoutButton
			// 
			this->logoutButton->Location = System::Drawing::Point(858, 9);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(75, 23);
			this->logoutButton->TabIndex = 35;
			this->logoutButton->Text = L"Logout";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &ScoringScreenFree::logoutButton_Click);
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
			this->shotClockReset->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::shotClockReset_MouseDown);
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
			this->posChange->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::posChange_MouseDown);
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
			this->fieldGoalHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::fieldGoalHome_MouseDown);
			// 
			// threePointerHome
			// 
			this->threePointerHome->Location = System::Drawing::Point(228, 182);
			this->threePointerHome->Name = L"threePointerHome";
			this->threePointerHome->Size = System::Drawing::Size(75, 23);
			this->threePointerHome->TabIndex = 46;
			this->threePointerHome->Text = L"Three";
			this->threePointerHome->UseVisualStyleBackColor = true;
			this->threePointerHome->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::threePointerHome_MouseDown);
			// 
			// fieldGoalAway
			// 
			this->fieldGoalAway->Location = System::Drawing::Point(634, 153);
			this->fieldGoalAway->Name = L"fieldGoalAway";
			this->fieldGoalAway->Size = System::Drawing::Size(75, 23);
			this->fieldGoalAway->TabIndex = 47;
			this->fieldGoalAway->Text = L"Score";
			this->fieldGoalAway->UseVisualStyleBackColor = true;
			this->fieldGoalAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::fieldGoalAway_MouseDown);
			// 
			// threePointerAway
			// 
			this->threePointerAway->Location = System::Drawing::Point(634, 182);
			this->threePointerAway->Name = L"threePointerAway";
			this->threePointerAway->Size = System::Drawing::Size(75, 23);
			this->threePointerAway->TabIndex = 48;
			this->threePointerAway->Text = L"Three";
			this->threePointerAway->UseVisualStyleBackColor = true;
			this->threePointerAway->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ScoringScreenFree::threePointerAway_MouseDown);
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
			// ScoringScreenFree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 576);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
			this->Name = L"ScoringScreenFree";
			this->Text = L"BAMMS";
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
			homeScoreBox->Text = bballGame->incrementScore(HOME,2).ToString();
	}

	// Adds score equivalent to scoring a field goal for the away team
	private: System::Void fieldGoalAway_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (bballGame != NULL)
			awayScoreBox->Text = bballGame->incrementScore(AWAY,2).ToString();
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

	};
}