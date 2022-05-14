#pragma once
#include <cstddef>

namespace ScheudleMaker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
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
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rbutton_2det;
	private: System::Windows::Forms::RadioButton^ rbutton_3det;
	private: System::Windows::Forms::RadioButton^ rbutton_4det;
	private: System::Windows::Forms::RadioButton^ rbutton_5det;
	private: System::Windows::Forms::RadioButton^ rbutton_6det;
	private: System::Windows::Forms::TextBox^ textbox_1det_second;
	protected:










	private: System::Windows::Forms::TextBox^ textbox_1det_first;
	private: System::Windows::Forms::TextBox^ textbox_3det_second;


	private: System::Windows::Forms::TextBox^ textbox_3det_first;
	private: System::Windows::Forms::TextBox^ textbox_2det_second;


	private: System::Windows::Forms::TextBox^ textbox_2det_first;
	private: System::Windows::Forms::TextBox^ textbox_5det_second;


	private: System::Windows::Forms::TextBox^ textbox_5det_first;
	private: System::Windows::Forms::TextBox^ textbox_4det_second;


	private: System::Windows::Forms::TextBox^ textbox_4det_first;
	private: System::Windows::Forms::Button^ button_make;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ table_scheudle;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ secondCol;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textbox_6det_second;

	private: System::Windows::Forms::TextBox^ textbox_6det_first;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::GroupBox^ groupBox2;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rbutton_2det = (gcnew System::Windows::Forms::RadioButton());
			this->rbutton_3det = (gcnew System::Windows::Forms::RadioButton());
			this->rbutton_4det = (gcnew System::Windows::Forms::RadioButton());
			this->rbutton_5det = (gcnew System::Windows::Forms::RadioButton());
			this->rbutton_6det = (gcnew System::Windows::Forms::RadioButton());
			this->textbox_1det_second = (gcnew System::Windows::Forms::TextBox());
			this->textbox_1det_first = (gcnew System::Windows::Forms::TextBox());
			this->textbox_3det_second = (gcnew System::Windows::Forms::TextBox());
			this->textbox_3det_first = (gcnew System::Windows::Forms::TextBox());
			this->textbox_2det_second = (gcnew System::Windows::Forms::TextBox());
			this->textbox_2det_first = (gcnew System::Windows::Forms::TextBox());
			this->textbox_5det_second = (gcnew System::Windows::Forms::TextBox());
			this->textbox_5det_first = (gcnew System::Windows::Forms::TextBox());
			this->textbox_4det_second = (gcnew System::Windows::Forms::TextBox());
			this->textbox_4det_first = (gcnew System::Windows::Forms::TextBox());
			this->button_make = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textbox_6det_second = (gcnew System::Windows::Forms::TextBox());
			this->textbox_6det_first = (gcnew System::Windows::Forms::TextBox());
			this->table_scheudle = (gcnew System::Windows::Forms::DataGridView());
			this->firstCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->secondCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_scheudle))->BeginInit();
			this->SuspendLayout();
			// 
			// rbutton_2det
			// 
			this->rbutton_2det->AutoSize = true;
			this->rbutton_2det->Location = System::Drawing::Point(12, 73);
			this->rbutton_2det->Name = L"rbutton_2det";
			this->rbutton_2det->Size = System::Drawing::Size(69, 17);
			this->rbutton_2det->TabIndex = 2;
			this->rbutton_2det->TabStop = true;
			this->rbutton_2det->Text = L"2 детали";
			this->rbutton_2det->UseVisualStyleBackColor = true;
			this->rbutton_2det->CheckedChanged += gcnew System::EventHandler(this, &mainform::rbuttons_CheckedChanged);
			// 
			// rbutton_3det
			// 
			this->rbutton_3det->AutoSize = true;
			this->rbutton_3det->Location = System::Drawing::Point(12, 95);
			this->rbutton_3det->Name = L"rbutton_3det";
			this->rbutton_3det->Size = System::Drawing::Size(69, 17);
			this->rbutton_3det->TabIndex = 3;
			this->rbutton_3det->TabStop = true;
			this->rbutton_3det->Text = L"3 детали";
			this->rbutton_3det->UseVisualStyleBackColor = true;
			this->rbutton_3det->CheckedChanged += gcnew System::EventHandler(this, &mainform::rbuttons_CheckedChanged);
			// 
			// rbutton_4det
			// 
			this->rbutton_4det->AutoSize = true;
			this->rbutton_4det->Location = System::Drawing::Point(12, 118);
			this->rbutton_4det->Name = L"rbutton_4det";
			this->rbutton_4det->Size = System::Drawing::Size(69, 17);
			this->rbutton_4det->TabIndex = 4;
			this->rbutton_4det->TabStop = true;
			this->rbutton_4det->Text = L"4 детали";
			this->rbutton_4det->UseVisualStyleBackColor = true;
			this->rbutton_4det->CheckedChanged += gcnew System::EventHandler(this, &mainform::rbuttons_CheckedChanged);
			// 
			// rbutton_5det
			// 
			this->rbutton_5det->AutoSize = true;
			this->rbutton_5det->Location = System::Drawing::Point(12, 141);
			this->rbutton_5det->Name = L"rbutton_5det";
			this->rbutton_5det->Size = System::Drawing::Size(75, 17);
			this->rbutton_5det->TabIndex = 5;
			this->rbutton_5det->TabStop = true;
			this->rbutton_5det->Text = L"5 деталей";
			this->rbutton_5det->UseVisualStyleBackColor = true;
			this->rbutton_5det->CheckedChanged += gcnew System::EventHandler(this, &mainform::rbuttons_CheckedChanged);
			// 
			// rbutton_6det
			// 
			this->rbutton_6det->AutoSize = true;
			this->rbutton_6det->Location = System::Drawing::Point(12, 164);
			this->rbutton_6det->Name = L"rbutton_6det";
			this->rbutton_6det->Size = System::Drawing::Size(75, 17);
			this->rbutton_6det->TabIndex = 6;
			this->rbutton_6det->TabStop = true;
			this->rbutton_6det->Text = L"6 деталей";
			this->rbutton_6det->UseVisualStyleBackColor = true;
			this->rbutton_6det->CheckedChanged += gcnew System::EventHandler(this, &mainform::rbuttons_CheckedChanged);
			// 
			// textbox_1det_second
			// 
			this->textbox_1det_second->Location = System::Drawing::Point(84, 36);
			this->textbox_1det_second->Name = L"textbox_1det_second";
			this->textbox_1det_second->Size = System::Drawing::Size(30, 20);
			this->textbox_1det_second->TabIndex = 10;
			// 
			// textbox_1det_first
			// 
			this->textbox_1det_first->Location = System::Drawing::Point(48, 36);
			this->textbox_1det_first->Name = L"textbox_1det_first";
			this->textbox_1det_first->Size = System::Drawing::Size(30, 20);
			this->textbox_1det_first->TabIndex = 9;
			// 
			// textbox_3det_second
			// 
			this->textbox_3det_second->Enabled = false;
			this->textbox_3det_second->Location = System::Drawing::Point(84, 82);
			this->textbox_3det_second->Name = L"textbox_3det_second";
			this->textbox_3det_second->Size = System::Drawing::Size(30, 20);
			this->textbox_3det_second->TabIndex = 14;
			// 
			// textbox_3det_first
			// 
			this->textbox_3det_first->Enabled = false;
			this->textbox_3det_first->Location = System::Drawing::Point(48, 82);
			this->textbox_3det_first->Name = L"textbox_3det_first";
			this->textbox_3det_first->Size = System::Drawing::Size(30, 20);
			this->textbox_3det_first->TabIndex = 13;
			// 
			// textbox_2det_second
			// 
			this->textbox_2det_second->Enabled = false;
			this->textbox_2det_second->Location = System::Drawing::Point(84, 59);
			this->textbox_2det_second->Name = L"textbox_2det_second";
			this->textbox_2det_second->Size = System::Drawing::Size(30, 20);
			this->textbox_2det_second->TabIndex = 12;
			// 
			// textbox_2det_first
			// 
			this->textbox_2det_first->Enabled = false;
			this->textbox_2det_first->Location = System::Drawing::Point(48, 59);
			this->textbox_2det_first->Name = L"textbox_2det_first";
			this->textbox_2det_first->Size = System::Drawing::Size(30, 20);
			this->textbox_2det_first->TabIndex = 11;
			// 
			// textbox_5det_second
			// 
			this->textbox_5det_second->Enabled = false;
			this->textbox_5det_second->Location = System::Drawing::Point(84, 128);
			this->textbox_5det_second->Name = L"textbox_5det_second";
			this->textbox_5det_second->Size = System::Drawing::Size(30, 20);
			this->textbox_5det_second->TabIndex = 18;
			// 
			// textbox_5det_first
			// 
			this->textbox_5det_first->Enabled = false;
			this->textbox_5det_first->Location = System::Drawing::Point(48, 128);
			this->textbox_5det_first->Name = L"textbox_5det_first";
			this->textbox_5det_first->Size = System::Drawing::Size(30, 20);
			this->textbox_5det_first->TabIndex = 17;
			// 
			// textbox_4det_second
			// 
			this->textbox_4det_second->Enabled = false;
			this->textbox_4det_second->Location = System::Drawing::Point(84, 105);
			this->textbox_4det_second->Name = L"textbox_4det_second";
			this->textbox_4det_second->Size = System::Drawing::Size(30, 20);
			this->textbox_4det_second->TabIndex = 16;
			// 
			// textbox_4det_first
			// 
			this->textbox_4det_first->Enabled = false;
			this->textbox_4det_first->Location = System::Drawing::Point(48, 105);
			this->textbox_4det_first->Name = L"textbox_4det_first";
			this->textbox_4det_first->Size = System::Drawing::Size(30, 20);
			this->textbox_4det_first->TabIndex = 15;
			// 
			// button_make
			// 
			this->button_make->Location = System::Drawing::Point(13, 204);
			this->button_make->Name = L"button_make";
			this->button_make->Size = System::Drawing::Size(75, 23);
			this->button_make->TabIndex = 19;
			this->button_make->Text = L"Составить";
			this->button_make->UseVisualStyleBackColor = true;
			this->button_make->Click += gcnew System::EventHandler(this, &mainform::button_make_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"I";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(91, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"II";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textbox_6det_second);
			this->groupBox1->Controls->Add(this->textbox_6det_first);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textbox_5det_second);
			this->groupBox1->Controls->Add(this->textbox_5det_first);
			this->groupBox1->Controls->Add(this->textbox_4det_second);
			this->groupBox1->Controls->Add(this->textbox_4det_first);
			this->groupBox1->Controls->Add(this->textbox_3det_second);
			this->groupBox1->Controls->Add(this->textbox_3det_first);
			this->groupBox1->Controls->Add(this->textbox_2det_second);
			this->groupBox1->Controls->Add(this->textbox_2det_first);
			this->groupBox1->Controls->Add(this->textbox_1det_second);
			this->groupBox1->Controls->Add(this->textbox_1det_first);
			this->groupBox1->Location = System::Drawing::Point(94, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(128, 186);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Время изготовления";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"6-ая";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"5-ая";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"4-ая";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"3-я";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"2-ая";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"1-ая";
			// 
			// textbox_6det_second
			// 
			this->textbox_6det_second->Enabled = false;
			this->textbox_6det_second->Location = System::Drawing::Point(84, 151);
			this->textbox_6det_second->Name = L"textbox_6det_second";
			this->textbox_6det_second->Size = System::Drawing::Size(30, 20);
			this->textbox_6det_second->TabIndex = 23;
			// 
			// textbox_6det_first
			// 
			this->textbox_6det_first->Enabled = false;
			this->textbox_6det_first->Location = System::Drawing::Point(48, 151);
			this->textbox_6det_first->Name = L"textbox_6det_first";
			this->textbox_6det_first->Size = System::Drawing::Size(30, 20);
			this->textbox_6det_first->TabIndex = 22;
			// 
			// table_scheudle
			// 
			this->table_scheudle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_scheudle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->firstCol,
					this->secondCol
			});
			this->table_scheudle->Location = System::Drawing::Point(228, 33);
			this->table_scheudle->Name = L"table_scheudle";
			this->table_scheudle->RowHeadersVisible = false;
			this->table_scheudle->Size = System::Drawing::Size(204, 150);
			this->table_scheudle->TabIndex = 23;
			// 
			// firstCol
			// 
			this->firstCol->HeaderText = L"";
			this->firstCol->Name = L"firstCol";
			this->firstCol->ReadOnly = true;
			this->firstCol->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// secondCol
			// 
			this->secondCol->HeaderText = L"";
			this->secondCol->Name = L"secondCol";
			this->secondCol->ReadOnly = true;
			this->secondCol->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// button_clear
			// 
			this->button_clear->Enabled = false;
			this->button_clear->Location = System::Drawing::Point(94, 204);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(75, 23);
			this->button_clear->TabIndex = 24;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &mainform::button_clear_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(4, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(84, 186);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Количество деталей";
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 233);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->table_scheudle);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_make);
			this->Controls->Add(this->rbutton_6det);
			this->Controls->Add(this->rbutton_5det);
			this->Controls->Add(this->rbutton_4det);
			this->Controls->Add(this->rbutton_3det);
			this->Controls->Add(this->rbutton_2det);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"mainform";
			this->Text = L"Составитель расписаний";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_scheudle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		inline int min(int a, int b) { // вовзрат минимума, чтоб без лишних библиотек
			return (a < b) ? a : b;
		}

	private:
		System::Void rbuttons_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			unsigned int selectedRadio = 0;
			if (rbutton_2det->Checked) selectedRadio = 2;
			else if (rbutton_3det->Checked) selectedRadio = 3;
			else if (rbutton_4det->Checked) selectedRadio = 4;
			else if (rbutton_5det->Checked) selectedRadio = 5;
			else if (rbutton_6det->Checked) selectedRadio = 6;
			else MessageBox::Show("Ошибка при выборе деталей", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

			switch (selectedRadio)
			{
			case 2:
				textbox_2det_first->Enabled = true;
				textbox_2det_second->Enabled = true;

				textbox_3det_first->Enabled = false;
				textbox_3det_second->Enabled = false;
				textbox_4det_first->Enabled = false;
				textbox_4det_second->Enabled = false;
				textbox_5det_first->Enabled = false;
				textbox_5det_second->Enabled = false;
				textbox_6det_first->Enabled = false;
				textbox_6det_second->Enabled = false;
				break;

			case 3:
				textbox_2det_first->Enabled = true;
				textbox_2det_second->Enabled = true;
				textbox_3det_first->Enabled = true;
				textbox_3det_second->Enabled = true;

				textbox_4det_first->Enabled = false;
				textbox_4det_second->Enabled = false;
				textbox_5det_first->Enabled = false;
				textbox_5det_second->Enabled = false;
				textbox_6det_first->Enabled = false;
				textbox_6det_second->Enabled = false;
				break;

			case 4:
				textbox_2det_first->Enabled = true;
				textbox_2det_second->Enabled = true;
				textbox_3det_first->Enabled = true;
				textbox_3det_second->Enabled = true;
				textbox_4det_first->Enabled = true;
				textbox_4det_second->Enabled = true;

				textbox_5det_first->Enabled = false;
				textbox_5det_second->Enabled = false;
				textbox_6det_first->Enabled = false;
				textbox_6det_second->Enabled = false;
				break;

			case 5:
				textbox_2det_first->Enabled = true;
				textbox_2det_second->Enabled = true;
				textbox_3det_first->Enabled = true;
				textbox_3det_second->Enabled = true;
				textbox_4det_first->Enabled = true;
				textbox_4det_second->Enabled = true;
				textbox_5det_first->Enabled = true;
				textbox_5det_second->Enabled = true;

				textbox_6det_first->Enabled = false;
				textbox_6det_second->Enabled = false;
				break;

			case 6:
				textbox_2det_first->Enabled = true;
				textbox_2det_second->Enabled = true;
				textbox_3det_first->Enabled = true;
				textbox_3det_second->Enabled = true;
				textbox_4det_first->Enabled = true;
				textbox_4det_second->Enabled = true;
				textbox_5det_first->Enabled = true;
				textbox_5det_second->Enabled = true;
				textbox_6det_first->Enabled = true;
				textbox_6det_second->Enabled = true;
				break;

			default:
				MessageBox::Show("Ошибка при преобразовании", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
	private:
		System::Void button_make_Click(System::Object^ sender, System::EventArgs^ e) {
			unsigned int selectedRadio = 0;
			array<int, 2>^ cost = gcnew array<int, 2>(15, 15);
			array<int, 2>^ adj = gcnew array<int, 2>(15, 15);

			const int vert = 2; //количество "вертикалей", то есть станков

			if (rbutton_2det->Checked) selectedRadio = 2;
			else if (rbutton_3det->Checked) selectedRadio = 3;
			else if (rbutton_4det->Checked) selectedRadio = 4;
			else if (rbutton_5det->Checked) selectedRadio = 5;
			else if (rbutton_6det->Checked) selectedRadio = 6;

			table_scheudle->ColumnCount = vert;
			table_scheudle->RowCount = selectedRadio;

			int edge = selectedRadio * 2; // чтобы создать еще один столбец таблицы (требуется знать количество деталей)

			switch (selectedRadio)
			{
			case 2:
				adj[1, 1] = Convert::ToInt32(textbox_1det_first->Text);
				adj[1, 2] = Convert::ToInt32(textbox_1det_second->Text);
				adj[2, 1] = Convert::ToInt32(textbox_2det_first->Text);
				adj[2, 2] = Convert::ToInt32(textbox_2det_second->Text);
				break;
			case 3:
				adj[1, 1] = Convert::ToInt32(textbox_1det_first->Text);
				adj[1, 2] = Convert::ToInt32(textbox_1det_second->Text);
				adj[2, 1] = Convert::ToInt32(textbox_2det_first->Text);
				adj[2, 2] = Convert::ToInt32(textbox_2det_second->Text);
				adj[3, 1] = Convert::ToInt32(textbox_3det_first->Text);
				adj[3, 2] = Convert::ToInt32(textbox_3det_second->Text);
				break;
			case 4:
				adj[1, 1] = Convert::ToInt32(textbox_1det_first->Text);
				adj[1, 2] = Convert::ToInt32(textbox_1det_second->Text);
				adj[2, 1] = Convert::ToInt32(textbox_2det_first->Text);
				adj[2, 2] = Convert::ToInt32(textbox_2det_second->Text);
				adj[3, 1] = Convert::ToInt32(textbox_3det_first->Text);
				adj[3, 2] = Convert::ToInt32(textbox_3det_second->Text);
				adj[4, 1] = Convert::ToInt32(textbox_4det_first->Text);
				adj[4, 2] = Convert::ToInt32(textbox_4det_second->Text);
				break;
			case 5:
				adj[1, 1] = Convert::ToInt32(textbox_1det_first->Text);
				adj[1, 2] = Convert::ToInt32(textbox_1det_second->Text);
				adj[2, 1] = Convert::ToInt32(textbox_2det_first->Text);
				adj[2, 2] = Convert::ToInt32(textbox_2det_second->Text);
				adj[3, 1] = Convert::ToInt32(textbox_3det_first->Text);
				adj[3, 2] = Convert::ToInt32(textbox_3det_second->Text);
				adj[4, 1] = Convert::ToInt32(textbox_4det_first->Text);
				adj[4, 2] = Convert::ToInt32(textbox_4det_second->Text);
				adj[5, 1] = Convert::ToInt32(textbox_5det_first->Text);
				adj[5, 2] = Convert::ToInt32(textbox_5det_second->Text);
				break;
			case 6:
				adj[1, 1] = Convert::ToInt32(textbox_1det_first->Text);
				adj[1, 2] = Convert::ToInt32(textbox_1det_second->Text);
				adj[2, 1] = Convert::ToInt32(textbox_2det_first->Text);
				adj[2, 2] = Convert::ToInt32(textbox_2det_second->Text);
				adj[3, 1] = Convert::ToInt32(textbox_3det_first->Text);
				adj[3, 2] = Convert::ToInt32(textbox_3det_second->Text);
				adj[4, 1] = Convert::ToInt32(textbox_4det_first->Text);
				adj[4, 2] = Convert::ToInt32(textbox_4det_second->Text);
				adj[5, 1] = Convert::ToInt32(textbox_5det_first->Text);
				adj[5, 2] = Convert::ToInt32(textbox_5det_second->Text);
				adj[6, 1] = Convert::ToInt32(textbox_6det_first->Text);
				adj[6, 2] = Convert::ToInt32(textbox_6det_second->Text);
				break;
			default:
				MessageBox::Show("Ошибка при подсчете расписания", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}

			for (int k = 1; k <= vert; k++)
				for (int i = 1; i <= edge; i++)
					for (int j = 1; j <= edge; j++)
						adj[i, j] = min(adj[i, j], adj[i, k] + adj[k, j]); // поиск минимума среди элементов строки

			for (int i = 1; i <= edge; i++) {
				for (int j = 1; j <= edge; j++) {
					if (adj[i, j] != 0)
						table_scheudle->Rows[i - 1]->Cells[j - 1]->Value = adj[i, j];
				}
			}
			button_make->Enabled = false;
			button_clear->Enabled = true;
		}

	private:
		System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
			table_scheudle->Rows->Clear();

			textbox_1det_first->Clear();
			textbox_1det_second->Clear();
			textbox_2det_first->Clear();
			textbox_2det_second->Clear();
			textbox_3det_first->Clear();
			textbox_3det_second->Clear();
			textbox_4det_first->Clear();
			textbox_4det_second->Clear();
			textbox_5det_first->Clear();
			textbox_5det_second->Clear();
			textbox_6det_first->Clear();
			textbox_6det_second->Clear();

			button_make->Enabled = true;
			button_clear->Enabled = false;
		}
	};
}

