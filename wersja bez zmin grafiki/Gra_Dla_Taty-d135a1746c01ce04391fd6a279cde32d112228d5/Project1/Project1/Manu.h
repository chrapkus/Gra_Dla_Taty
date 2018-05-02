#pragma once
#include "Game.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Summary for Manu
	/// </summary>
	public ref class Manu : public System::Windows::Forms::UserControl
	{
	public:
		void ViewChangeHandler(int numerOkna) {
			if (numerOkna == 2)
			{
				this->BringToFront();
			}
		}
	public:
		Manu(void)
		{
			InitializeComponent();
			Game::OnViewChange += gcnew  ViewChangeEvent(this, &Manu::ViewChangeHandler);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  NewGameButton;
	protected:
	private: System::Windows::Forms::Button^  LoadGameButton;
	private: System::Windows::Forms::Button^  QuitButton;
	private: System::Windows::Forms::Button^  SaveGameButton;

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
			this->NewGameButton = (gcnew System::Windows::Forms::Button());
			this->LoadGameButton = (gcnew System::Windows::Forms::Button());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->SaveGameButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NewGameButton
			// 
			this->NewGameButton->Location = System::Drawing::Point(371, 195);
			this->NewGameButton->Name = L"NewGameButton";
			this->NewGameButton->Size = System::Drawing::Size(266, 98);
			this->NewGameButton->TabIndex = 0;
			this->NewGameButton->Text = L"New Game";
			this->NewGameButton->UseVisualStyleBackColor = true;
			// 
			// LoadGameButton
			// 
			this->LoadGameButton->Location = System::Drawing::Point(377, 330);
			this->LoadGameButton->Name = L"LoadGameButton";
			this->LoadGameButton->Size = System::Drawing::Size(259, 104);
			this->LoadGameButton->TabIndex = 1;
			this->LoadGameButton->Text = L"Load Game";
			this->LoadGameButton->UseVisualStyleBackColor = true;
			// 
			// QuitButton
			// 
			this->QuitButton->Location = System::Drawing::Point(377, 605);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(260, 101);
			this->QuitButton->TabIndex = 2;
			this->QuitButton->Text = L"Quit";
			this->QuitButton->UseVisualStyleBackColor = true;
			// 
			// SaveGameButton
			// 
			this->SaveGameButton->Location = System::Drawing::Point(377, 465);
			this->SaveGameButton->Name = L"SaveGameButton";
			this->SaveGameButton->Size = System::Drawing::Size(259, 103);
			this->SaveGameButton->TabIndex = 3;
			this->SaveGameButton->Text = L"Save Game";
			this->SaveGameButton->UseVisualStyleBackColor = true;
			// 
			// Manu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->SaveGameButton);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->LoadGameButton);
			this->Controls->Add(this->NewGameButton);
			this->Name = L"Manu";
			this->Size = System::Drawing::Size(1018, 865);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
