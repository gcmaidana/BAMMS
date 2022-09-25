#pragma once
//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This file is the landing page
// that contains the login and register buttons
//----------------------------------- 

#include "LoginForm.h"
#include "RegisterForm.h"

namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LandingPageForm
	/// </summary>
	static ref class LandingPageForm : public System::Windows::Forms::Form
	{


	public:
		LandingPageForm()
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
		~LandingPageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ buttonsHolder;
	protected:

	private: System::Windows::Forms::Button^ registerButton;
	protected:

	private: System::Windows::Forms::Button^ loginButton;

	protected:

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
			this->buttonsHolder = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->buttonsHolder->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonsHolder
			// 
			this->buttonsHolder->ColumnCount = 1;
			this->buttonsHolder->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->buttonsHolder->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->buttonsHolder->Controls->Add(this->registerButton, 0, 1);
			this->buttonsHolder->Controls->Add(this->loginButton, 0, 0);
			this->buttonsHolder->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonsHolder->Location = System::Drawing::Point(0, 0);
			this->buttonsHolder->Name = L"buttonsHolder";
			this->buttonsHolder->RowCount = 2;
			this->buttonsHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->buttonsHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->buttonsHolder->Size = System::Drawing::Size(502, 379);
			this->buttonsHolder->TabIndex = 0;
			this->buttonsHolder->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LandingPageForm::buttonsHolder_Paint);
			// 
			// registerButton
			// 
			this->registerButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->registerButton->AutoSize = true;
			this->registerButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->registerButton->Location = System::Drawing::Point(223, 192);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(56, 23);
			this->registerButton->TabIndex = 1;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &LandingPageForm::registerButton_Click);
			// 
			// loginButton
			// 
			this->loginButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->loginButton->AutoSize = true;
			this->loginButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->loginButton->Location = System::Drawing::Point(229, 163);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(43, 23);
			this->loginButton->TabIndex = 0;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &LandingPageForm::loginButton_Click);
			// 
			// LandingPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 379);
			this->Controls->Add(this->buttonsHolder);
			this->Name = L"LandingPageForm";
			this->Text = L"LandingPageForm";
			this->Load += gcnew System::EventHandler(this, &LandingPageForm::LandingPageForm_Load);
			this->buttonsHolder->ResumeLayout(false);
			this->buttonsHolder->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// if the user clicks the login button, we must open a new window so that they can enter in their username
		// and their password.
		this->Hide();
		LoginForm^ lf = gcnew LoginForm();
		lf->ShowDialog();
		this->Show();

	}


	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// if the user clicks the register button, we must open a new window so that they can enter in their username
		// and their password. 
		this->Hide();
		RegisterForm^ rf = gcnew RegisterForm();
		rf->ShowDialog();
		this->Show();
	}


	private: System::Void buttonsHolder_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void LandingPageForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	};
}
