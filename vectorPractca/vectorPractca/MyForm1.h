#pragma once

#include"MyForm2.h"
#include"vector"
#include"time.h"
#include"stdlib.h"

namespace vectorPractca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
		
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(193, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(273, 83);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(50, 22);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(252, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(225, 176);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 21);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(225, 212);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(98, 21);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox2_CheckedChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 245);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "Input";
		label1->Text = "Число:";
		label2->Text = "Параметры рандома:";
		label3->Text = "-";
		button1->Text = "Ввести";
		checkBox1->Text = "Пол/Отр эл";
		checkBox2->Enabled = false;
		checkBox2->Text = "Сортировать";

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		srand((unsigned)time(NULL));
		int a, b;
		try {
			a = Convert::ToInt32(textBox2->Text);
			b = Convert::ToInt32(textBox3->Text);
			label2->Text = "Параметры рандома:";
		}
		catch (...)
		{
			label2->Text = "Не введён один из:";
		}
		
		try
		{
			for (int i = 0; i < 25; i++)
			{
				if (i == 12 || i == 24)
				{	
						label1->Text = "Число:";
						v1.push_back(Convert::ToInt32(textBox1->Text));
				
				
				}
				else
				{
					v1.push_back(rand() % a - b);
				}
			}
		}
		catch (...)
		{
			label1->Text = "Error";
		}


		if (checkBox1->Checked)
		{
			
			polOtrEl = true;
			
		}
		else
		{
			polOtrEl = false;
		}
		if (checkBox2->Checked)
		{
			sortEl = true;
		}
		else
		{
			sortEl = false;
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		checkBox2->Enabled = true;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
};
	
}
