#pragma once
//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This form will allow a user to register
// for an account, given that the username is not taken
//----------------------------------- 
#include "LoginForm.h"
#include <mysql.h>
#include <sstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "DBManager.h"

using namespace std;

namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	


	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
	
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}
		System::String^ usernameInput;
	private: System::Windows::Forms::Label^ textLabel;
	public:

	public:
		System::String^ passwordInput;




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ RegisterHolder;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ usernamePasswordPanel;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::TextBox^ usernameTextbox;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^ passwordTextbox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Button^ registerButton;

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
			this->RegisterHolder = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->usernamePasswordPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->passwordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->textLabel = (gcnew System::Windows::Forms::Label());
			this->RegisterHolder->SuspendLayout();
			this->usernamePasswordPanel->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// RegisterHolder
			// 
			this->RegisterHolder->ColumnCount = 1;
			this->RegisterHolder->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36.25498F)));
			this->RegisterHolder->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				63.74502F)));
			this->RegisterHolder->Controls->Add(this->usernamePasswordPanel, 0, 0);
			this->RegisterHolder->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->RegisterHolder->Controls->Add(this->backButton, 0, 4);
			this->RegisterHolder->Controls->Add(this->registerButton, 0, 3);
			this->RegisterHolder->Controls->Add(this->textLabel, 0, 2);
			this->RegisterHolder->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RegisterHolder->Location = System::Drawing::Point(0, 0);
			this->RegisterHolder->Name = L"RegisterHolder";
			this->RegisterHolder->RowCount = 5;
			this->RegisterHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.34579F)));
			this->RegisterHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.65421F)));
			this->RegisterHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->RegisterHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->RegisterHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 121)));
			this->RegisterHolder->Size = System::Drawing::Size(502, 379);
			this->RegisterHolder->TabIndex = 1;
			// 
			// usernamePasswordPanel
			// 
			this->usernamePasswordPanel->ColumnCount = 2;
			this->usernamePasswordPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46.97581F)));
			this->usernamePasswordPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				53.02419F)));
			this->usernamePasswordPanel->Controls->Add(this->usernameLabel, 0, 0);
			this->usernamePasswordPanel->Controls->Add(this->usernameTextbox, 1, 0);
			this->usernamePasswordPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->usernamePasswordPanel->Location = System::Drawing::Point(3, 3);
			this->usernamePasswordPanel->Name = L"usernamePasswordPanel";
			this->usernamePasswordPanel->RowCount = 1;
			this->usernamePasswordPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->usernamePasswordPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->usernamePasswordPanel->Size = System::Drawing::Size(496, 97);
			this->usernamePasswordPanel->TabIndex = 6;
			// 
			// usernameLabel
			// 
			this->usernameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(172, 84);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(58, 13);
			this->usernameLabel->TabIndex = 1;
			this->usernameLabel->Text = L"Username:";
			// 
			// usernameTextbox
			// 
			this->usernameTextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->usernameTextbox->Location = System::Drawing::Point(236, 74);
			this->usernameTextbox->Name = L"usernameTextbox";
			this->usernameTextbox->Size = System::Drawing::Size(100, 20);
			this->usernameTextbox->TabIndex = 2;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46.97581F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				53.02419F)));
			this->tableLayoutPanel3->Controls->Add(this->passwordTextbox, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->passwordLabel, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 106);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(496, 65);
			this->tableLayoutPanel3->TabIndex = 7;
			// 
			// passwordTextbox
			// 
			this->passwordTextbox->Location = System::Drawing::Point(236, 3);
			this->passwordTextbox->Name = L"passwordTextbox";
			this->passwordTextbox->PasswordChar = '*';
			this->passwordTextbox->Size = System::Drawing::Size(100, 20);
			this->passwordTextbox->TabIndex = 0;
			// 
			// passwordLabel
			// 
			this->passwordLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Location = System::Drawing::Point(174, 0);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(56, 13);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"Password:";
			// 
			// backButton
			// 
			this->backButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->backButton->Location = System::Drawing::Point(213, 260);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(75, 23);
			this->backButton->TabIndex = 8;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &RegisterForm::backButton_Click);
			// 
			// registerButton
			// 
			this->registerButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->registerButton->Location = System::Drawing::Point(213, 231);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(75, 23);
			this->registerButton->TabIndex = 9;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &RegisterForm::registerButton_Click);
			// 
			// textLabel
			// 
			this->textLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textLabel->Location = System::Drawing::Point(3, 174);
			this->textLabel->Name = L"textLabel";
			this->textLabel->Size = System::Drawing::Size(496, 44);
			this->textLabel->TabIndex = 10;
			this->textLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 379);
			this->Controls->Add(this->RegisterHolder);
			this->Name = L"RegisterForm";
			this->Text = L"Register";
			this->RegisterHolder->ResumeLayout(false);
			this->usernamePasswordPanel->ResumeLayout(false);
			this->usernamePasswordPanel->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void setUsername(System::String^ userInput)
	{
		usernameInput = userInput;
	}

	public: System::String^ getUsername()
	{
		return usernameInput;
	}

	private: System::Void setPassword(System::String^ passwordInputPtr)
	{
		passwordInput = passwordInputPtr;
	}

	public: System::String^ getPassword()
	{
		return passwordInput;
	}


	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// This method is where we verify the user exists or not and insert them into the Databse if they do not exist.
		bool registrationSuccessful = false;
		setUsername(usernameTextbox->Text);
		setPassword(passwordTextbox->Text);


		// The username and passwords we just set are pointers, so we need to convert them to strings
		// in order to use them in the string query.

		// Now we convert the pointer strings to strings
		msclr::interop::marshal_context context;
		string usernameInputDef = context.marshal_as<std::string>(getUsername());
		string passwordInputDef = context.marshal_as<std::string>(getPassword());
		DBManager dbm;

		bool addingUser = dbm.addUser(usernameInputDef, passwordInputDef); // User will be added if username does not already exist
		if (addingUser)
		{
			registrationSuccessful = true;
		}
		else
		{
			textLabel->Text = "That username is already taken! Please try a different one.";
		}

		// print users to console so we can see a list of our users. 
		// This will remain here, but commented out. This will be commented out for security reasons.
		if (registrationSuccessful) 
		{
			//cout << "Printing users:" << endl;
			//dbm.printUsers();
			this->Hide();
			LoginForm^ lf = gcnew LoginForm();
			lf->ShowDialog();
		}
	}


	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// This back button goes back to the form that has the two buttons Login and Register.  
		this->Close();
	}
};
}
