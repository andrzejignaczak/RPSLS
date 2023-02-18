#pragma once
#include "help.h"
#include "logika.h"
#include "Result.h"

namespace RPSLS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gra
	/// </summary>
	public ref class gra : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ playerName;
	private: System::Windows::Forms::Button^ changeName;
	private: System::Windows::Forms::TextBox^ txtBoxPlayerName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtWynik;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ windowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fixedWindowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;

	public:
		gra(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->logika = gcnew Logika();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gra()
		{
			if (this->logika)
			{
				delete this->logika;
			}
			this->logika = nullptr; 
		}

	private: System::Windows::Forms::Button^ rock;
	protected:
	private: System::Windows::Forms::Button^ paper;
	private: System::Windows::Forms::Button^ scissors;
	private: System::Windows::Forms::Button^ lizard;
	private: System::Windows::Forms::Button^ spock;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureGracz;
	private: System::Windows::Forms::PictureBox^ pictureKomputer;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblLicznikG;
	private: System::Windows::Forms::Label^ lblLicznikK;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ newGame;
	private: System::ComponentModel::IContainer^ components;

	private:
		Logika^ logika;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gra::typeid));
			this->rock = (gcnew System::Windows::Forms::Button());
			this->paper = (gcnew System::Windows::Forms::Button());
			this->scissors = (gcnew System::Windows::Forms::Button());
			this->lizard = (gcnew System::Windows::Forms::Button());
			this->spock = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureGracz = (gcnew System::Windows::Forms::PictureBox());
			this->pictureKomputer = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikG = (gcnew System::Windows::Forms::Label());
			this->lblLicznikK = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->newGame = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->playerName = (gcnew System::Windows::Forms::Label());
			this->changeName = (gcnew System::Windows::Forms::Button());
			this->txtBoxPlayerName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtWynik = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->windowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fixedWindowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGracz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKomputer))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rock
			// 
			this->rock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rock.BackgroundImage")));
			this->rock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rock->Enabled = false;
			this->rock->Location = System::Drawing::Point(13, 369);
			this->rock->Name = L"rock";
			this->rock->Size = System::Drawing::Size(130, 130);
			this->rock->TabIndex = 0;
			this->rock->Tag = L"rock";
			this->rock->UseVisualStyleBackColor = true;
			this->rock->Click += gcnew System::EventHandler(this, &gra::button_Click);
			// 
			// paper
			// 
			this->paper->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paper.BackgroundImage")));
			this->paper->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->paper->Enabled = false;
			this->paper->Location = System::Drawing::Point(149, 369);
			this->paper->Name = L"paper";
			this->paper->Size = System::Drawing::Size(130, 130);
			this->paper->TabIndex = 1;
			this->paper->Tag = L"paper";
			this->paper->UseVisualStyleBackColor = true;
			this->paper->Click += gcnew System::EventHandler(this, &gra::button_Click);
			// 
			// scissors
			// 
			this->scissors->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scissors.BackgroundImage")));
			this->scissors->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->scissors->Enabled = false;
			this->scissors->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->scissors->Location = System::Drawing::Point(285, 369);
			this->scissors->Name = L"scissors";
			this->scissors->Size = System::Drawing::Size(130, 130);
			this->scissors->TabIndex = 2;
			this->scissors->Tag = L"scissors";
			this->scissors->UseVisualStyleBackColor = true;
			this->scissors->Click += gcnew System::EventHandler(this, &gra::button_Click);
			// 
			// lizard
			// 
			this->lizard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lizard.BackgroundImage")));
			this->lizard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lizard->Enabled = false;
			this->lizard->Location = System::Drawing::Point(421, 369);
			this->lizard->Name = L"lizard";
			this->lizard->Size = System::Drawing::Size(130, 130);
			this->lizard->TabIndex = 3;
			this->lizard->Tag = L"lizard";
			this->lizard->UseVisualStyleBackColor = true;
			this->lizard->Click += gcnew System::EventHandler(this, &gra::button_Click);
			// 
			// spock
			// 
			this->spock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spock.BackgroundImage")));
			this->spock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spock->Enabled = false;
			this->spock->Location = System::Drawing::Point(557, 369);
			this->spock->Name = L"spock";
			this->spock->Size = System::Drawing::Size(130, 130);
			this->spock->TabIndex = 4;
			this->spock->Tag = L"spock";
			this->spock->UseVisualStyleBackColor = true;
			this->spock->Click += gcnew System::EventHandler(this, &gra::button_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"question.png");
			this->imageList1->Images->SetKeyName(1, L"rock.png");
			this->imageList1->Images->SetKeyName(2, L"paper.png");
			this->imageList1->Images->SetKeyName(3, L"scissors.png");
			this->imageList1->Images->SetKeyName(4, L"lizard.png");
			this->imageList1->Images->SetKeyName(5, L"spock.png");
			// 
			// pictureGracz
			// 
			this->pictureGracz->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureGracz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureGracz.Image")));
			this->pictureGracz->Location = System::Drawing::Point(12, 27);
			this->pictureGracz->Name = L"pictureGracz";
			this->pictureGracz->Size = System::Drawing::Size(250, 250);
			this->pictureGracz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureGracz->TabIndex = 5;
			this->pictureGracz->TabStop = false;
			// 
			// pictureKomputer
			// 
			this->pictureKomputer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureKomputer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureKomputer.Image")));
			this->pictureKomputer->Location = System::Drawing::Point(421, 27);
			this->pictureKomputer->Name = L"pictureKomputer";
			this->pictureKomputer->Size = System::Drawing::Size(250, 250);
			this->pictureKomputer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureKomputer->TabIndex = 6;
			this->pictureKomputer->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(443, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 36);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Sheldon Cooper";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblLicznikG
			// 
			this->lblLicznikG->AutoSize = true;
			this->lblLicznikG->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikG->Location = System::Drawing::Point(279, 89);
			this->lblLicznikG->Name = L"lblLicznikG";
			this->lblLicznikG->Size = System::Drawing::Size(65, 78);
			this->lblLicznikG->TabIndex = 9;
			this->lblLicznikG->Text = L"0";
			// 
			// lblLicznikK
			// 
			this->lblLicznikK->AutoSize = true;
			this->lblLicznikK->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikK->Location = System::Drawing::Point(350, 89);
			this->lblLicznikK->Name = L"lblLicznikK";
			this->lblLicznikK->Size = System::Drawing::Size(65, 78);
			this->lblLicznikK->TabIndex = 10;
			this->lblLicznikK->Text = L"0";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(285, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Help";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gra::help_Click);
			// 
			// reset
			// 
			this->reset->Enabled = false;
			this->reset->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->reset->Location = System::Drawing::Point(285, 27);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(130, 40);
			this->reset->TabIndex = 12;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Visible = false;
			this->reset->Click += gcnew System::EventHandler(this, &gra::reset_Click);
			// 
			// newGame
			// 
			this->newGame->Enabled = false;
			this->newGame->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->newGame->Location = System::Drawing::Point(285, 276);
			this->newGame->Name = L"newGame";
			this->newGame->Size = System::Drawing::Size(130, 40);
			this->newGame->TabIndex = 13;
			this->newGame->Text = L"Next Turn";
			this->newGame->UseVisualStyleBackColor = true;
			this->newGame->Visible = false;
			this->newGame->Click += gcnew System::EventHandler(this, &gra::newGame_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(324, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 55);
			this->label1->TabIndex = 14;
			this->label1->Text = L"-";
			// 
			// playerName
			// 
			this->playerName->AutoSize = true;
			this->playerName->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->playerName->Location = System::Drawing::Point(77, 280);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(0, 36);
			this->playerName->TabIndex = 7;
			this->playerName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// changeName
			// 
			this->changeName->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->changeName->Location = System::Drawing::Point(285, 27);
			this->changeName->Name = L"changeName";
			this->changeName->Size = System::Drawing::Size(130, 40);
			this->changeName->TabIndex = 15;
			this->changeName->Text = L"Player name";
			this->changeName->UseVisualStyleBackColor = true;
			this->changeName->Click += gcnew System::EventHandler(this, &gra::changeName_Click);
			// 
			// txtBoxPlayerName
			// 
			this->txtBoxPlayerName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxPlayerName->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtBoxPlayerName->Location = System::Drawing::Point(227, 538);
			this->txtBoxPlayerName->Name = L"txtBoxPlayerName";
			this->txtBoxPlayerName->Size = System::Drawing::Size(231, 26);
			this->txtBoxPlayerName->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(67, 538);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Player name:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(464, 531);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 40);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Accept";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &gra::plyerName_Click);
			// 
			// txtWynik
			// 
			this->txtWynik->BackColor = System::Drawing::Color::CadetBlue;
			this->txtWynik->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtWynik->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtWynik->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtWynik->Location = System::Drawing::Point(13, 318);
			this->txtWynik->Margin = System::Windows::Forms::Padding(4);
			this->txtWynik->Name = L"txtWynik";
			this->txtWynik->ReadOnly = true;
			this->txtWynik->Size = System::Drawing::Size(674, 36);
			this->txtWynik->TabIndex = 19;
			this->txtWynik->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(699, 24);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->windowToolStripMenuItem,
					this->fixedWindowToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// windowToolStripMenuItem
			// 
			this->windowToolStripMenuItem->Name = L"windowToolStripMenuItem";
			this->windowToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->windowToolStripMenuItem->Text = L"Window";
			this->windowToolStripMenuItem->Click += gcnew System::EventHandler(this, &gra::windowToolStripMenuItem_Click);
			// 
			// fixedWindowToolStripMenuItem
			// 
			this->fixedWindowToolStripMenuItem->Name = L"fixedWindowToolStripMenuItem";
			this->fixedWindowToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->fixedWindowToolStripMenuItem->Text = L"Fixed window";
			this->fixedWindowToolStripMenuItem->Click += gcnew System::EventHandler(this, &gra::fixedWindowToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &gra::exitToolStripMenuItem_Click);
			// 
			// gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(699, 511);
			this->Controls->Add(this->txtWynik);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtBoxPlayerName);
			this->Controls->Add(this->changeName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->newGame);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblLicznikK);
			this->Controls->Add(this->lblLicznikG);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->playerName);
			this->Controls->Add(this->pictureKomputer);
			this->Controls->Add(this->pictureGracz);
			this->Controls->Add(this->spock);
			this->Controls->Add(this->lizard);
			this->Controls->Add(this->scissors);
			this->Controls->Add(this->paper);
			this->Controls->Add(this->rock);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"gra";
			this->Text = L"Rock - Scissors - Paper - Lizard - Spock";
			this->Load += gcnew System::EventHandler(this, &gra::gra_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGracz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKomputer))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==================================================================================================
	private: void warunek()
	{
		if (logika->koniec() == 1)
		{
			//MessageBox::Show("Wygra³o A.I.!\n" + lblLicznikK->Text + " : " + lblLicznikG->Text, "RPLS - Andrzej Ignaczak", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			Result^ res = gcnew Result(logika->koniec(), logika->getLicznikG().ToString(), logika->getLicznikK().ToString(), playerName->Text);
			res->ShowDialog();
			logika->reset_func();
			lblLicznikG->Text = logika->getLicznikG().ToString();
			lblLicznikK->Text = logika->getLicznikK().ToString();
			pictureGracz->Image = imageList1->Images[0];
			pictureKomputer->Image = imageList1->Images[0];
			buttonsEnable();
		}
		if (logika->koniec() == 2)
		{
			//MessageBox::Show("Wygra³ gracz " + playerName->Text + "!\n" + lblLicznikG->Text + " : " + lblLicznikK->Text, "RPLS - Andrzej Ignaczak", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Result^ res = gcnew Result(logika->koniec(), lblLicznikG->Text, lblLicznikK->Text, playerName->Text);
			res->ShowDialog();
			logika->reset_func();
			lblLicznikG->Text = logika->getLicznikG().ToString();
			lblLicznikK->Text = logika->getLicznikK().ToString();
			pictureGracz->Image = imageList1->Images[0];
			pictureKomputer->Image = imageList1->Images[0];
			buttonsEnable();
		}
		return;
	}
		   //==================================================================================================
	private: void buttonsEnable()
	{
		rock->Enabled = true;
		scissors->Enabled = true;
		paper->Enabled = true;
		lizard->Enabled = true;
		spock->Enabled = true;
	}
		   //==================================================================================================
	private: void buttonsDisable()
	{
		rock->Enabled = false;
		scissors->Enabled = false;
		paper->Enabled = false;
		lizard->Enabled = false;
		spock->Enabled = false;
	}
		   //==================================================================================================
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int buttonId = 0;
		Button^ clickedButton = safe_cast<Button^>(sender);
		if (clickedButton == rock)
			buttonId = 1;
		else if (clickedButton == paper)
			buttonId = 2;
		else if (clickedButton == scissors)
			buttonId = 3;
		else if (clickedButton == lizard)
			buttonId = 4;
		else if (clickedButton == spock)
			buttonId = 5;

		logika->setWyborGracza(buttonId);
		pictureGracz->Image = imageList1->Images[logika->getWyborGracza()];
		pictureKomputer->Image = imageList1->Images[logika->getLosowaCyfra()];
		buttonsDisable();
		txtWynik->Text = gcnew String(logika->porownaj().c_str());
		lblLicznikG->Text = logika->getLicznikG().ToString();
		lblLicznikK->Text = logika->getLicznikK().ToString();
		warunek();
	}
		   //==================================================================================================
	private: System::Void gra_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
		   //==================================================================================================
	private: System::Void newGame_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pictureGracz->Image = imageList1->Images[0];
		pictureKomputer->Image = imageList1->Images[0];
		buttonsEnable();
	}
		   //==================================================================================================
	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pictureGracz->Image = imageList1->Images[0];
		pictureKomputer->Image = imageList1->Images[0];
		logika->reset_func();
		lblLicznikG->Text = "0";
		lblLicznikK->Text = "0";
		buttonsEnable();
	}
		   //==================================================================================================
	private: System::Void changeName_Click(System::Object^ sender, System::EventArgs^ e)
	{
		gra::Width = 720;
		gra::Height = 640;
		changeName->Visible = false;
	}
		   //==================================================================================================
	private: System::Void plyerName_Click(System::Object^ sender, System::EventArgs^ e)
	{
		playerName->Text = txtBoxPlayerName->Text;
		gra::Width = 715;
		gra::Height = 550;
		buttonsEnable();
		reset->Enabled = true;
		newGame->Enabled = true;
		reset->Visible = true;
		newGame->Visible = true;
	}
		   //==================================================================================================
	private: System::Void help_Click(System::Object^ sender, System::EventArgs^ e)
	{
		help^ Onas = gcnew help();
		Onas->Show();
	}
		   //==================================================================================================
	private: System::Void windowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		gra::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	}
		   //==================================================================================================
	private: System::Void fixedWindowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		gra::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		TopMost = true;
	}
		   //==================================================================================================
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (MessageBox::Show("Czy wylaczyc grê?", "RPLS - Andrzej Ignaczak", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
};
}
//dodac imie do kalsy i aktualizowac pierwsza strone.
