#pragma once
#include "vector"

extern std::vector<int> v1 ,v2, v3;
extern bool polOtrEl ;
extern bool sortEl ;
extern int Pol , Otr;
namespace vectorPractca {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
// label2
// 
this->label2->AllowDrop = true;
this->label2->Location = System::Drawing::Point(15, 87);
this->label2->Name = L"label2";
this->label2->Size = System::Drawing::Size(255, 114);
this->label2->TabIndex = 1;
this->label2->Text = L"label2";
// 
// label3
// 
this->label3->AllowDrop = true;
this->label3->Location = System::Drawing::Point(15, 254);
this->label3->Name = L"label3";
this->label3->Size = System::Drawing::Size(255, 114);
this->label3->TabIndex = 2;
this->label3->Text = L"label3";
// 
// label4
// 
this->label4->AllowDrop = true;
this->label4->Location = System::Drawing::Point(15, 402);
this->label4->Name = L"label4";
this->label4->Size = System::Drawing::Size(255, 114);
this->label4->TabIndex = 3;
this->label4->Text = L"label4";
// 
// MyForm2
// 
this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
this->ClientSize = System::Drawing::Size(282, 525);
this->Controls->Add(this->label4);
this->Controls->Add(this->label3);
this->Controls->Add(this->label2);
this->Controls->Add(this->label1);
this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
this->Name = L"MyForm2";
this->Text = L"MyForm2";
this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
this->ResumeLayout(false);
this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "Calc";


		label1->Text = "Результат:";
		if (v1.empty() != true) {

			label2->Text = v1[0].ToString() + " " +
				v1[1].ToString() + " " +
				v1[2].ToString() + " " +
				v1[3].ToString() + " " +
				v1[4].ToString() + " " +
				v1[5].ToString() + " " +
				v1[6].ToString() + " " +
				v1[7].ToString() + " " +
				v1[8].ToString() + " " +
				v1[9].ToString() + " " +
				v1[10].ToString() + " " +
				v1[11].ToString() + " " +
				v1[12].ToString() + " " +
				v1[13].ToString() + " " +
				v1[14].ToString() + " " +
				v1[15].ToString() + " " +
				v1[16].ToString() + " " +
				v1[17].ToString() + " " +
				v1[18].ToString() + " " +
				v1[19].ToString() + " " +
				v1[20].ToString() + " " +
				v1[21].ToString() + " " +
				v1[22].ToString() + " " +
				v1[23].ToString() + " " +
				v1[24].ToString() + " ";
		}
		else
		{
			label2->Text = "Вектор пуст";
		}
		if (polOtrEl == true)
		{
			label3->Visible = true;
			Otr = Pol = 0;
			for (int i = 0; i < v1.size(); i++)
			{
				if (v1[i] < 0)
				{
					Otr++;
					v2.push_back(v1[i]);
				}
				else
				{
					Pol++;
					v3.push_back(v1[i]);
				}
			}
			label3->Text = "Положительных элементов: " + Pol + " Отрицательных элементов: " + Otr;
		}
		else
		{
			label3->Visible = false;
		}

		int buff;
		if (sortEl == true)
		{
			
		
			
			label4->Visible = true;
			for (int i = 0; i < v3.size(); i++)
			{
				for (int j = 0; j < (v3.size() - 1); j++)
				{
					if (v3[j] < v3[j + 1])
					{
						int buf = v3[j];
						v3[j] = v3[j + 1];
						v3[j + 1] = buf;
					}
				}
			}

			if (Pol >= Otr)
			{
				
				v1.clear();
				for (int i = 0; i < v3.size(); i++)
					v1.push_back(v3[i]);
				for (int i = 0; i < v2.size(); i++)
					v1.push_back(v2[i]);
				v2.clear();
				v3.clear();
				
			}
			else
			{
				
				v1.clear();
				for (int i = 0; i < v2.size(); i++)
					v1.push_back(v2[i]);
				for (int i = 0; i < v3.size(); i++)
					v1.push_back(v3[i]);
				v2.clear();
				v3.clear();
			}
			
			label4->Text = v1[0].ToString() + " " +
				v1[1].ToString() + " " +
				v1[2].ToString() + " " +
				v1[3].ToString() + " " +
				v1[4].ToString() + " " +
				v1[5].ToString() + " " +
				v1[6].ToString() + " " +
				v1[7].ToString() + " " +
				v1[8].ToString() + " " +
				v1[9].ToString() + " " +
				v1[10].ToString() + " " +
				v1[11].ToString() + " " +
				v1[12].ToString() + " " +
				v1[13].ToString() + " " +
				v1[14].ToString() + " " +
				v1[15].ToString() + " " +
				v1[16].ToString() + " " +
				v1[17].ToString() + " " +
				v1[18].ToString() + " " +
				v1[19].ToString() + " " +
				v1[20].ToString() + " " +
				v1[21].ToString() + " " +
				v1[22].ToString() + " " +
				v1[23].ToString() + " " +
				v1[24].ToString() + " ";
		}
		else
		{
			label4->Visible = false;
		}
	}
	};
}
