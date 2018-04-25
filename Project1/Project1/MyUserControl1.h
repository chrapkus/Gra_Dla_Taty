#pragma once
#include "Postac.h"
#include "MyUserControl.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Summary for MyUserControl1
	/// </summary>
	public ref class MyUserControl1 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl1(void)
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
		~MyUserControl1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(65, 109);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(237, 194);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyUserControl1::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(385, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Location = System::Drawing::Point(67, 52);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(235, 20);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(67, 52);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(150, 20);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyUserControl1::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Location = System::Drawing::Point(388, 52);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(235, 20);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Location = System::Drawing::Point(388, 52);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(150, 20);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyUserControl1::panel2_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(388, 109);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(235, 194);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(305, 390);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(399, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 40);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyUserControl1::button1_Click);
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(679, 562);
			this->Load += gcnew System::EventHandler(this, &MyUserControl1::MyUserControl1_Load);
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
	MessageBox::Show(Postac::getPostac()->name);
}
};
}
