#pragma once
#include "Tree.h"
#include "MarshalString.h"

namespace WinForm {

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
		Tree *t;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			t = new Tree;
			/*t->insert_new_chapter("shgshdshsd");
			t->insert_new_paragraph("dhdjjjd");
			textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());*/
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
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 441);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 21);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Изменить содержимое";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(4, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 21);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Добавить абзац";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(4, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 21);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Добавить параграф";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(4, 312);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 21);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Добавить главу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(607, 304);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 313);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(210, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 355);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(210, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(174, 398);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(210, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(174, 441);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(210, 20);
			this->textBox5->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(425, 310);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 39);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Следующий раздел";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(425, 355);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(159, 36);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Перейти к подразделу";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(425, 397);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(159, 36);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Вернуться назад";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(425, 439);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(159, 36);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Вернуться в начало";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(425, 481);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(159, 34);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Удалить текущий раздел";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(425, 521);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(159, 34);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Удалить подраздел";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 559);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Текст";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string str;
	MarshalString(textBox5->Text, str);
	t->change_content(str);
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}	
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string str;
	MarshalString(textBox4->Text, str);
	t->insert_new_article(str);
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string str;
	MarshalString(textBox2->Text, str);
	t->insert_new_chapter(str);
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	t->next_section();
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	t->open_content();
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	t->return_back();
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	t->return_to_root();
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string str;
	MarshalString(textBox3->Text, str);
	t->insert_new_paragraph(str);
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	t->delete_current_section();
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	t->delete_content();
	textBox1->Text = gcnew String(t->whole_tree_to_string().c_str());
}
};
}
