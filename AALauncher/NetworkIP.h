#pragma once

namespace AALauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NetworkIP
	/// </summary>
	public ref class NetworkIP : public System::Windows::Forms::Form
	{
	public:
		NetworkIP(void)
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
		~NetworkIP()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^  iConnectButton;
    public: System::Windows::Forms::TextBox^  iIPNumberText;
    private: System::Windows::Forms::Label^  _label;
    protected: 

    protected: 




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
            this->iConnectButton = (gcnew System::Windows::Forms::Button());
            this->iIPNumberText = (gcnew System::Windows::Forms::TextBox());
            this->_label = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // iConnectButton
            // 
            this->iConnectButton->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->iConnectButton->Enabled = false;
            this->iConnectButton->Location = System::Drawing::Point(295, 35);
            this->iConnectButton->Name = L"iConnectButton";
            this->iConnectButton->Size = System::Drawing::Size(75, 23);
            this->iConnectButton->TabIndex = 0;
            this->iConnectButton->Text = L"Connect";
            this->iConnectButton->UseVisualStyleBackColor = true;
            this->iConnectButton->Click += gcnew System::EventHandler(this, &NetworkIP::iConnectButton_Click);
            // 
            // iIPNumberText
            // 
            this->iIPNumberText->Location = System::Drawing::Point(22, 37);
            this->iIPNumberText->Name = L"iIPNumberText";
            this->iIPNumberText->Size = System::Drawing::Size(267, 20);
            this->iIPNumberText->TabIndex = 2;
            this->iIPNumberText->TextChanged += gcnew System::EventHandler(this, &NetworkIP::textBox1_TextChanged);
            // 
            // _label
            // 
            this->_label->AutoSize = true;
            this->_label->Location = System::Drawing::Point(22, 13);
            this->_label->Name = L"_label";
            this->_label->Size = System::Drawing::Size(137, 13);
            this->_label->TabIndex = 3;
            this->_label->Text = L"Enter Network IP of Server:";
            // 
            // NetworkIP
            // 
            this->AcceptButton = this->iConnectButton;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(390, 79);
            this->Controls->Add(this->_label);
            this->Controls->Add(this->iIPNumberText);
            this->Controls->Add(this->iConnectButton);
            this->Name = L"NetworkIP";
            this->Text = L"AALauncher Network Connection";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
                 if (iIPNumberText->Text->Length == 0) {
                     iConnectButton->Enabled = false;
                 } else {
                     iConnectButton->Enabled = true;
                 }
             }
    private: System::Void iConnectButton_Click(System::Object^  sender, System::EventArgs^  e) {
             }
};
}
