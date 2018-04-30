#pragma once

#include "Character.h"
#include "Knight.h"
#include "Mag.h"
#include "Assasin.h"
#include "Game.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Summary for CreateCharacterWindow
	/// </summary>
	public ref class CreateCharacterWindow : public System::Windows::Forms::UserControl
	{
	public:

		void ViewChangeHandler(int numerOkna) {
			if (numerOkna == 0)
			{
				this->BringToFront();
			}
		}

		CreateCharacterWindow(void)
		{
			InitializeComponent();
			Game::OnViewChange += gcnew  ViewChangeEvent(this, &CreateCharacterWindow::ViewChangeHandler);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateCharacterWindow()
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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateCharacterWindow::typeid));
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// MagButton
			// 
			this->MagButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->MagButton->Location = System::Drawing::Point(121, 286);
			this->MagButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MagButton->Name = L"MagButton";
			this->MagButton->Size = System::Drawing::Size(73, 35);
			this->MagButton->TabIndex = 2;
			this->MagButton->Text = L"Mag";
			this->MagButton->UseVisualStyleBackColor = true;
			this->MagButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::MagButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 259);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 256);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 305);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Chose Class: ";
			this->label2->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label2_Click);
			// 
			// HealthLabel
			// 
			this->HealthLabel->AutoSize = true;
			this->HealthLabel->Location = System::Drawing::Point(21, 412);
			this->HealthLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HealthLabel->Name = L"HealthLabel";
			this->HealthLabel->Size = System::Drawing::Size(53, 16);
			this->HealthLabel->TabIndex = 3;
			this->HealthLabel->Text = L"Health: ";
			this->HealthLabel->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label3_Click);
			// 
			// DemageLabel
			// 
			this->DemageLabel->AutoSize = true;
			this->DemageLabel->Location = System::Drawing::Point(21, 456);
			this->DemageLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DemageLabel->Name = L"DemageLabel";
			this->DemageLabel->Size = System::Drawing::Size(67, 16);
			this->DemageLabel->TabIndex = 3;
			this->DemageLabel->Text = L"Demage: ";
			this->DemageLabel->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label3_Click);
			// 
			// HpLabel
			// 
			this->HpLabel->AutoSize = true;
			this->HpLabel->Location = System::Drawing::Point(106, 412);
			this->HpLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HpLabel->Name = L"HpLabel";
			this->HpLabel->Size = System::Drawing::Size(29, 16);
			this->HpLabel->TabIndex = 3;
			this->HpLabel->Text = L"150";
			this->HpLabel->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label3_Click);
			// 
			// DmgLabel
			// 
			this->DmgLabel->AutoSize = true;
			this->DmgLabel->Location = System::Drawing::Point(106, 456);
			this->DmgLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DmgLabel->Name = L"DmgLabel";
			this->DmgLabel->Size = System::Drawing::Size(22, 16);
			this->DmgLabel->TabIndex = 3;
			this->DmgLabel->Text = L"10";
			this->DmgLabel->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(21, 30);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 28);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Create your character";
			this->label5->UseMnemonic = false;
			this->label5->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label3_Click);
			// 
			// AssasinButton
			// 
			this->AssasinButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->AssasinButton->Location = System::Drawing::Point(202, 286);
			this->AssasinButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AssasinButton->Name = L"AssasinButton";
			this->AssasinButton->Size = System::Drawing::Size(69, 35);
			this->AssasinButton->TabIndex = 6;
			this->AssasinButton->Text = L"Assasin";
			this->AssasinButton->UseVisualStyleBackColor = true;
			this->AssasinButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::AssasinButton_Click);
			// 
			// KnightButton
			// 
			this->KnightButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->KnightButton->Location = System::Drawing::Point(279, 286);
			this->KnightButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->KnightButton->Name = L"KnightButton";
			this->KnightButton->Size = System::Drawing::Size(66, 35);
			this->KnightButton->TabIndex = 7;
			this->KnightButton->Text = L"Knight";
			this->KnightButton->UseVisualStyleBackColor = true;
			this->KnightButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::KnightButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 71);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(255, 177);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(300, 71);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 28);
			this->button1->TabIndex = 10;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(300, 100);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 28);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(15, 16);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 28);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Game";
			this->label3->UseMnemonic = false;
			this->label3->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 62);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Name: ";
			this->label4->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::label4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 111);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 28);
			this->button3->TabIndex = 15;
			this->button3->Text = L"New game";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Location = System::Drawing::Point(77, 59);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 22);
			this->textBox2->TabIndex = 16;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(4, 4);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(320, 194);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gane options";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->MagButton);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->HealthLabel);
			this->groupBox2->Controls->Add(this->KnightButton);
			this->groupBox2->Controls->Add(this->HpLabel);
			this->groupBox2->Controls->Add(this->AssasinButton);
			this->groupBox2->Controls->Add(this->DemageLabel);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->DmgLabel);
			this->groupBox2->Location = System::Drawing::Point(331, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(418, 491);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Character options";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &CreateCharacterWindow::groupBox2_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 364);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Chose Class: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Mag", L"Assassin", L"Knight" });
			this->comboBox1->Location = System::Drawing::Point(121, 360);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(158, 24);
			this->comboBox1->TabIndex = 13;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(293, 358);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 28);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Create";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::button4_Click);
			// 
			// CreateCharacterWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"CreateCharacterWindow";
			this->Size = System::Drawing::Size(1547, 564);
			this->Load += gcnew System::EventHandler(this, &CreateCharacterWindow::MyUserControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		//	Character ^ P1 = gcnew Character("Szymon","Knight.jpg", "Knight", 25, 200, 200);
			
	private: System::Void AssasinButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ nameOfCharacter = textBox1->Text;
		Character^ p1 = gcnew Assasin(nameOfCharacter, "Assasin.jpg", 100, 100, 50);
		p1->name = nameOfCharacter;
		p1->damage = 15;
		p1->currenthealth = 120;
		p1->maxhealth = 120;
		p1->picture = "Assasin.jpg"; // z jakiegos powodu bez tej deklaracji 
		HpLabel->Text = (p1->maxhealth).ToString();
		DmgLabel->Text = (p1->damage).ToString();
		pictureBox1->Image = Image::FromFile(p1->picture);// ta funkcja traktuje p1->picture jako puste ??? konstrukor zle dziala ???
		Character::addCharacter(nameOfCharacter, p1);
	}
		private: System::Void KnightButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			String^ nameOfCharacter = textBox1->Text;
			Character^ p1 = gcnew Knight(nameOfCharacter, "Knight.jpg", 100, 100, 50);
			p1->name = nameOfCharacter;
			//p1->damage = 10;
			//p1->currenthealth = 150;
			//p1->maxhealth = 150;
			p1->picture = "Knight.jpg"; // z jakiego powodu pomimo konstruktora wszystkie wartosci przujmuja wartosc 0 ...
			HpLabel->Text = (p1->maxhealth).ToString();
			DmgLabel->Text = (p1->damage).ToString();
			pictureBox1->Image = Image::FromFile(p1->picture);
			Character::addCharacter(nameOfCharacter, p1);
		}
	
	private: System::Void MagButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			String^ nameOfCharacter = textBox1->Text;
			Character^ p1 = gcnew Mag(nameOfCharacter, "Mag.jpg", 100, 100, 50);
			p1 -> name = nameOfCharacter;
			p1->damage = 5;
			p1->currenthealth = 100;
			p1->maxhealth = 100;
			p1->picture = "Mag.jpg"; // z jakiegos powodu bez tej deklaracji 
			this->HpLabel->Text = (p1->maxhealth).ToString();
			DmgLabel->Text = (p1->damage).ToString();
			pictureBox1->Image = Image::FromFile(p1->picture);// ta funkcja traktuje p1->picture jako puste ??? konstrukor zle dziala ???
			Character::addCharacter( nameOfCharacter, p1);
		}

		private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyUserControl_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CreateButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Nazwa nie mo¿e byæ pusta!");
	}
	
	//Project1::MyForm::zmiana();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(Character::getCharacter( "player")->whoAmI());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Game::FireViewChangeEvent(1);
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Game::newGame(textBox2->Text);
	label3->Text = "Game: " + textBox2->Text;
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}


		 
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
