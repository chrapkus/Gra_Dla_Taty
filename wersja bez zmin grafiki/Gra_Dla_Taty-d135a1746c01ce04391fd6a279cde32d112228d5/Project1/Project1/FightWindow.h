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
	private: Character ^ PlayerCharacter;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  OponentHpLabel;

	private: System::Windows::Forms::Label^  PlayerHpLabel;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  StatisticsLabel;
	private: System::Windows::Forms::Label^  PlayerDemageLabel;

	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Label^  SecondFightLabel;
	private: System::Windows::Forms::ToolTip^  toolTipOponent;
	private: System::Windows::Forms::ToolTip^  toolTipPlayer;
	private: System::Windows::Forms::Panel^  LostPanel;
	private: System::Windows::Forms::Button^  OkButton;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  WinPanel;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;



	private: Character ^ MonsterCharacter;
			 

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
			int a = (rand() % 4) + 1; //losowania przeciwnika

		
			if (a == 1)
			{
				MonsterCharacter = gcnew Dragon("Dragon", "Dragon.jpg", 50, 200, 180,0,4,"fire");
			}
			if (a == 2)
			{
				MonsterCharacter = gcnew Orc("Orc", "Orc.jpg", 10, 150, 140,0,2,"Green");
			}
			if (a == 3)
			{
				MonsterCharacter = gcnew Werewolf("Werewolf", "Werewolf.jpg", 40, 80, 70,0,6,"Awwwooooooooo");
			}
			if (a == 4)
			{
				MonsterCharacter = gcnew Vampire("Vampire", "Vampire.jpg", 9, 40, 30,0,5,"blood");
			}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
			Game::OnViewChange += gcnew  ViewChangeEvent(this, &FightWindow::ViewChangeHandler);//Handler obslugujacy event przelaczania 
			//oknami MyUserControl

			OponentLabel->Text = MonsterCharacter->name;
			pictureBox2->Image = Image::FromFile(MonsterCharacter->picture);
			OponentHpLabel->Text = ((MonsterCharacter->currenthealth).ToString()) + "/" + ((MonsterCharacter->maxhealth).ToString());
			panel4->Width = ((float(MonsterCharacter->currenthealth) / MonsterCharacter->maxhealth*1.0)*(panel3->Width*1.0));

			
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
private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
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
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->StatisticsLabel = (gcnew System::Windows::Forms::Label());
			this->PlayerDemageLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SecondFightLabel = (gcnew System::Windows::Forms::Label());
			this->toolTipOponent = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipPlayer = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->LostPanel = (gcnew System::Windows::Forms::Panel());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->WinPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel6->SuspendLayout();
			this->LostPanel->SuspendLayout();
			this->WinPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(57, 141);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(397, 325);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FightWindow::pictureBox1_Click);
			// 
			// PlayerLabel
			// 
			this->PlayerLabel->AutoSize = true;
			this->PlayerLabel->Location = System::Drawing::Point(198, 50);
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
			this->OponentLabel->Location = System::Drawing::Point(729, 50);
			this->OponentLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->OponentLabel->Name = L"OponentLabel";
			this->OponentLabel->Size = System::Drawing::Size(110, 20);
			this->OponentLabel->TabIndex = 2;
			this->OponentLabel->Text = L"OponentLabel";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Location = System::Drawing::Point(57, 75);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 31);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FightWindow::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(57, 75);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(397, 31);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FightWindow::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Location = System::Drawing::Point(567, 75);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(397, 31);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Location = System::Drawing::Point(567, 75);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(397, 31);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FightWindow::panel2_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(567, 143);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(397, 325);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->toolTipOponent->SetToolTip(this->pictureBox2, L"Distciption;");
			this->pictureBox2->GiveFeedback += gcnew System::Windows::Forms::GiveFeedbackEventHandler(this, &FightWindow::Give);
			this->pictureBox2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &FightWindow::Help);
			this->pictureBox2->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &FightWindow::sijcdoisc);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(233, 172);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 6;
			// 
			// chracter1ComboBox
			// 
			this->chracter1ComboBox->FormattingEnabled = true;
			this->chracter1ComboBox->Location = System::Drawing::Point(57, 515);
			this->chracter1ComboBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chracter1ComboBox->Name = L"chracter1ComboBox";
			this->chracter1ComboBox->Size = System::Drawing::Size(204, 28);
			this->chracter1ComboBox->TabIndex = 9;
			this->chracter1ComboBox->Text = L"Your Characters";
			this->chracter1ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FightWindow::chracter1ComboBox_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(269, 515);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(185, 35);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Choose";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FightWindow::button3_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(57, 558);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 35);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Basic attack";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FightWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(269, 558);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(185, 37);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Defense";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FightWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(57, 623);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(397, 37);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Unique ability";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &FightWindow::button7_Click);
			// 
			// OponentHpLabel
			// 
			this->OponentHpLabel->AutoSize = true;
			this->OponentHpLabel->Location = System::Drawing::Point(759, 111);
			this->OponentHpLabel->Name = L"OponentHpLabel";
			this->OponentHpLabel->Size = System::Drawing::Size(51, 20);
			this->OponentHpLabel->TabIndex = 16;
			this->OponentHpLabel->Text = L"label1";
			// 
			// PlayerHpLabel
			// 
			this->PlayerHpLabel->AutoSize = true;
			this->PlayerHpLabel->Location = System::Drawing::Point(234, 111);
			this->PlayerHpLabel->Name = L"PlayerHpLabel";
			this->PlayerHpLabel->Size = System::Drawing::Size(31, 20);
			this->PlayerHpLabel->TabIndex = 17;
			this->PlayerHpLabel->Text = L"\?/\?";
			this->PlayerHpLabel->Click += gcnew System::EventHandler(this, &FightWindow::PlayerHpLabel_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->StatisticsLabel);
			this->panel6->Controls->Add(this->PlayerDemageLabel);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(57, 685);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(397, 130);
			this->panel6->TabIndex = 18;
			// 
			// StatisticsLabel
			// 
			this->StatisticsLabel->AutoSize = true;
			this->StatisticsLabel->Location = System::Drawing::Point(154, 0);
			this->StatisticsLabel->Name = L"StatisticsLabel";
			this->StatisticsLabel->Size = System::Drawing::Size(74, 20);
			this->StatisticsLabel->TabIndex = 1;
			this->StatisticsLabel->Text = L"Statistics";
			// 
			// PlayerDemageLabel
			// 
			this->PlayerDemageLabel->AutoSize = true;
			this->PlayerDemageLabel->Location = System::Drawing::Point(154, 37);
			this->PlayerDemageLabel->Name = L"PlayerDemageLabel";
			this->PlayerDemageLabel->Size = System::Drawing::Size(18, 20);
			this->PlayerDemageLabel->TabIndex = 1;
			this->PlayerDemageLabel->Text = L"\?";
			this->PlayerDemageLabel->Click += gcnew System::EventHandler(this, &FightWindow::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Basic attack: ";
			// 
			// SecondFightLabel
			// 
			this->SecondFightLabel->AutoSize = true;
			this->SecondFightLabel->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SecondFightLabel->ForeColor = System::Drawing::Color::Maroon;
			this->SecondFightLabel->Location = System::Drawing::Point(53, 471);
			this->SecondFightLabel->Name = L"SecondFightLabel";
			this->SecondFightLabel->Size = System::Drawing::Size(144, 22);
			this->SecondFightLabel->TabIndex = 21;
			this->SecondFightLabel->Text = L"SecondFightLabel";
			this->SecondFightLabel->Visible = false;
			// 
			// toolTipOponent
			// 
			this->toolTipOponent->Tag = L"Oponent:";
			// 
			// LostPanel
			// 
			this->LostPanel->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->LostPanel->Controls->Add(this->OkButton);
			this->LostPanel->Controls->Add(this->flowLayoutPanel1);
			this->LostPanel->Controls->Add(this->label2);
			this->LostPanel->Controls->Add(this->label3);
			this->LostPanel->Location = System::Drawing::Point(345, 460);
			this->LostPanel->Name = L"LostPanel";
			this->LostPanel->Size = System::Drawing::Size(465, 221);
			this->LostPanel->TabIndex = 22;
			this->LostPanel->Visible = false;
			// 
			// OkButton
			// 
			this->OkButton->BackColor = System::Drawing::Color::Maroon;
			this->OkButton->Location = System::Drawing::Point(175, 117);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(121, 52);
			this->OkButton->TabIndex = 9;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = false;
			this->OkButton->Click += gcnew System::EventHandler(this, &FightWindow::OkButton_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(206, 140);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(8, 8);
			this->flowLayoutPanel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(154, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 49);
			this->label2->TabIndex = 7;
			this->label2->Text = L"You Lost";
			// 
			// WinPanel
			// 
			this->WinPanel->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->WinPanel->Controls->Add(this->button1);
			this->WinPanel->Controls->Add(this->flowLayoutPanel2);
			this->WinPanel->Controls->Add(this->label4);
			this->WinPanel->Controls->Add(this->label5);
			this->WinPanel->Location = System::Drawing::Point(345, 233);
			this->WinPanel->Name = L"WinPanel";
			this->WinPanel->Size = System::Drawing::Size(465, 221);
			this->WinPanel->TabIndex = 22;
			this->WinPanel->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(175, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FightWindow::button1_Click_1);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(206, 140);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(8, 8);
			this->flowLayoutPanel2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(154, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 49);
			this->label4->TabIndex = 7;
			this->label4->Text = L"You Win";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(233, 172);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 6;
			// 
			// FightWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->WinPanel);
			this->Controls->Add(this->LostPanel);
			this->Controls->Add(this->SecondFightLabel);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->PlayerHpLabel);
			this->Controls->Add(this->OponentHpLabel);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chracter1ComboBox);
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
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->LostPanel->ResumeLayout(false);
			this->LostPanel->PerformLayout();
			this->WinPanel->ResumeLayout(false);
			this->WinPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		int Tura = 0;
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
	PlayerCharacter = Character::getCharacter(nazwa);
	PlayerLabel->Text = PlayerCharacter->name;
	panel2->Width = ((float(PlayerCharacter->currenthealth )/ PlayerCharacter->maxhealth*1.0)*(panel1->Width*1.0));
	pictureBox1->Image = Image::FromFile(PlayerCharacter->picture);
