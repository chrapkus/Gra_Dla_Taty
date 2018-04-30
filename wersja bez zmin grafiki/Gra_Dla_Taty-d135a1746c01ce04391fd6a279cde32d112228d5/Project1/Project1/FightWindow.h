#pragma once
#include "Character.h"
#include "CreateCharacterWindow.h"
#include "Werewolf.h"
#include "Vampire.h"
#include "Werewolf.h"
#include "Dragon.h"
#include "Orc.h"
#include <time.h>
#include <stdio.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Summary for FightWindow
	/// </summary>
	public ref class FightWindow : public System::Windows::Forms::UserControl
	{

	//zmienne do prechowywania dwóch wybranych do walki postaci
	private: Character ^ fightCharacter1;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  OponentHpLabel;

	private: System::Windows::Forms::Label^  PlayerHpLabel;
	private: Character ^ fightCharacter2;
			 

		void ViewChangeHandler(int numerOkna) {
			if (numerOkna == 1)
			{
				characterMapType::iterator startIter = Character::getStartIterator();
				characterMapType::iterator endIter = Character::getEndIterator();
				while (startIter != endIter) {
					String^ nazwa = startIter.get_ref()->first;
					this->chracter1ComboBox->Items->Add(nazwa);
					startIter++;
				}
				//this->PlayerLabel->Text = Character::getCharacter("player")->name;
				this->BringToFront();

			}
		}

	public:
		FightWindow(void)
		{
			InitializeComponent();
			srand(time(NULL));
			int a = (rand() % 4) + 1;

			if (a == 1)
			{
				fightCharacter2 = gcnew Dragon("Dragon", "Dragon.jpg", 200, 200, 50);
			}
			if (a == 1)
			{
				fightCharacter2 = gcnew Dragon("Dragon", "Dragon.jpg", 200, 200, 50);
				fightCharacter2->name = "Dragon";
				fightCharacter2->picture = "Dragon.jpg";
				fightCharacter2->maxhealth = 200;
				fightCharacter2->currenthealth = 200;
				fightCharacter2->damage = 50;
			}
			if (a == 2)
			{
				fightCharacter2 = gcnew Orc("Orc", "Orc.jpg", 150, 150, 10);
				fightCharacter2->name = "Orc";
				fightCharacter2->picture = "Orc.jpg";
				fightCharacter2->maxhealth = 150;
				fightCharacter2->currenthealth = 150;
				fightCharacter2->damage = 10;
			}
			if (a == 3)
			{
				fightCharacter2 = gcnew Werewolf("Werewolf", "Werewolf.jpg", 80, 80, 40);
				fightCharacter2->name = "Werewolf";
				fightCharacter2->picture = "Werewolf.jpg";
				fightCharacter2->maxhealth = 80;
				fightCharacter2->currenthealth = 80;
				fightCharacter2->damage = 40;
			}
			if (a == 4)
			{
				fightCharacter2 = gcnew Vampire("Vampire", "Vampire.jpg", 40, 40, 20);
				fightCharacter2->name = "Vampire";
				fightCharacter2->picture = "Vampire.jpg";
				fightCharacter2->maxhealth = 40;
				fightCharacter2->currenthealth = 40;
				fightCharacter2->damage = 20;
			}
			Game::OnViewChange += gcnew  ViewChangeEvent(this, &FightWindow::ViewChangeHandler);// ?????

			OponentLabel->Text = fightCharacter2->name;
			pictureBox2->Image = Image::FromFile(fightCharacter2->picture);
			OponentHpLabel->Text = ((fightCharacter2->currenthealth).ToString()) + "/" + ((fightCharacter2->maxhealth).ToString());
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FightWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  PlayerLabel;
	private: System::Windows::Forms::Label^  OponentLabel;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::ComboBox^  chracter1ComboBox;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FightWindow::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerLabel = (gcnew System::Windows::Forms::Label());
			this->OponentLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chracter1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->OponentHpLabel = (gcnew System::Windows::Forms::Label());
			this->PlayerHpLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(98, 168);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(356, 298);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FightWindow::pictureBox1_Click);
			// 
			// PlayerLabel
			// 
			this->PlayerLabel->AutoSize = true;
			this->PlayerLabel->Location = System::Drawing::Point(94, 55);
			this->PlayerLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PlayerLabel->Name = L"PlayerLabel";
			this->PlayerLabel->Size = System::Drawing::Size(122, 20);
			this->PlayerLabel->TabIndex = 1;
			this->PlayerLabel->Text = L"PlayerCharacter";
			this->PlayerLabel->Click += gcnew System::EventHandler(this, &FightWindow::label1_Click);
			// 
			// OponentLabel
			// 
			this->OponentLabel->AutoSize = true;
			this->OponentLabel->Location = System::Drawing::Point(578, 55);
			this->OponentLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->OponentLabel->Name = L"OponentLabel";
			this->OponentLabel->Size = System::Drawing::Size(110, 20);
			this->OponentLabel->TabIndex = 2;
			this->OponentLabel->Text = L"OponentLabel";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Location = System::Drawing::Point(100, 80);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 31);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(100, 80);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(354, 31);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FightWindow::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Location = System::Drawing::Point(582, 80);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(352, 31);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Location = System::Drawing::Point(582, 80);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(352, 31);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FightWindow::panel2_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(582, 168);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(352, 298);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(606, 543);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 6;
			// 
			// chracter1ComboBox
			// 
			this->chracter1ComboBox->FormattingEnabled = true;
			this->chracter1ComboBox->Location = System::Drawing::Point(98, 498);
			this->chracter1ComboBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chracter1ComboBox->Name = L"chracter1ComboBox";
			this->chracter1ComboBox->Size = System::Drawing::Size(354, 28);
			this->chracter1ComboBox->TabIndex = 9;
			this->chracter1ComboBox->Text = L"Your Characters";
			this->chracter1ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FightWindow::chracter1ComboBox_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(98, 557);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(246, 35);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Choose";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FightWindow::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(98, 655);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 35);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Basic attack";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FightWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(274, 655);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 37);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Defense";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FightWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(98, 725);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(297, 51);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Unique ability";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// OponentHpLabel
			// 
			this->OponentHpLabel->AutoSize = true;
			this->OponentHpLabel->Location = System::Drawing::Point(578, 116);
			this->OponentHpLabel->Name = L"OponentHpLabel";
			this->OponentHpLabel->Size = System::Drawing::Size(51, 20);
			this->OponentHpLabel->TabIndex = 16;
			this->OponentHpLabel->Text = L"label1";
			// 
			// PlayerHpLabel
			// 
			this->PlayerHpLabel->AutoSize = true;
			this->PlayerHpLabel->Location = System::Drawing::Point(403, 116);
			this->PlayerHpLabel->Name = L"PlayerHpLabel";
			this->PlayerHpLabel->Size = System::Drawing::Size(51, 20);
			this->PlayerHpLabel->TabIndex = 17;
			this->PlayerHpLabel->Text = L"label2";
			this->PlayerHpLabel->Click += gcnew System::EventHandler(this, &FightWindow::PlayerHpLabel_Click);
			// 
			// FightWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->PlayerHpLabel);
			this->Controls->Add(this->OponentHpLabel);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chracter1ComboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->OponentLabel);
			this->Controls->Add(this->PlayerLabel);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FightWindow";
			this->Size = System::Drawing::Size(1018, 865);
			this->Load += gcnew System::EventHandler(this, &FightWindow::MyUserControl1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
		//private: Project1::MyUserControl::Postac::P1;
		
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyUserControl1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
	//this->panel2->Width = //Project1::MyUserControl::MyUserControl::a;
		//(float(P1->currenthealth)/P1->maxhealth * panel1->Width);


}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//pictureBox1->Image = Image::FromFile(P1->picture);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//MessageBox::Show(Postac::getPostac()->whoAmI());
	Game::FireViewChangeEvent(0);
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chracter1ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//wypelnienie combo box nazwami postaci
	//to nale¿y przenieœæ do odpowiedniego handlera tak aby wype³nia³o siê automatycznie, ale tylko jeden raz
	characterMapType::iterator startIter = Character::getStartIterator();
	characterMapType::iterator endIter = Character::getEndIterator();
	while (startIter != endIter) {
		String^ nazwa = startIter.get_ref()->first;
		this->chracter1ComboBox->Items->Add(nazwa);
		startIter++;
	}

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ nazwa = chracter1ComboBox->Text;
	fightCharacter1 = Character::getCharacter(nazwa);
	PlayerLabel->Text = fightCharacter1->name;
	panel2->Width = ((fightCharacter1->currenthealth / fightCharacter1->maxhealth)*(panel1->Width));
	pictureBox1->Image = Image::FromFile(fightCharacter1->picture);
	PlayerHpLabel->Text = ((fightCharacter1->currenthealth).ToString()) +"/"+ ((fightCharacter1->maxhealth).ToString());
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void PlayerHpLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
