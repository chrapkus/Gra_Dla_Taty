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
			this->MagButton->Location = System::Drawing::Point(586, 378);
			this->MagButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MagButton->Name = L"MagButton";
			this->MagButton->Size = System::Drawing::Size(106, 52);
			this->MagButton->TabIndex = 2;
			this->MagButton->Text = L"Mag";
			this->MagButton->UseVisualStyleBackColor = true;
			this->MagButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::MagButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(478, 338);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(556, 334);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 26);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(471, 395);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Chose Class: ";
			
			// 
			// HealthLabel
			// 
			this->HealthLabel->AutoSize = true;
			this->HealthLabel->Location = System::Drawing::Point(447, 517);
			this->HealthLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HealthLabel->Name = L"HealthLabel";
			this->HealthLabel->Size = System::Drawing::Size(64, 20);
			this->HealthLabel->TabIndex = 3;
			this->HealthLabel->Text = L"Health: ";
			// 
			// DemageLabel
			// 
			this->DemageLabel->AutoSize = true;
			this->DemageLabel->Location = System::Drawing::Point(447, 572);
			this->DemageLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DemageLabel->Name = L"DemageLabel";
			this->DemageLabel->Size = System::Drawing::Size(78, 20);
			this->DemageLabel->TabIndex = 3;
			this->DemageLabel->Text = L"Demage: ";
			// 
			// HpLabel
			// 
			this->HpLabel->AutoSize = true;
			this->HpLabel->Location = System::Drawing::Point(543, 517);
			this->HpLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->HpLabel->Name = L"HpLabel";
			this->HpLabel->Size = System::Drawing::Size(36, 20);
			this->HpLabel->TabIndex = 3;
			this->HpLabel->Text = L"150";
			// 
			// DmgLabel
			// 
			this->DmgLabel->AutoSize = true;
			this->DmgLabel->Location = System::Drawing::Point(552, 572);
			this->DmgLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DmgLabel->Name = L"DmgLabel";
			this->DmgLabel->Size = System::Drawing::Size(27, 20);
			this->DmgLabel->TabIndex = 3;
			this->DmgLabel->Text = L"10";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(468, 20);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 44);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Set Your team";
			this->label5->UseMnemonic = false;
			// 
			// AssasinButton
			// 
			this->AssasinButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->AssasinButton->Location = System::Drawing::Point(702, 378);
			this->AssasinButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AssasinButton->Name = L"AssasinButton";
			this->AssasinButton->Size = System::Drawing::Size(135, 52);
			this->AssasinButton->TabIndex = 6;
			this->AssasinButton->Text = L"Assasin";
			this->AssasinButton->UseVisualStyleBackColor = true;
			this->AssasinButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::AssasinButton_Click);
			// 
			// KnightButton
			// 
			this->KnightButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->KnightButton->Location = System::Drawing::Point(850, 378);
			this->KnightButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->KnightButton->Name = L"KnightButton";
			this->KnightButton->Size = System::Drawing::Size(132, 52);
			this->KnightButton->TabIndex = 7;
			this->KnightButton->Text = L"Knight";
			this->KnightButton->UseVisualStyleBackColor = true;
			this->KnightButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::KnightButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(476, 94);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(286, 222);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// CreateButton
			// 
			this->CreateButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold));
			this->CreateButton->Location = System::Drawing::Point(412, 697);
			this->CreateButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(150, 45);
			this->CreateButton->TabIndex = 9;
			this->CreateButton->Text = L"Create";
			this->CreateButton->UseVisualStyleBackColor = true;
			this->CreateButton->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::CreateButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(786, 94);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(616, 697);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 35);
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
			this->label3->Location = System::Drawing::Point(81, 20);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 44);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Game";
			this->label3->UseMnemonic = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 102);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Name: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(154, 168);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 35);
			this->button3->TabIndex = 15;
			this->button3->Text = L"New game";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateCharacterWindow::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Location = System::Drawing::Point(154, 97);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 26);
			this->textBox2->TabIndex = 16;
			// 
			// CreateCharacterWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"CreateCharacterWindow";
			this->Size = System::Drawing::Size(1018, 865);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	int NumberOfCharacters = 0;
	
	private: System::Void AssasinButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (NumberOfCharacters < 3) {
			if (textBox1->Text == "")
			{
				MessageBox::Show("Name your character!");
			}
			else
			{
				String^ nameOfCharacter = textBox1->Text;
				Character^ p1 = gcnew Assasin(nameOfCharacter, "Assasin.jpg", 100, 100, 50);
				HpLabel->Text = (p1->maxhealth).ToString();
				DmgLabel->Text = (p1->damage).ToString();
				pictureBox1->Image = Image::FromFile(p1->picture);
				Character::addCharacter(nameOfCharacter, p1);
				MessageBox::Show("New member of your team: " + nameOfCharacter);
				textBox1->Text = "";
				NumberOfCharacters = NumberOfCharacters + 1;;
			}
		}
		else
		{
			MessageBox::Show("You already have 3 characters !");
			textBox1->Text = "";
		}
	}
		private: System::Void KnightButton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (NumberOfCharacters < 3)
			{
				if (textBox1->Text == "")
				{
					MessageBox::Show("Name your character !");
				}
				else
				{
					String^ nameOfCharacter = textBox1->Text;
					Character^ p1 = gcnew Knight(nameOfCharacter, "Knight.jpg", 100, 100, 50);
					HpLabel->Text = (p1->maxhealth).ToString();
					DmgLabel->Text = (p1->damage).ToString();
					pictureBox1->Image = Image::FromFile(p1->picture);
					Character::addCharacter(nameOfCharacter, p1);
					MessageBox::Show("New member of your team: " + nameOfCharacter);
					textBox1->Text = "";
					NumberOfCharacters++;
				}
			}
			else
			{
				MessageBox::Show("You already have 3 characters !");
				textBox1->Text = "";
			}
		}
	
	private: System::Void MagButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
		if (NumberOfCharacters < 3)
		{
			if (textBox1->Text == "")
			{
				MessageBox::Show("Name your character !");
			}
			else
			{
				String^ nameOfCharacter = textBox1->Text;
				Character^ p1 = gcnew Mag(nameOfCharacter, "Mag.jpg", 100, 100, 50);
				this->HpLabel->Text = (p1->maxhealth).ToString();
				DmgLabel->Text = (p1->damage).ToString();
				pictureBox1->Image = Image::FromFile(p1->picture);
				Character::addCharacter(nameOfCharacter, p1);
				MessageBox::Show("New member of your team: " + nameOfCharacter);
				textBox1->Text = "";
				NumberOfCharacters++;
			}
		}
		else
		{
			MessageBox::Show("You already have 3 characters !");
			textBox1->Text = "";
		}
		}


private: System::Void CreateButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (NumberOfCharacters==3) 
	{
		Game::FireViewChangeEvent(1);
	}
	else
	{
		MessageBox::Show("You need " + ((3 - NumberOfCharacters).ToString()) + " more characters");
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
 
};
}