//	pictureBox1->ToolTip PlayerCharacter->description;
	PlayerHpLabel->Text = ((PlayerCharacter->currenthealth).ToString()) +"/"+ ((PlayerCharacter->maxhealth).ToString());
	PlayerDemageLabel->Text = PlayerCharacter->damage.ToString();
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	


	SecondFightLabel->Text=(Tura+1).ToString()+". " + Character::BasicAttack(PlayerCharacter,MonsterCharacter);
	SecondFightLabel->Visible = true;
	Tura++;
	Tura++;
	if (PlayerCharacter->currenthealth <= 0)
	{
		PlayerCharacter->currenthealth = 0;

		button3->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;

		LostPanel->Visible = true;
	}
	if (MonsterCharacter->currenthealth <= 0)
	{
		MonsterCharacter->currenthealth = 0;
		button3->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;

		WinPanel->Visible = true;
	}
	
	OponentHpLabel->Text = ((MonsterCharacter->currenthealth).ToString()) + "/" + ((MonsterCharacter->maxhealth).ToString());
	panel4->Width = ((float(MonsterCharacter->currenthealth) / MonsterCharacter->maxhealth*1.0)*(panel3->Width*1.0));

	PlayerHpLabel->Text = ((PlayerCharacter->currenthealth).ToString()) + "/" + ((PlayerCharacter->maxhealth).ToString());
	panel2->Width = ((float(PlayerCharacter->currenthealth) / PlayerCharacter->maxhealth*1.0)*(panel3->Width*1.0));




}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	SecondFightLabel->Text = (Tura + 1).ToString() + ". " + Character::Defense(PlayerCharacter,MonsterCharacter);

	SecondFightLabel->Visible = true;
	




	Tura++;
	Tura++;
	if (PlayerCharacter->currenthealth <= 0)
	{
		PlayerCharacter->currenthealth = 0;

		button3->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;

		LostPanel->Visible = true;
	}
	if (MonsterCharacter->currenthealth <= 0)
	{
		MonsterCharacter->currenthealth = 0;
		button3->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;

		WinPanel->Visible = true;
	}

	OponentHpLabel->Text = ((MonsterCharacter->currenthealth).ToString()) + "/" + ((MonsterCharacter->maxhealth).ToString());
	panel4->Width = ((float(MonsterCharacter->currenthealth) / MonsterCharacter->maxhealth*1.0)*(panel3->Width*1.0));

	PlayerHpLabel->Text = ((PlayerCharacter->currenthealth).ToString()) + "/" + ((PlayerCharacter->maxhealth).ToString());
	panel2->Width = ((float(PlayerCharacter->currenthealth) / PlayerCharacter->maxhealth*1.0)*(panel3->Width*1.0));




}
private: System::Void PlayerHpLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void sijcdoisc(System::Object^  sender, System::Windows::Forms::LayoutEventArgs^  e) {
}
private: System::Void Give(System::Object^  sender, System::Windows::Forms::GiveFeedbackEventArgs^  e) {
}
private: System::Void Help(System::Object^  sender, System::Windows::Forms::HelpEventArgs^  hlpevent) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	
	SecondFightLabel->Text = (Tura + 1).ToString() + ". " + Character::Unique(PlayerCharacter, MonsterCharacter);

	
	SecondFightLabel->Visible = true;
	




	Tura++;
	Tura++;
	if (PlayerCharacter->currenthealth <= 0)
	{
		PlayerCharacter->currenthealth = 0;

		button3->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;

		LostPanel->Visible = true;
	}
	if (MonsterCharacter->currenthealth <= 0)
	{
		MonsterCharacter->currenthealth = 0;
		button3->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;

		WinPanel->Visible = true;
	}

	OponentHpLabel->Text = ((MonsterCharacter->currenthealth).ToString()) + "/" + ((MonsterCharacter->maxhealth).ToString());
	panel4->Width = ((float(MonsterCharacter->currenthealth) / MonsterCharacter->maxhealth*1.0)*(panel3->Width*1.0));

	PlayerHpLabel->Text = ((PlayerCharacter->currenthealth).ToString()) + "/" + ((PlayerCharacter->maxhealth).ToString());
	panel2->Width = ((float(PlayerCharacter->currenthealth) / PlayerCharacter->maxhealth*1.0)*(panel3->Width*1.0));




}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Game::FireViewChangeEvent(2);
}
private: System::Void OkButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Game::FireViewChangeEvent(2);

}
};
}
