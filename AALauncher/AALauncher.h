#pragma once

#include "NetworkIP.h"
#include <stdlib.h>
#include <Windows.h>
#include <ShellAPI.h>

namespace AALauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            System::Drawing::Icon ^ ico = gcnew System::Drawing::Icon(L"anaicon.ico");
            this->Icon = ico;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^  panel1;
    protected: 

    private: System::Windows::Forms::Button^  PlayNetworkGame;
    private: System::Windows::Forms::Button^  PlaySinglePlayer;


    private: System::Windows::Forms::Button^  StartServerButton;

    private: System::Windows::Forms::WebBrowser^  webBrowser1;


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
            this->PlayNetworkGame = (gcnew System::Windows::Forms::Button());
            this->PlaySinglePlayer = (gcnew System::Windows::Forms::Button());
            this->StartServerButton = (gcnew System::Windows::Forms::Button());
            this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->PlayNetworkGame);
            this->panel1->Controls->Add(this->PlaySinglePlayer);
            this->panel1->Controls->Add(this->StartServerButton);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel1->Location = System::Drawing::Point(0, 462);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1049, 100);
            this->panel1->TabIndex = 0;
            // 
            // PlayNetworkGame
            // 
            this->PlayNetworkGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->PlayNetworkGame->Location = System::Drawing::Point(406, 21);
            this->PlayNetworkGame->Name = L"PlayNetworkGame";
            this->PlayNetworkGame->Size = System::Drawing::Size(234, 58);
            this->PlayNetworkGame->TabIndex = 2;
            this->PlayNetworkGame->Text = L"Play &Network Game";
            this->PlayNetworkGame->UseVisualStyleBackColor = true;
            this->PlayNetworkGame->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // PlaySinglePlayer
            // 
            this->PlaySinglePlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->PlaySinglePlayer->Location = System::Drawing::Point(665, 21);
            this->PlaySinglePlayer->Name = L"PlaySinglePlayer";
            this->PlaySinglePlayer->Size = System::Drawing::Size(234, 58);
            this->PlaySinglePlayer->TabIndex = 0;
            this->PlaySinglePlayer->Text = L"&Play Single Player";
            this->PlaySinglePlayer->UseVisualStyleBackColor = true;
            this->PlaySinglePlayer->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // StartServerButton
            // 
            this->StartServerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->StartServerButton->Location = System::Drawing::Point(148, 21);
            this->StartServerButton->Name = L"StartServerButton";
            this->StartServerButton->Size = System::Drawing::Size(234, 58);
            this->StartServerButton->TabIndex = 1;
            this->StartServerButton->Text = L"Start A&&A &Server";
            this->StartServerButton->UseVisualStyleBackColor = true;
            this->StartServerButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // webBrowser1
            // 
            this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->webBrowser1->Location = System::Drawing::Point(0, 0);
            this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
            this->webBrowser1->Name = L"webBrowser1";
            this->webBrowser1->ScriptErrorsSuppressed = true;
            this->webBrowser1->Size = System::Drawing::Size(1049, 462);
            this->webBrowser1->TabIndex = 1;
            this->webBrowser1->Url = (gcnew System::Uri(L"http://www.amuletsandarmor.com/index.htm\?launcher=1&classic=1", System::UriKind::Absolute));
            // 
            // Form1
            // 
            this->AcceptButton = this->PlaySinglePlayer;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1049, 562);
            this->Controls->Add(this->webBrowser1);
            this->Controls->Add(this->panel1);
            this->Name = L"Form1";
            this->Text = L"Amulets & Armor Windows Launcher v1.00";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
             HINSTANCE i = ShellExecute(
                NULL,
                "open",
                "AAServer.exe",
                NULL,
                NULL,
                SW_SHOWNOACTIVATE
            );
            if ((int)i < 32) {
                MessageBox::Show("Failed to start server!");
             } else {
             }

             }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
         }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
             NetworkIP ^ f = gcnew NetworkIP;
             if (f->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
                IntPtr p = Marshal::StringToHGlobalAnsi(f->iIPNumberText->Text);
                const char* pAnsi = static_cast<const char*>(p.ToPointer());

                 // Launch connecting to the server
                 HINSTANCE i = ShellExecute(
                    NULL,
                    "open",
                    "AA.exe",
                    pAnsi,
                    NULL,
                    SW_SHOWNORMAL
                );
                // use pAnsi
                Marshal::FreeHGlobal(p);
                if ((int)i < 32) {
                    MessageBox::Show("Failed to start application!");
                 } else {
                    Close();
                 }
             }
             delete f;
         }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
             // Launch as single player
             //system("WinAA.exe");
             HINSTANCE i = ShellExecute(
                NULL,
                "open",
                "AA.exe",
                NULL,
                NULL,
                SW_SHOW
            );
            if ((int)i < 32) {
                MessageBox::Show("Failed to start application!");
             } else {
                Close();
             }
         }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
            this->webBrowser1->Refresh();
         }
private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {
            this->webBrowser1->Refresh();
         }
};
}

