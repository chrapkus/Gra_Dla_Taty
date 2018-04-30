#pragma once
#include "Character.h"
#include "CreateCharacterWindow.h"

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
	private: System::Windows::Forms::Button^  button4;
	private: Character ^ fightCharacter2;

		void ViewChangeHandler(int numerOkna) {
			if (numerOkna == 1)
			{
				//this->PlayerLabel->Text = Character::getCharacter("player")->name;
				this->BringToFront();

			}
		}

	public:
		FightWindow(void)
		{
			InitializeComponent();
			Game::OnViewChange += gcnew  ViewChangeEvent(this, &FightWindow::ViewChangeHandler);// ?????
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  chracter2ComboBox;
	private: System::Windows::Forms::ComboBox^  chracter1ComboBox;
	private: System::Windows::Forms::Button^  button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chracter2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->chracter1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->PlayerLabel->Size = System::Drawing::Size(42, 20);
			this->PlayerLabel->TabIndex = 1;
			this->PlayerLabel->Text = L"label";
			this->PlayerLabel->Click += gcnew System::EventHandler(this, &FightWindow::label1_Click);
			// 
			// OponentLabel
			// 
			this->OponentLabel->AutoSize = true;
			this->OponentLabel->Location = System::Drawing::Point(578, 55);
			this->OponentLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->OponentLabel->Name = L"OponentLabel";
			this->OponentLabel->Size = System::Drawing::Size(42, 20);
			this->OponentLabel->TabIndex = 2;
			this->OponentLabel->Text = L"label";
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
			this->panel2->Size = System::Drawing::Size(225, 31);
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
			this->panel4->Size = System::Drawing::Size(225, 31);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FightWindow::panel2_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(582, 168);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(352, 298);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(458, 600);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(598, 628);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 62);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FightWindow::button1_Click);
			// 
			// chracter2ComboBox
			// 
			this->chracter2ComboBox->FormattingEnabled = true;
			this->chracter2ComboBox->Location = System::Drawing::Point(582, 498);
			this->chracter2ComboBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chracter2ComboBox->Name = L"chracter2ComboBox";
			this->chracter2ComboBox->Size = System::Drawing::Size(350, 28);
			this->chracter2ComboBox->TabIndex = 8;
			// 
			// chracter1ComboBox
			// 
			this->chracter1ComboBox->FormattingEnabled = true;
			this->chracter1ComboBox->Location = System::Drawing::Point(98, 498);
			this->chracter1ComboBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chracter1ComboBox->Name = L"chracter1ComboBox";
			this->chracter1ComboBox->Size = System::Drawing::Size(354, 28);
			this->chracter1ComboBox->TabIndex = 9;
			this->chracter1ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FightWindow::chracter1ComboBox_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(100, 642);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(270, 35);
			this->button2->TabIndex = 10;
			this->button2->Text = L"populateCoboBox";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FightWindow::button2_Click);
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(582, 557);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(246, 35);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Choose";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// FightWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chracter1ComboBox);
			this->Controls->Add(this->chracter2ComboBox);
			this->Controls->Add(this->button1);
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
			this->Size = System::Drawing::Size(1018, 843);
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
}
};
}
