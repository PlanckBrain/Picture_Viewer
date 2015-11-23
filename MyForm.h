#pragma once
#include "Givin.h"
//#include "Givin.cpp"
//#include "MyForm.cpp"


namespace Picture_viewer 
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
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Center_pic;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  Right_pic;

	private: System::Windows::Forms::PictureBox^  Left_pic;

	protected:

	protected:


	private: System::Windows::Forms::Button^  Next;

	private: System::Windows::Forms::Button^  Previous;
	private: System::Windows::Forms::Button^  Add;
	private: System::Windows::Forms::Button^  Remove;
	private: System::Windows::Forms::RichTextBox^  Prolog_box;
	private: System::Windows::Forms::TextBox^  Album;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Center_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Right_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Left_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Previous = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Remove = (gcnew System::Windows::Forms::Button());
			this->Prolog_box = (gcnew System::Windows::Forms::RichTextBox());
			this->Album = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Center_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Right_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Left_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// Center_pic
			// 
			this->Center_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Center_pic.Image")));
			this->Center_pic->Location = System::Drawing::Point(216, 88);
			this->Center_pic->Name = L"Center_pic";
			this->Center_pic->Size = System::Drawing::Size(220, 197);
			this->Center_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Center_pic->TabIndex = 0;
			this->Center_pic->TabStop = false;
			// 
			// Right_pic
			// 
			this->Right_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Right_pic.Image")));
			this->Right_pic->Location = System::Drawing::Point(522, 200);
			this->Right_pic->Name = L"Right_pic";
			this->Right_pic->Size = System::Drawing::Size(91, 85);
			this->Right_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Right_pic->TabIndex = 1;
			this->Right_pic->TabStop = false;
			this->Right_pic->Click += gcnew System::EventHandler(this, &MyForm::Right_pic_Click);
			// 
			// Left_pic
			// 
			this->Left_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Left_pic.Image")));
			this->Left_pic->Location = System::Drawing::Point(39, 200);
			this->Left_pic->Name = L"Left_pic";
			this->Left_pic->Size = System::Drawing::Size(91, 85);
			this->Left_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Left_pic->TabIndex = 2;
			this->Left_pic->TabStop = false;
			this->Left_pic->Click += gcnew System::EventHandler(this, &MyForm::Left_pic_Click);
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(538, 345);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 23);
			this->Next->TabIndex = 3;
			this->Next->Text = L"Next";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Previous
			// 
			this->Previous->Location = System::Drawing::Point(39, 345);
			this->Previous->Name = L"Previous";
			this->Previous->Size = System::Drawing::Size(75, 23);
			this->Previous->TabIndex = 4;
			this->Previous->Text = L"Previous";
			this->Previous->UseVisualStyleBackColor = true;
			this->Previous->Click += gcnew System::EventHandler(this, &MyForm::Previous_Click);
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(287, 291);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 5;
			this->Add->Text = L"Add";
			this->Add->UseVisualStyleBackColor = true;
			// 
			// Remove
			// 
			this->Remove->Location = System::Drawing::Point(287, 320);
			this->Remove->Name = L"Remove";
			this->Remove->Size = System::Drawing::Size(75, 23);
			this->Remove->TabIndex = 6;
			this->Remove->Text = L"Remove";
			this->Remove->UseVisualStyleBackColor = true;
			// 
			// Prolog_box
			// 
			this->Prolog_box->Location = System::Drawing::Point(12, 12);
			this->Prolog_box->Name = L"Prolog_box";
			this->Prolog_box->Size = System::Drawing::Size(133, 48);
			this->Prolog_box->TabIndex = 7;
			this->Prolog_box->Text = L"Author: Duncan Reeves\nDate started: 17/Nov/15\nCP2 C++";
			// 
			// Album
			// 
			this->Album->Location = System::Drawing::Point(216, 396);
			this->Album->Name = L"Album";
			this->Album->Size = System::Drawing::Size(220, 20);
			this->Album->TabIndex = 8;
			this->Album->Text = L"Insert pathway here";
			this->Album->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 483);
			this->Controls->Add(this->Album);
			this->Controls->Add(this->Prolog_box);
			this->Controls->Add(this->Remove);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Previous);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Left_pic);
			this->Controls->Add(this->Right_pic);
			this->Controls->Add(this->Center_pic);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Center_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Right_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Left_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void Left_pic_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void Right_pic_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void Previous_Click(System::Object^  sender, System::EventArgs^  e) 
{

	//Home, hard coded
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));

	this->Left_pic->ImageLocation = "C:\\Users\\Public\\Pictures\\Sample Pictures\\Desert.jpg";

	//this->Left_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Center_pic.Image")));
	//this->Center_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Right_pic.Image")));

}


};
}
