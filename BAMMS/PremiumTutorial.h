#pragma once
//----------------------------------- 
// Name:    your name
// Project: project description/name (one line, same in all files, not just the assignment number)
// Purpose: General purpose of code and/or declarations in the file
//----------------------------------- 

namespace BAMMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PremiumTutorial
	/// </summary>
	public ref class PremiumTutorial : public System::Windows::Forms::Form
	{
	public:
		PremiumTutorial(void)
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
		~PremiumTutorial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblHello;
	private: System::Windows::Forms::Button^ btnBack;


















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PremiumTutorial::typeid));
			this->lblHello = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblHello
			// 
			this->lblHello->AutoSize = true;
			this->lblHello->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHello->ForeColor = System::Drawing::SystemColors::MenuText;
			this->lblHello->Location = System::Drawing::Point(12, 83);
			this->lblHello->Name = L"lblHello";
			this->lblHello->Size = System::Drawing::Size(777, 120);
			this->lblHello->TabIndex = 0;
			this->lblHello->Text = resources->GetString(L"lblHello.Text");
			
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(118, 37);
			this->btnBack->TabIndex = 1;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &PremiumTutorial::btnBack_Click);
			// 
			// PremiumTutorial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(806, 464);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->lblHello);
			this->Name = L"PremiumTutorial";
			this->Text = L"PremiumTutorial";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}