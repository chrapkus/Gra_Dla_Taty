#pragma once
#include "FightWindow.h"
#include "CreateCharacterWindow.h"
#include "Manu.h"
#include "LoadGame.h"
namespace Project1 {

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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  MenuButton;

	private: System::Windows::Forms::Button^  button3;
	private: Project1::CreateCharacterWindow ^ userControl = (gcnew Project1::CreateCharacterWindow());
	private: Project1::FightWindow ^ userControl1 = (gcnew Project1::FightWindow());
	private: Project1::Manu^ MenuControl = (gcnew Project1::Manu());
	private: Project1::LoadGame^ LoadGameControl = (gcnew Project1::LoadGame());

			
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->Controls->Add(userControl1);
			this->panel1->Controls->Add(MenuControl);
			this->panel1->Controls->Add(userControl);
			this->panel1->Controls->Add(LoadGameControl);
			userControl->BringToFront();

			this->button1 = (gcnew System::Windows::Forms::Button());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(105, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 562);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"NewCharacter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MenuButton
			// 
			this->MenuButton->Location = System::Drawing::Point(12, 234);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Size = System::Drawing::Size(75, 25);
			this->MenuButton->TabIndex = 2;
			this->MenuButton->Text = L"Menu";
			this->MenuButton->UseVisualStyleBackColor = true;
			this->MenuButton->Click += gcnew System::EventHandler(this, &MyForm::MenuButton_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 337);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->MenuButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximumSize = System::Drawing::Size(804, 604);
			this->MinimumSize = System::Drawing::Size(804, 604);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if( userControl == nullptr)
			userControl = (gcnew Project1::CreateCharacterWindow()); //
		
		this->panel1->Controls->Add(userControl);
		userControl->BringToFront();
	}
			
	public: System::Void MenuButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (userControl1 == nullptr)
			userControl1 = (gcnew Project1::FightWindow());

		this->panel1->Controls->Add(userControl1);
		userControl1->BringToFront();
	}
};
}
