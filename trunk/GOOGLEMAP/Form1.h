/// @file Form1.h �D�n�������ɮסA�]�t�ƥ󪺾ާ@�C
#pragma once


namespace GOOGLEMAP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ���K�n
	///
	/// ĵ�i: �p�G�z�ܧ�o�����O���W�١A�N�����ܧ�P�o�����O�Ҩ̾ڤ��Ҧ� .resx �ɮ����p��
	///          Managed �귽�sĶ���u�㪺 'Resource File Name' �ݩʡC
	///          �_�h�A�o�ǳ]�p�u��
	///          �N�L�k�P�o�Ӫ�����p����a�y�t�Ƹ귽
	///          ���T���ʡC
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser;///<�Ψ���ܺ���
	private: System::Windows::Forms::Label^  nameLabel;///<�m�W����
	private: System::Windows::Forms::TextBox^  nameTextBox;///<�ϥΪ̿�J�m�W���a��
	private: System::Windows::Forms::Label^  addrLabel;///<�a�}����
	private: System::Windows::Forms::TextBox^  addrTextBox;///<�ϥΪ̿�J�a�}���a��
	private: System::Windows::Forms::Button^  sendButton;///<"�e�X"���s
	protected: 

	protected: 


	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�o�Ӥ�k�����e�C
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->webBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addrLabel = (gcnew System::Windows::Forms::Label());
			this->addrTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// webBrowser
			// 
			this->webBrowser->Location = System::Drawing::Point(12, 12);
			this->webBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser->Name = L"webBrowser";
			this->webBrowser->Size = System::Drawing::Size(776, 543);
			this->webBrowser->TabIndex = 0;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"�L�n������", 11));
			this->nameLabel->Location = System::Drawing::Point(12, 565);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(54, 19);
			this->nameLabel->TabIndex = 1;
			this->nameLabel->Text = L"�m�W�G";
			this->nameLabel->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// nameTextBox
			// 
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"�L�n������", 11));
			this->nameTextBox->Location = System::Drawing::Point(72, 561);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(101, 27);
			this->nameTextBox->TabIndex = 2;
			// 
			// addrLabel
			// 
			this->addrLabel->AutoSize = true;
			this->addrLabel->Font = (gcnew System::Drawing::Font(L"�L�n������", 11));
			this->addrLabel->Location = System::Drawing::Point(179, 565);
			this->addrLabel->Name = L"addrLabel";
			this->addrLabel->Size = System::Drawing::Size(54, 19);
			this->addrLabel->TabIndex = 3;
			this->addrLabel->Text = L"�a�}�G";
			this->addrLabel->Click += gcnew System::EventHandler(this, &Form1::addrLabel_Click);
			// 
			// addrTextBox
			// 
			this->addrTextBox->Font = (gcnew System::Drawing::Font(L"�L�n������", 11));
			this->addrTextBox->Location = System::Drawing::Point(239, 561);
			this->addrTextBox->Name = L"addrTextBox";
			this->addrTextBox->Size = System::Drawing::Size(478, 27);
			this->addrTextBox->TabIndex = 4;
			// 
			// sendButton
			// 
			this->sendButton->Font = (gcnew System::Drawing::Font(L"�L�n������", 11));
			this->sendButton->Location = System::Drawing::Point(723, 561);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(65, 27);
			this->sendButton->TabIndex = 5;
			this->sendButton->Text = L"�e�X";
			this->sendButton->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->sendButton);
			this->Controls->Add(this->addrTextBox);
			this->Controls->Add(this->addrLabel);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->webBrowser);
			this->Name = L"Form1";
			this->Text = L"GoogleMapWithWindowsForm";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
}

