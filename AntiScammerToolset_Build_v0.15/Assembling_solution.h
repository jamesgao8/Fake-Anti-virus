#pragma once
#include "Fake_Virus_Scanner.h"
#include "Live_Update.h"

namespace AntiScammerToolSet
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
		/// Summary for MyForm
		/// </summary>
	public ref class Assembling_solution : public System::Windows::Forms::Form
	{
	public:
		Assembling_solution(void)
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
		~Assembling_solution() //Destructor
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: bool Dragging_for_AS_variable;
	private: Point Offset_for_AS_variable;
	



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Orange;
			this->label1->Location = System::Drawing::Point(100, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(369, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"This is THE EXTREME ANTI-VIRUS";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Assembling_solution::label1_MouseDown);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Orange;
			this->button1->Location = System::Drawing::Point(25, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 218);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Security Scan";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Assembling_solution::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Orange;
			this->button2->Location = System::Drawing::Point(201, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 218);
			this->button2->TabIndex = 6;
			this->button2->Text = L"LiveUpdates";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Assembling_solution::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Orange;
			this->button3->Location = System::Drawing::Point(377, 106);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 218);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Network Security";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Assembling_solution::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Orange;
			this->label2->Location = System::Drawing::Point(44, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 8;
			this->label2->Click += gcnew System::EventHandler(this, &Assembling_solution::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Orange;
			this->label3->Location = System::Drawing::Point(219, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 9;
			this->label3->Click += gcnew System::EventHandler(this, &Assembling_solution::label3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Orange;
			this->label4->Location = System::Drawing::Point(392, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 10;
			this->label4->Click += gcnew System::EventHandler(this, &Assembling_solution::label4_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Orange;
			this->button4->Location = System::Drawing::Point(50, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 35);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Initiate Scan";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Assembling_solution::Fake_Virus_Scanner_Run_Button);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Orange;
			this->button5->Location = System::Drawing::Point(225, 106);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 35);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Start Update";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Assembling_solution::Start_Update_Button);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Orange;
			this->button6->Location = System::Drawing::Point(414, 106);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 35);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Start Scan";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Assembling_solution::Network_Security_Start_Scan_Button);
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
			this->button7->Location = System::Drawing::Point(535, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 25);
			this->button7->TabIndex = 14;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Assembling_solution::My_form_Close_Button);
			// 
			// Assembling_solution
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(585, 349);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Assembling_solution";
			this->Text = L"Anti Scammer Tool Set";
			this->Load += gcnew System::EventHandler(this, &Assembling_solution::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Assembling_solution::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Assembling_solution::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Assembling_solution::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
	
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		static bool isDown1 = true;
		if (isDown1)
		{

			//Size and position after button1 is clicked
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Size = System::Drawing::Size(175, 170);
			this->button1->Location = System::Drawing::Point(25, 154);
			this->label2->Location = System::Drawing::Point(45, 170);
			this->label2->Text = L"This scans for \nviruses, malware, \ntrojan, rootkits \nand ransomeware";
			isDown1 = false;
		}
		else
		{
			//If button1 was clicked again I want button1 to reset to it's default position that I set
			this->button1->Location = System::Drawing::Point(25, 106);
			this->button1->Size = System::Drawing::Size(175, 218);
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Text = L"";
			isDown1 = true;
		}
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		static bool isDown2 = true;
		if (isDown2)
		{
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->Size = System::Drawing::Size(175, 170);
			this->button2->Location = System::Drawing::Point(201, 154);
			this->label3->Location = System::Drawing::Point(219, 170);
			this->label3->Text = L"This updates \n your Anti-Virus";
			isDown2 = false;
		}
		else
		{
			this->button2->Size = System::Drawing::Size(175, 218);
			this->button2->Location = System::Drawing::Point(201, 106);
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Text = L"";
			isDown2 = true;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		static bool isDown3 = true;
		if (isDown3)
		{
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->Size = System::Drawing::Size(175, 170);
			this->button3->Location = System::Drawing::Point(377, 154);
			this->label4->Location = System::Drawing::Point(392, 170);
			this->label4->Text = L"This scans your \n PC for Zeus virus, \n Adware, Packet - \nSniffing and DDOS, ";
			isDown3 = false;
		}
		else
		{
			this->button3->Size = System::Drawing::Size(175, 218);
			this->button3->Location = System::Drawing::Point(377, 106);
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Text = L"";
			isDown3 = true;
		}
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void Fake_Virus_Scanner_Run_Button(System::Object^  sender, System::EventArgs^  e)
	{
		using namespace AntiScammerToolset1;
		MyForm1 fm2;
		fm2.ShowDialog();
	}
	private: System::Void Network_Security_Start_Scan_Button(System::Object^  sender, System::EventArgs^  e)
	{
		//TO-DO

	}
	private: System::Void Start_Update_Button(System::Object^  sender, System::EventArgs^  e)
	{
		//TO-DO
	}

	private: System::Void My_form_Close_Button(System::Object^  sender, System::EventArgs^  e) //The close application button 
	{
		Close();
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                               
	private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)  // This section of code is used to make the borderless
	{                                                                                                            // UI Draggable                                   
		this->Dragging_for_AS_variable = true;                                                                                                                    
		this->Offset_for_AS_variable = Point(e->X, e->Y);                                                                                                         
	}                                                                                                                                                             
	private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)                                                  
	{                                                                                                                                                            
		if (this->Dragging_for_AS_variable)                                                                                                                       
		{                                                                                                                                                         
			Point Current_Screen_Position = PointToScreen(e->Location);                                                                                           
			Location = Point(Current_Screen_Position.X - this->Offset_for_AS_variable.X,                                                                          
				Current_Screen_Position.Y - this->Offset_for_AS_variable.Y);                                                                                      
		}                                                                                                                                                         
	}                                                                                                                                                             
	private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)                                                     
	{                                                                                                                                                             
		this->Dragging_for_AS_variable = false;                                                                                                                   
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
private: System::Void label1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{

	}
	};
}