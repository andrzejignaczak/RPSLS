#pragma once
#include "logika.h"

namespace RPSLS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Result
	/// </summary>
	public ref class Result : public System::Windows::Forms::Form
	{

	public:
		Result(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Result(int who, String^ pointsP, String^ pointsK, String^ namePlayer)
		{
			InitializeComponent();
			pG = pointsP;
			pK = pointsK;
			kto = who;
			pName = namePlayer;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Result()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ winnerBox;
	private: System::ComponentModel::IContainer^ components;
		   String^ pG;
		   String^ pK;
		   int kto;
		   String^ pName;

	private: System::Windows::Forms::Label^ lblData;
	protected:

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
			this->winnerBox = (gcnew System::Windows::Forms::PictureBox());
			this->lblData = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winnerBox))->BeginInit();
			this->SuspendLayout();
			// 
			// winnerBox
			// 
			this->winnerBox->Location = System::Drawing::Point(19, 78);
			this->winnerBox->Margin = System::Windows::Forms::Padding(10);
			this->winnerBox->Name = L"winnerBox";
			this->winnerBox->Size = System::Drawing::Size(300, 200);
			this->winnerBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->winnerBox->TabIndex = 1;
			this->winnerBox->TabStop = false;
			// 
			// lblData
			// 
			this->lblData->AutoSize = true;
			this->lblData->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblData->Location = System::Drawing::Point(12, 9);
			this->lblData->Name = L"lblData";
			this->lblData->Size = System::Drawing::Size(152, 59);
			this->lblData->TabIndex = 2;
			this->lblData->Text = L"Wynik";
			// 
			// Result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(384, 308);
			this->Controls->Add(this->lblData);
			this->Controls->Add(this->winnerBox);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Result";
			this->Text = L"Result";
			this->Load += gcnew System::EventHandler(this, &Result::Result_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Result::Result_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winnerBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int wlos1() {
		int wlos = rand() % 4 + 1;
		return wlos;
	}
	private: int wlos2() {
		int wlos = rand() % 6 + 5;
		return wlos;
	}

	private: void los()
	{
		if (kto == 1) {
			lblData->Text = ("Winner - Sheldon!    " + pG + " : " + pK);
			int winner = wlos1();
			System::String^ projectFolder = System::IO::Path::GetFullPath(Application::StartupPath + "..\\..\\..\\RPSLS\\Images\\");
			System::String^ gifFile = System::IO::Path::Combine(projectFolder, winner + ".gif");
			System::Drawing::Image^ image = System::Drawing::Image::FromFile(gifFile);
			this->winnerBox->Image = image;
		}
		if (kto == 2)
		{
			lblData->Text = ("Winner - " + pName + "!    " + pG + " : " + pK);
			int winner = wlos2();
			System::String^ projectFolder = System::IO::Path::GetFullPath(Application::StartupPath + "..\\..\\..\\RPSLS\\Images\\");
			System::String^ gifFile = System::IO::Path::Combine(projectFolder, winner + ".gif");
			System::Drawing::Image^ image = System::Drawing::Image::FromFile(gifFile);
			this->winnerBox->Image = image;
		}
	}

	private: System::Void Result_Load(System::Object^ sender, System::EventArgs^ e) {
		los();

	}
	private: System::Void Result_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ' ') {
			this->Close();
		}
	}
	};
}
