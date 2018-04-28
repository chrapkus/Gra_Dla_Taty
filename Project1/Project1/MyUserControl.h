#pragma once
#include "Postac.h"
#include "Rycerz.h"
#include "Gra.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  MagButton;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  HealthLabel;







	private: System::Windows::Forms::Label^  DemageLabel;
	private: System::Windows::Forms::Label^  HpLabel;
	private: System::Windows::Forms::Label^  DmgLabel;






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  AssasinButton;
	private: System::Windows::Forms::Button^  KnightButton;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  CreateButton;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl::typeid));
			this->MagButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->HealthLabel = (gcnew System::Windows::Forms::Label());
			this->DemageLabel = (gcnew System::Windows::Forms::Label());
			this->HpLabel = (gcnew System::Windows::Forms::Label());
			this->DmgLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AssasinButton = (gcnew System::Windows::Forms::Button());
			this->KnightButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MagButton
			// 
			this->MagButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->MagButton->Location = System::Drawing::Point(391, 246);
			this->MagButton->Name = L"MagButton";
			this->MagButton->Size = System::Drawing::Size(71, 34);
			this->MagButton->TabIndex = 2;
			this->MagButton->Text = L"Mag";
			this->MagButton->UseVisualStyleBackColor = true;
			this->MagButton->Click += gcnew System::EventHandler(this, &MyUserControl::MagButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(319, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(371, 217);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Chose Class: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyUserControl::label2_Click);
			// 
			// HealthLabel
			// 
			this->HealthLabel->AutoSize = true;
			this->HealthLabel->Location = System::Drawing::Point(298, 336);
			this->HealthLabel->Name = L"HealthLabel";
			this->HealthLabel->Size = System::Drawing::Size(44, 13);
			this->HealthLabel->TabIndex = 3;
			this->HealthLabel->Text = L"Health: ";
			this->HealthLabel->Click += gcnew System::EventHandler(this, &MyUserControl::label3_Click);
			// 
			// DemageLabel
			// 
			this->DemageLabel->AutoSize = true;
			this->DemageLabel->Location = System::Drawing::Point(298, 372);
			this->DemageLabel->Name = L"DemageLabel";
			this->DemageLabel->Size = System::Drawing::Size(53, 13);
			this->DemageLabel->TabIndex = 3;
			this->DemageLabel->Text = L"Demage: ";
			this->DemageLabel->Click += gcnew System::EventHandler(this, &MyUserControl::label3_Click);
			// 
			// HpLabel
			// 
			this->HpLabel->AutoSize = true;
			this->HpLabel->Location = System::Drawing::Point(362, 336);
			this->HpLabel->Name = L"HpLabel";
			this->HpLabel->Size = System::Drawing::Size(25, 13);
			this->HpLabel->TabIndex = 3;
			this->HpLabel->Text = L"200";
			this->HpLabel->Click += gcnew System::EventHandler(this, &MyUserControl::label3_Click);
			// 
			// DmgLabel
			// 
			this->DmgLabel->AutoSize = true;
			this->DmgLabel->Location = System::Drawing::Point(368, 372);
			this->DmgLabel->Name = L"DmgLabel";
			this->DmgLabel->Size = System::Drawing::Size(19, 13);
			this->DmgLabel->TabIndex = 3;
			this->DmgLabel->Text = L"25";
			this->DmgLabel->Click += gcnew System::EventHandler(this, &MyUserControl::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(312, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 28);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Create your character";
			this->label5->UseMnemonic = false;
			this->label5->Click += gcnew System::EventHandler(this, &MyUserControl::label3_Click);
			// 
			// AssasinButton
			// 
			this->AssasinButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->AssasinButton->Location = System::Drawing::Point(468, 246);
			this->AssasinButton->Name = L"AssasinButton";
			this->AssasinButton->Size = System::Drawing::Size(90, 34);
			this->AssasinButton->TabIndex = 6;
			this->AssasinButton->Text = L"Assasin";
			this->AssasinButton->UseVisualStyleBackColor = true;
			this->AssasinButton->Click += gcnew System::EventHandler(this, &MyUserControl::AssasinButton_Click);
			// 
			// KnightButton
			// 
			this->KnightButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->KnightButton->Location = System::Drawing::Point(567, 246);
			this->KnightButton->Name = L"KnightButton";
			this->KnightButton->Size = System::Drawing::Size(88, 34);
			this->KnightButton->TabIndex = 7;
			this->KnightButton->Text = L"Knight";
			this->KnightButton->UseVisualStyleBackColor = true;
			this->KnightButton->Click += gcnew System::EventHandler(this, &MyUserControl::KnightButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(317, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(191, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// CreateButton
			// 
			this->CreateButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->CreateButton->Location = System::Drawing::Point(313, 454);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(100, 29);
			this->CreateButton->TabIndex = 9;
			this->CreateButton->Text = L"Create";
			this->CreateButton->UseVisualStyleBackColor = true;
			this->CreateButton->Click += gcnew System::EventHandler(this, &MyUserControl::CreateButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(524, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyUserControl::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(524, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyUserControl::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(54, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 28);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Game";
			this->label3->UseMnemonic = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Name: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(103, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"New game";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyUserControl::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Location = System::Drawing::Point(103, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 20);
			this->textBox2->TabIndex = 16;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CreateButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->KnightButton);
			this->Controls->Add(this->AssasinButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->DmgLabel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->DemageLabel);
			this->Controls->Add(this->HpLabel);
			this->Controls->Add(this->HealthLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MagButton);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(679, 562);
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
			Postac ^ P1 = gcnew Postac("Szymon","Rycerz", "rycerz.jpg", 25, 200, 200);
			
		
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MagButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nameOfCharacter = textBox1->Text;
		Postac^ p1 = gcnew Rycerz(nameOfCharacter, "rycerzePicture.jpg", 100, 100, 50);
		HpLabel->Text = (P1->maxhealth).ToString();
		DmgLabel->Text = (P1->damage).ToString();
		//pictureBox1->Image = Image::FromFile(P1->picture);
		Postac::dodajPostaæ(nameOfCharacter, p1);

	}
		
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyUserControl_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AssasinButton_Click(System::Object^  sender, System::EventArgs^  e) {
	P1->type = "Assasin";
	P1->maxhealth = 150;
	P1->damage = 30;
	P1->picture = "Assasyn.jpg";
	HpLabel->Text = (P1->maxhealth).ToString();
	DmgLabel->Text = (P1->damage).ToString();
	pictureBox1->Image = Image::FromFile(P1->picture);
}

private: System::Void KnightButton_Click(System::Object^  sender, System::EventArgs^  e) {
	P1->type = "Knight";
	P1->maxhealth = 200;
	P1->damage = 25;
	P1->picture = "rycerz.jpg";
	HpLabel->Text = (P1->maxhealth).ToString();
	DmgLabel->Text = (P1->damage).ToString();
	pictureBox1->Image = Image::FromFile(P1->picture);	
}

private: System::Void CreateButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Nazwa nie mo¿e byæ pusta!");
	}
	P1->name = textBox1->Text;
	//Project1::MyForm::zmiana();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(Postac::podajPostaæ( textBox1->Text)->kimJestem());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	long long currentTicks = System::DateTime::Now.Ticks;
	MessageBox::Show(currentTicks.ToString());
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Gra::newGame(textBox2->Text);
	label3->Text = "Game: " + textBox2->Text;
}
};
}
