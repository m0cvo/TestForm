#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ClickBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Button^ ExitBtn;
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
			this->ClickBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ClickBtn
			// 
			this->ClickBtn->Location = System::Drawing::Point(12, 0);
			this->ClickBtn->Name = L"ClickBtn";
			this->ClickBtn->Size = System::Drawing::Size(75, 23);
			this->ClickBtn->TabIndex = 0;
			this->ClickBtn->Text = L"Click Me";
			this->ClickBtn->UseVisualStyleBackColor = true;
			this->ClickBtn->Click += gcnew System::EventHandler(this, &Form1::ClickBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hello there!";
			this->label1->Visible = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(18, 35);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 2;
			// 
			// ExitBtn
			// 
			this->ExitBtn->Location = System::Drawing::Point(12, 226);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(75, 23);
			this->ExitBtn->TabIndex = 3;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = true;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &Form1::ExitBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ClickBtn);
			this->Name = L"Form1";
			this->Text = L"Test Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ClickBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = true;
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
