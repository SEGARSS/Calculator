#pragma once

namespace Kalkulaytor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_Kalkulaytor;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_main;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::TextBox^ textBox;


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
			this->label_Kalkulaytor = (gcnew System::Windows::Forms::Label());
			this->btn_main = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_Kalkulaytor
			// 
			this->label_Kalkulaytor->AutoSize = true;
			this->label_Kalkulaytor->BackColor = System::Drawing::SystemColors::ControlText;
			this->label_Kalkulaytor->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_Kalkulaytor->Location = System::Drawing::Point(12, 18);
			this->label_Kalkulaytor->Name = L"label_Kalkulaytor";
			this->label_Kalkulaytor->Size = System::Drawing::Size(87, 13);
			this->label_Kalkulaytor->TabIndex = 0;
			this->label_Kalkulaytor->Text = L"label_Kalkulaytor";
			// 
			// btn_main
			// 
			this->btn_main->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_main->Location = System::Drawing::Point(15, 51);
			this->btn_main->Name = L"btn_main";
			this->btn_main->Size = System::Drawing::Size(200, 51);
			this->btn_main->TabIndex = 1;
			this->btn_main->Text = L"Нажми на меня";
			this->btn_main->UseVisualStyleBackColor = true;
			this->btn_main->Click += gcnew System::EventHandler(this, &MyForm::btn_main_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 113);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 146);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(15, 211);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(80, 17);
			this->checkBox->TabIndex = 4;
			this->checkBox->Text = L"checkBox1";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(50, 296);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(100, 20);
			this->textBox->TabIndex = 5;
			this->textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(450, 537);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->btn_main);
			this->Controls->Add(this->label_Kalkulaytor);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_main_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label_Kalkulaytor->Text = "Some new";
}
private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if(this->checkBox->Checked)
		this->btn_main->Width = 300;
	else
		this->btn_main->Width = 200;
}
private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if(this->textBox->Text == "Blue")
		this->btn_main->BackColor = Color::Blue;
	else if(this->textBox->Text == "Red")
		this->btn_main->BackColor = Color::Red;
}
};
}
