#pragma once
#include <cctype>

namespace PCmasterCRM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Edit
	/// </summary>
	public ref class Edit : public System::Windows::Forms::Form
	{
	public: DataGridView^ datamy;

	public:
	public: int myID;

	public:
		Edit(DataGridView^ DataMyGrid, int ID)
		{
			datamy = DataMyGrid;
			myID = ID;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::TextBox^ textBox_Name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::TextBox^ textBox_Mobile;
	public: System::Windows::Forms::TextBox^ textBox_Model;
	public: System::Windows::Forms::TextBox^ textBox_Info;

	public: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	public: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	public: System::Windows::Forms::CheckBox^ checkBox1;



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
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_Mobile = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Model = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Info = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(11, 428);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(409, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"EDIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Edit::button1_Click);
			// 
			// textBox_Name
			// 
			this->textBox_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Name->Location = System::Drawing::Point(12, 36);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(404, 29);
			this->textBox_Name->TabIndex = 1;
			this->textBox_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(142, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name Surname";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 384);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Master_ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Model";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Mobile";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Type";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(185, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 24);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Info";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 344);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 24);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Price:";
			// 
			// textBox_Mobile
			// 
			this->textBox_Mobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Mobile->Location = System::Drawing::Point(81, 88);
			this->textBox_Mobile->MaxLength = 12;
			this->textBox_Mobile->Name = L"textBox_Mobile";
			this->textBox_Mobile->Size = System::Drawing::Size(339, 29);
			this->textBox_Mobile->TabIndex = 1;
			this->textBox_Mobile->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_Mobile->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Edit::textBox_Mobile_KeyPress);
			// 
			// textBox_Model
			// 
			this->textBox_Model->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Model->Location = System::Drawing::Point(81, 164);
			this->textBox_Model->Name = L"textBox_Model";
			this->textBox_Model->Size = System::Drawing::Size(339, 29);
			this->textBox_Model->TabIndex = 1;
			this->textBox_Model->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_Info
			// 
			this->textBox_Info->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Info->Location = System::Drawing::Point(11, 223);
			this->textBox_Info->Multiline = true;
			this->textBox_Info->Name = L"textBox_Info";
			this->textBox_Info->Size = System::Drawing::Size(409, 115);
			this->textBox_Info->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(117, 382);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(178, 29);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Ноутбук", L"Комп\'ютер", L"Телефон", L"Телевізор",
					L"Монітор", L"Побутова техніка", L"Маленька техніка"
			});
			this->comboBox1->Location = System::Drawing::Point(81, 126);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(339, 32);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Комп\'ютер";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 1;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(76, 344);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(218, 29);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(318, 361);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(93, 28);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Ready\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 478);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_Info);
			this->Controls->Add(this->textBox_Model);
			this->Controls->Add(this->textBox_Mobile);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Edit";
			this->Text = L"Edit";
			this->Load += gcnew System::EventHandler(this, &Edit::Edit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Edit_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox_Name->Text = Convert::ToString(datamy[1, myID]->Value);
		textBox_Mobile->Text = Convert::ToString(datamy[2, myID]->Value);
		if (Convert::ToString(datamy[3, myID]->Value) != "")
		{
			comboBox1->Text = Convert::ToString(datamy[3, myID]->Value);
		}
		
		textBox_Model->Text = Convert::ToString(datamy[4, myID]->Value);
		textBox_Info->Text = Convert::ToString(datamy[5, myID]->Value);
		double Price = 0;
		if (datamy[6, myID]->Value != "") Price = Convert::ToDouble(datamy[6, myID]->Value);
		else Price = 0; 
		numericUpDown2->Value = Decimal(Price);
		checkBox1->Checked = Convert::ToBoolean(datamy[7, myID]->Value);
		numericUpDown1->Value = Convert::ToInt32(datamy[8, myID]->Value);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		datamy[1, myID]->Value = textBox_Name->Text;
		datamy[2, myID]->Value = textBox_Mobile->Text;
		datamy[3, myID]->Value = comboBox1->Text;
		datamy[4, myID]->Value = textBox_Model->Text;
		datamy[5, myID]->Value = textBox_Info->Text;
		datamy[6, myID]->Value = Convert::ToString(numericUpDown2->Value);
		datamy[7, myID]->Value = checkBox1->Checked;
		datamy[8, myID]->Value = numericUpDown1->Value;
		Close();


	

}
private: System::Void textBox_Mobile_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	if (!std::isdigit(e->KeyChar))
	{
		e->Handled = true;
	}
}
};
}
