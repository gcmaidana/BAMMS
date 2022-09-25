#pragma once
//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This form contains the functionality
// for a user to login, granted that they exist in the database
//----------------------------------- 


#include <sstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "StartScreenFree.h"
#include "StartScreenPremium.h"
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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	
		
	public:
		LoginForm()
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		System::String^ usernameInput;
		System::String^ passwordInput;

	private: System::Windows::Forms::Label^ textLabel;


	private: System::Windows::Forms::ImageList^ imageList1;
		   

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ usernamePassHolder;
	private: System::Windows::Forms::TableLayoutPanel^ usernamePasswordPanel;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^ passwordTextbox;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::TextBox^ usernameTextbox;
	private: System::Windows::Forms::Button^ loginButton;
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
			this->usernamePassHolder = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->usernamePasswordPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->passwordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->textLabel = (gcnew System::Windows::Forms::Label());
			this->usernamePassHolder->SuspendLayout();
			this->usernamePasswordPanel->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// usernamePassHolder
			// 
			this->usernamePassHolder->ColumnCount = 1;
			this->usernamePassHolder->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36.25498F)));
			this->usernamePassHolder->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				63.74502F)));
			this->usernamePassHolder->Controls->Add(this->usernamePasswordPanel, 0, 0);
			this->usernamePassHolder->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->usernamePassHolder->Controls->Add(this->backButton, 0, 4);
			this->usernamePassHolder->Controls->Add(this->loginButton, 0, 3);
			this->usernamePassHolder->Controls->Add(this->textLabel, 0, 2);
			this->usernamePassHolder->Dock = System::Windows::Forms::DockStyle::Fill;
			this->usernamePassHolder->Location = System::Drawing::Point(0, 0);
			this->usernamePassHolder->Name = L"usernamePassHolder";
			this->usernamePassHolder->RowCount = 5;
			this->usernamePassHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.34579F)));
			this->usernamePassHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.65421F)));
			this->usernamePassHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				34)));
			this->usernamePassHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->usernamePassHolder->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				127)));
			this->usernamePassHolder->Size = System::Drawing::Size(502, 379);
			this->usernamePassHolder->TabIndex = 0;
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
			this->usernamePasswordPanel->Size = System::Drawing::Size(496, 99);
			this->usernamePasswordPanel->TabIndex = 6;
			// 
			// usernameLabel
			// 
			this->usernameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(172, 86);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(58, 13);
			this->usernameLabel->TabIndex = 1;
			this->usernameLabel->Text = L"Username:";
			// 
			// usernameTextbox
			// 
			this->usernameTextbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->usernameTextbox->Location = System::Drawing::Point(236, 76);
			this->usernameTextbox->Name = L"usernameTextbox";
			this->usernameTextbox->Size = System::Drawing::Size(100, 20);
			this->usernameTextbox->TabIndex = 2;
			this->usernameTextbox->TextChanged += gcnew System::EventHandler(this, &LoginForm::usernameTextbox_TextChanged_1);
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
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 108);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(496, 66);
			this->tableLayoutPanel3->TabIndex = 7;
			// 
			// passwordTextbox
			// 
			this->passwordTextbox->Location = System::Drawing::Point(236, 3);
			this->passwordTextbox->Name = L"passwordTextbox";
			this->passwordTextbox->PasswordChar = '*';
			this->passwordTextbox->Size = System::Drawing::Size(100, 20);
			this->passwordTextbox->TabIndex = 0;
			this->passwordTextbox->TextChanged += gcnew System::EventHandler(this, &LoginForm::passwordTextbox_TextChanged);
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
			this->backButton->Location = System::Drawing::Point(213, 254);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(75, 23);
			this->backButton->TabIndex = 8;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &LoginForm::backButton_Click);
			// 
			// loginButton
			// 
			this->loginButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->loginButton->Location = System::Drawing::Point(213, 225);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(75, 23);
			this->loginButton->TabIndex = 9;
			this->loginButton->Text = L"Log In";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
			// 
			// textLabel
			// 
			this->textLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textLabel->Location = System::Drawing::Point(3, 177);
			this->textLabel->Name = L"textLabel";
			this->textLabel->Size = System::Drawing::Size(496, 34);
			this->textLabel->TabIndex = 10;
			this->textLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->textLabel->Click += gcnew System::EventHandler(this, &LoginForm::textLabel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 379);
			this->Controls->Add(this->usernamePassHolder);
			this->Name = L"LoginForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->usernamePassHolder->ResumeLayout(false);
			this->usernamePasswordPanel->ResumeLayout(false);
			this->usernamePasswordPanel->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

	private: System::Void usernameTextbox_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void passwordTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e){}

	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// This back button goes back to the form that has the two buttons Login and Register.  
		this->Close();	
	}


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


	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// This is where we verify the user exists or not and display a message
		boolean userExists = false;
		boolean isUserLoggedIn = false;
	

		setUsername(usernameTextbox->Text);
		setPassword(passwordTextbox->Text);

		// The username and passwords we just set are pointers, so we need to convert them to strings
		// in order to use them in functions that take in strings as parameters.

		// Now we convert the pointer strings to strings
		msclr::interop::marshal_context context;
		string usernameInputDef = context.marshal_as<std::string>(getUsername());
		string passwordInputDef = context.marshal_as<std::string>(getPassword());
		DBManager dbm;

	    userExists = dbm.checkIfUserExists(usernameInputDef); // Checks if the username exists in the Database
		if (userExists)
		{
			isUserLoggedIn = dbm.attemptLogin(usernameInputDef, passwordInputDef); // If username exists in the Database, then we check if the password is correct
			if (isUserLoggedIn)
			{
				bool userIsPremium = dbm.isUserPremiumUser(usernameInputDef, passwordInputDef);
				dbm.setUserAsLoggedIn(usernameInputDef, passwordInputDef);
				if (userIsPremium) // user is premium member
				{
					// The screen switches so fast that we don't see this label. However, this will remain here for context and readability purposes.
					textLabel->Text = "Welcome " + usernameInput + "! You are currently a PAID user!"; 
					this->Hide();
					StartScreenPremium^ ssp = gcnew StartScreenPremium();
					ssp->ShowDialog();
				}
				else // user is free version user
				{
					// The screen switches so fast that we don't see this label. However, this will remain here for context and readability purposes.
					textLabel->Text = "Welcome " + usernameInput + "! You are currently NOT a paid user.";
					this->Hide();
					StartScreenFree^ ssf = gcnew StartScreenFree();
					ssf->setUserCredentials(usernameInputDef, passwordInputDef);
					ssf->ShowDialog();
				}
			}
			else
			{
				textLabel->Text = "That user exists, but you have entered an incorrect password.";
			}
		}
		else
		{
			textLabel->Text = "That user does not exist!";
		}	
	}


private: System::Void usernameLabel_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void passwordLabel_Click(System::Object^ sender, System::EventArgs^ e) {}

	  




private: System::Void textLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
