#include "Edit.h"
#include "Me.h"
#pragma once

bool colored = true;
int pos = 0;

namespace PCmasterCRM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;

	/// <summary>
	/// </summary>
	public ref class CRM : public System::Windows::Forms::Form
	{
	public:
		CRM(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// </summary>
		~CRM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ допомогаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завантажитиToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mobile;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Info;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Ready;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Master_ID;
	private: System::Windows::Forms::ToolStripMenuItem^ функціїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ColoredToolStripMenu;
	private: System::Windows::Forms::TabControl^ TabControl1;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ додатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редагуватиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видалитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оновитиIDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ знищитиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тестToolStripMenuItem;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CRM::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завантажитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функціїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ColoredToolStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оновитиIDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->знищитиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тестToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->допомогаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mobile = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Info = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ready = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Master_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->додатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редагуватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видалитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->TabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->файлToolStripMenuItem,
					this->функціїToolStripMenuItem, this->допомогаToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1139, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->зберегтиToolStripMenuItem,
					this->завантажитиToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->зберегтиToolStripMenuItem->Text = L"Зберегти";
			this->зберегтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::зберегтиToolStripMenuItem_Click);
			// 
			// завантажитиToolStripMenuItem
			// 
			this->завантажитиToolStripMenuItem->Name = L"завантажитиToolStripMenuItem";
			this->завантажитиToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->завантажитиToolStripMenuItem->Text = L"Завантажити";
			this->завантажитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::завантажитиToolStripMenuItem_Click);
			// 
			// функціїToolStripMenuItem
			// 
			this->функціїToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ColoredToolStripMenu,
					this->оновитиIDToolStripMenuItem, this->знищитиДаніToolStripMenuItem, this->тестToolStripMenuItem
			});
			this->функціїToolStripMenuItem->Name = L"функціїToolStripMenuItem";
			this->функціїToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->функціїToolStripMenuItem->Text = L"Функції";
			// 
			// ColoredToolStripMenu
			// 
			this->ColoredToolStripMenu->Name = L"ColoredToolStripMenu";
			this->ColoredToolStripMenu->Size = System::Drawing::Size(150, 22);
			this->ColoredToolStripMenu->Text = L"Колір: Ні";
			this->ColoredToolStripMenu->Click += gcnew System::EventHandler(this, &CRM::проявитиНеготовіToolStripMenuItem_Click);
			// 
			// оновитиIDToolStripMenuItem
			// 
			this->оновитиIDToolStripMenuItem->Name = L"оновитиIDToolStripMenuItem";
			this->оновитиIDToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->оновитиIDToolStripMenuItem->Text = L"Оновити ID";
			this->оновитиIDToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::оновитиIDToolStripMenuItem_Click);
			// 
			// знищитиДаніToolStripMenuItem
			// 
			this->знищитиДаніToolStripMenuItem->Name = L"знищитиДаніToolStripMenuItem";
			this->знищитиДаніToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->знищитиДаніToolStripMenuItem->Text = L"Знищити дані";
			this->знищитиДаніToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::знищитиДаніToolStripMenuItem_Click);
			// 
			// тестToolStripMenuItem
			// 
			this->тестToolStripMenuItem->Name = L"тестToolStripMenuItem";
			this->тестToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->тестToolStripMenuItem->Text = L"Друк";
			this->тестToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::тестToolStripMenuItem_Click);
			// 
			// допомогаToolStripMenuItem
			// 
			this->допомогаToolStripMenuItem->Name = L"допомогаToolStripMenuItem";
			this->допомогаToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->допомогаToolStripMenuItem->Text = L"Допомога";
			this->допомогаToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::допомогаToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::вихідToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->ID, this->Name_Surname,
					this->Mobile, this->Type, this->Model, this->Info, this->Price, this->Ready, this->Master_ID
			});
			this->dataGridView1->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(1117, 430);
			this->dataGridView1->TabIndex = 1;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Name_Surname
			// 
			this->Name_Surname->HeaderText = L"Name_Surname";
			this->Name_Surname->Name = L"Name_Surname";
			this->Name_Surname->ReadOnly = true;
			// 
			// Mobile
			// 
			this->Mobile->HeaderText = L"Mobile";
			this->Mobile->Name = L"Mobile";
			this->Mobile->ReadOnly = true;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Type";
			this->Type->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Ноутбук", L"Комп\'ютер", L"Телефон", L"Телевізор",
					L"Монітор", L"Побутова техніка", L"Маленька техніка"
			});
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			// 
			// Model
			// 
			this->Model->HeaderText = L"Model";
			this->Model->Name = L"Model";
			this->Model->ReadOnly = true;
			// 
			// Info
			// 
			this->Info->HeaderText = L"Info";
			this->Info->Name = L"Info";
			this->Info->ReadOnly = true;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// Ready
			// 
			this->Ready->HeaderText = L"Ready";
			this->Ready->Name = L"Ready";
			this->Ready->ReadOnly = true;
			// 
			// Master_ID
			// 
			this->Master_ID->HeaderText = L"Master_ID";
			this->Master_ID->Name = L"Master_ID";
			this->Master_ID->ReadOnly = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->додатиToolStripMenuItem,
					this->редагуватиToolStripMenuItem, this->видалитиToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->contextMenuStrip1->Size = System::Drawing::Size(135, 70);
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->додатиToolStripMenuItem->Text = L"Додати";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::додатиToolStripMenuItem_Click);
			// 
			// редагуватиToolStripMenuItem
			// 
			this->редагуватиToolStripMenuItem->Name = L"редагуватиToolStripMenuItem";
			this->редагуватиToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->редагуватиToolStripMenuItem->Text = L"Редагувати";
			this->редагуватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::редагуватиToolStripMenuItem_Click);
			// 
			// видалитиToolStripMenuItem
			// 
			this->видалитиToolStripMenuItem->Name = L"видалитиToolStripMenuItem";
			this->видалитиToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->видалитиToolStripMenuItem->Text = L"Видалити";
			this->видалитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &CRM::видалитиToolStripMenuItem_Click);
			// 
			// TabControl1
			// 
			this->TabControl1->Controls->Add(this->tabPage1);
			this->TabControl1->Controls->Add(this->tabPage2);
			this->TabControl1->Location = System::Drawing::Point(0, 27);
			this->TabControl1->Name = L"TabControl1";
			this->TabControl1->SelectedIndex = 0;
			this->TabControl1->Size = System::Drawing::Size(1139, 468);
			this->TabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1131, 442);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Таблиця";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1131, 442);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Картка ремонту";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(994, 7);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 205);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Вперед";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CRM::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(994, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 218);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CRM::button1_Click_1);
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(11, 218);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(977, 196);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Price";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(49, 7);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 25);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Price";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(97, 41);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 25);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Price";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(193, 77);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 25);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Price";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(69, 115);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 25);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Price";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(116, 154);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 25);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Price";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(577, 414);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 25);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Price";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(345, 414);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 25);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Price";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(78, 414);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 25);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Price";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(440, 414);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"ID Майстра:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(215, 414);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(124, 25);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Готовність:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 414);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Ціна:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(245, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Додаткова інформація:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Модель: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Тип:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Номер телефону: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Клієнт:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// CRM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1139, 497);
			this->Controls->Add(this->TabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CRM";
			this->Text = L"PC Master";
			this->Load += gcnew System::EventHandler(this, &CRM::CRM_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->TabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ fname; // глобальна змінна - ім’я файла


	private: System::Void CRM_Load(System::Object^ sender, System::EventArgs^ e) {
		fname = "CRM.bin";
		label9->Text = "Немає данних!";
		label10->Text = "Немає данних!";
		label11->Text = "Немає данних!";
		label12->Text = "Немає данних!";
		label13->Text = "Немає данних!";
		label14->Text = "Немає данних!";
		label15->Text = "Немає данних!";
		label16->Text = "Немає данних!";
		label18->Text = "Немає данних!";
	}

	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BinaryWriter^ fb = gcnew BinaryWriter(File::Open(fname, FileMode::Create));
		// або замість цієї команди можна скористатися двома такими 
		// FileStream^ phons = gcnew FileStream(fname, FileMode::OpenOrCreate);
		// BinaryWriter^ fb = gcnew BinaryWriter(phons);
		//fb->Seek(0, SeekOrigin::End); // перейти у кінець файла для дописування даних
		try
		{
			int k = dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible);
			for (int i = 0; i < k; i++)
			{
				if (!Convert::ToBoolean(dataGridView1[7, i]->Value))
				{
					String^ ID = Convert::ToString(dataGridView1[0, i]->Value); fb->Write(ID);
					String^ Name_Surname = Convert::ToString(dataGridView1[1, i]->Value); fb->Write(Name_Surname);
					String^ Mobile = Convert::ToString(dataGridView1[2, i]->Value); fb->Write(Mobile);
					String^ Type = Convert::ToString(dataGridView1[3, i]->Value); fb->Write(Type);
					String^ Model = Convert::ToString(dataGridView1[4, i]->Value); fb->Write(Model);
					String^ Info = Convert::ToString(dataGridView1[5, i]->Value); fb->Write(Info);
					double Price = 0;
					if (dataGridView1[6, i]->Value != "") Price = Convert::ToDouble(dataGridView1[6, i]->Value);
					else Price = 0; fb->Write(Price);
					bool Ready = Convert::ToBoolean(dataGridView1[7, i]->Value); fb->Write(Ready);
					int Master_ID = Convert::ToInt32(dataGridView1[8, i]->Value); fb->Write(Master_ID);
				}
				
			}
			MessageBox::Show("Файл записано!");
			//dataGridView1->Rows->Clear();
		}
		finally
		{
			fb->Close();
		}
	}

	private: System::Void завантажитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		if (File::Exists(fname) == false)
		{
			MessageBox::Show("Файл відсутній!"); return;
		}
		BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(fname));
		try {
			while (fb->BaseStream->Position < fb->BaseStream->Length)
			{
				String^ ID = fb->ReadString();
				String^ Name_Surname = fb->ReadString();
				String^ Mobile = fb->ReadString();
				String^ Type = fb->ReadString();
				String^ Model = fb->ReadString();
				String^ Info = fb->ReadString();
				double Price = fb->ReadDouble();
				bool Ready = fb->ReadBoolean();
				int Master_ID = fb->ReadInt32();
				dataGridView1->Rows->Add(ID, Name_Surname, Mobile, Type, Model, Info, Price, Ready, Master_ID);
			}
			MessageBox::Show("Завантажено!");
		}
		finally
		{
			fb->Close();
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Add(dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible), "", "", "", "", "", "");
	}
	private: System::Void проявитиНеготовіToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colored) {
			this->ColoredToolStripMenu->Text = L"Колір: Так";
			for each (DataGridViewRow ^ row in dataGridView1->Rows) {
				if (Convert::ToBoolean(row->Cells[7]->Value) == true)
				{
					row->DefaultCellStyle->BackColor = Color::LightGreen;
				}
				else {
					row->DefaultCellStyle->BackColor = Color::OrangeRed;
				}
			}
		}
		else {
			this->ColoredToolStripMenu->Text = L"Колір: Ні";
			for each (DataGridViewRow ^ row in dataGridView1->Rows) {
				row->DefaultCellStyle->BackColor = Color::White;

			}
		}
		colored = !colored;
	}
	private: System::Void додатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Rows->Add(dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible) + 1, "", "", "", "", "", "");
		//dataGridView1[1, 0]->Value = dataGridView1->CurrentRow->Index;
		Edit^ f = gcnew Edit(dataGridView1, dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible) - 1);
		f->Text = "Додавання";
		f->button1->Text = "Додавання";
		f->ShowDialog();
	}

	private: System::Void видалитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int rowIndexToDelete = dataGridView1->CurrentRow->Index; // встановлюємо індекс рядка для видалення

		if (dataGridView1->Rows->Count > rowIndexToDelete) // перевіряємо чи існує рядок з таким індексом
		{
			dataGridView1->Rows->RemoveAt(rowIndexToDelete); // видаляємо рядок з відповідним індексом
			MessageBox::Show("Видалено!");
			return;
		}
		MessageBox::Show("Щось пішло не так!");
	}

	private: System::Void оновитиIDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 1;
		for each (DataGridViewRow ^ row in dataGridView1->Rows) { row->Cells[0]->Value = i; i++; }
	}
	private: System::Void редагуватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->CurrentRow != nullptr)
		{
			Edit^ f = gcnew Edit(dataGridView1, dataGridView1->CurrentRow->Index);
			f->ShowDialog();
		}
		else {
			MessageBox::Show("Щось пішло не так! Виберіть комірку!");
		}
		
	}
	private: System::Void знищитиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		//dataGridView.Refresh();
	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
	{
		// Вказуємо що буде друкуватися
		Bitmap^ bmp = gcnew Bitmap(this->ClientSize.Width + 200, this->ClientSize.Height + 200);
		this->DrawToBitmap(bmp, System::Drawing::Rectangle(0, 0, this->ClientSize.Width + 200, this->ClientSize.Height + 200));
		e->Graphics->DrawImage(bmp, Point(0, 0));
		delete bmp;
	}
	private: System::Void тестToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Створимо новий принтовий діалог
		System::Windows::Forms::PrintDialog^ printDialog1 = gcnew System::Windows::Forms::PrintDialog();
		System::Drawing::Printing::PrintDocument^ printDoc = gcnew System::Drawing::Printing::PrintDocument();

		System::Windows::Forms::DialogResult result = printDialog1->ShowDialog();
		// якщо усе добре - друк
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			printDoc->DocumentName = "Назва файла";
			printDoc->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &CRM::printDocument1_PrintPage);

			printDoc->PrinterSettings = printDialog1->PrinterSettings;

			printPreviewDialog1->Document = printDoc;
			printPreviewDialog1->ShowDialog();

			printDoc->Print();
		}
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (0 == dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible))
		{
			label9->Text = "Немає данних!";
			label10->Text = "Немає данних!";
			label11->Text = "Немає данних!";
			label12->Text = "Немає данних!";
			label13->Text = "Немає данних!";
			label14->Text = "Немає данних!";
			label15->Text = "Немає данних!";
			label16->Text = "Немає данних!";
			label18->Text = "Немає данних!";
			return;
		}
		else {}

		label16->Text = Convert::ToString(dataGridView1[0, pos]->Value);
		label15->Text = Convert::ToString(dataGridView1[1, pos]->Value);
		label14->Text = Convert::ToString(dataGridView1[2, pos]->Value);

		label13->Text = Convert::ToString(dataGridView1[3, pos]->Value);
		label12->Text = Convert::ToString(dataGridView1[4, pos]->Value);
		double Price = 0;
		if (dataGridView1[6, pos]->Value != "") Price = Convert::ToDouble(dataGridView1[6, pos]->Value);
		else Price = 0;
		label9->Text = Convert::ToString(Price) + " Грн.";
		label11->Text = Convert::ToString(dataGridView1[5, pos]->Value);
		label18->Text = Convert::ToString(dataGridView1[7, pos]->Value);
		label10->Text = Convert::ToString(dataGridView1[8, pos]->Value);

		   if (pos < dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible)-1)
		   {
			   pos++;
		   }
		   else {
			   pos = 0;
		   }
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (0 == dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible))
	{
		label9->Text = "Немає данних!";
		label10->Text = "Немає данних!";
		label11->Text = "Немає данних!";
		label12->Text = "Немає данних!";
		label13->Text = "Немає данних!";
		label14->Text = "Немає данних!";
		label15->Text = "Немає данних!";
		label16->Text = "Немає данних!";
		label18->Text = "Немає данних!";
		return;
	}
	else {}

	label16->Text = Convert::ToString(dataGridView1[0, pos]->Value);
	label15->Text = Convert::ToString(dataGridView1[1, pos]->Value);
	label14->Text = Convert::ToString(dataGridView1[2, pos]->Value);

	label13->Text = Convert::ToString(dataGridView1[3, pos]->Value);
	label12->Text = Convert::ToString(dataGridView1[4, pos]->Value);
	double Price = 0;
	if (dataGridView1[6, pos]->Value != "") Price = Convert::ToDouble(dataGridView1[6, pos]->Value);
	else Price = 0;
	label9->Text = Convert::ToString(Price) + " Грн.";
	label11->Text = Convert::ToString(dataGridView1[5, pos]->Value);
	label18->Text = Convert::ToString(dataGridView1[7, pos]->Value);
	label10->Text = Convert::ToString(dataGridView1[8, pos]->Value);

	if (pos > 0)
	{
		pos--;
	}
	else {
		pos = dataGridView1->Rows->GetRowCount(DataGridViewElementStates::Visible) - 1;
	}
}
private: System::Void допомогаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Me^ f = gcnew Me();
	f->ShowDialog();
}
};
}
