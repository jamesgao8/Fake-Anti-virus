#pragma once
#include "Assembling_solution.h"
#include <Windows.h>
namespace AntiScammerToolset1 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Fake_virus_scanner
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1() //Destructor Code
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Status_Label;
	protected:
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button7;
	private: bool Dragging_for_MF_Variable;
	private: Point Offset_forMF_Variable;
	private: System::Windows::Forms::Button^  button1;

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
			this->Status_Label = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Status_Label
			// 
			this->Status_Label->AutoSize = true;
			this->Status_Label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Status_Label->Location = System::Drawing::Point(22, 9);
			this->Status_Label->Name = L"Status_Label";
			this->Status_Label->Size = System::Drawing::Size(0, 37);
			this->Status_Label->TabIndex = 0;
			this->Status_Label->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::Orange;
			this->progressBar1->Location = System::Drawing::Point(45, 243);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(507, 23);
			this->progressBar1->TabIndex = 1;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm1::progressBar1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Orange;
			this->button7->Location = System::Drawing::Point(564, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 25);
			this->button7->TabIndex = 15;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(45, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 39);
			this->button1->TabIndex = 16;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(614, 342);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->Status_Label);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Orange;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	private: System::Void MyForm1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		this->Dragging_for_MF_Variable = true;
		this->Offset_forMF_Variable = Point(e->X, e->Y);
	}
private: System::Void MyForm1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (this->Dragging_for_MF_Variable)
	{
		Point Current_Screen_Position_MF_Variable = PointToScreen(e->Location);
		Location = Point(Current_Screen_Position_MF_Variable.X - this->Offset_forMF_Variable.X, 
			Current_Screen_Position_MF_Variable.Y - this->Offset_forMF_Variable.Y);             
	}
}
private: System::Void MyForm1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->Dragging_for_MF_Variable = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	static bool resets = true;
	if (resets)
	{
		this->Status_Label->Text = L"";
		this->Status_Label->Text = L"Scan Started"; //One of my problems why doesn't the status_label show the text "Scan Started" during the run?
		Sleep(200);
		this->progressBar1->Value = 10; 
		Sleep(500);
		this->progressBar1->Value = 20;
		Sleep(1000);
		this->progressBar1->Value = 30;
		Sleep(2000);
		this->progressBar1->Value = 40;
		Sleep(1500);
		this->progressBar1->Value = 50;
		Sleep(2500);
		this->progressBar1->Value = 60;
		Sleep(100);
		this->progressBar1->Value = 70;
		Sleep(2000);
		this->progressBar1->Value = 80;
		Sleep(200);
		this->progressBar1->Value = 90;
		Sleep(5000);
		this->progressBar1->Value = 100;
		this->Status_Label->Text = L"No Malicious Software Found";
		this->button1->Text = L"Finish Scan";
		resets = false;
	}
	else
	{
		this->Status_Label->Text = L"Please Start Scan";
		this->button1->Text = L"Start Scan";
		this->progressBar1->Value = 0;
		resets = true;
	}
}
};
}
