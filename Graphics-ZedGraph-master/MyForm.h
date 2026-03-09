#pragma once
#include <math.h>
#include <iostream>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^ textBox_u0;




	private: System::Windows::Forms::Label^ label_u0;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ textBoxStats;
	private: System::Windows::Forms::Label^ labelStats;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: System::Windows::Forms::TextBox^ textBox_m;
	private: System::Windows::Forms::Label^ label_m;
	private: System::Windows::Forms::TextBox^ textBox_k;
	private: System::Windows::Forms::Label^ label_k;
	private: System::Windows::Forms::TextBox^ textBox_c;
	private: System::Windows::Forms::Label^ label_c;
	private: System::Windows::Forms::TextBox^ textBox_k2;
	private: System::Windows::Forms::Label^ label_k2;


	private: System::Windows::Forms::TextBox^ textBox_z0;

	private: System::Windows::Forms::Label^ label_z0;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;









	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox_u0 = (gcnew System::Windows::Forms::TextBox());
			this->label_u0 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxStats = (gcnew System::Windows::Forms::RichTextBox());
			this->labelStats = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox_m = (gcnew System::Windows::Forms::TextBox());
			this->label_m = (gcnew System::Windows::Forms::Label());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->label_k = (gcnew System::Windows::Forms::Label());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->label_c = (gcnew System::Windows::Forms::Label());
			this->textBox_k2 = (gcnew System::Windows::Forms::TextBox());
			this->label_k2 = (gcnew System::Windows::Forms::Label());
			this->textBox_z0 = (gcnew System::Windows::Forms::TextBox());
			this->label_z0 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(15, 17);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(543, 403);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1557, 550);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(577, 17);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(691, 403);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 20;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x_i";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v_i";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"v2_i";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Visible = false;
			this->Column4->Width = 70;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"v_i - v2_i";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Visible = false;
			this->Column5->Width = 75;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ОЛП";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Visible = false;
			this->Column6->Width = 70;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"h_i";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 70;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C1";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Visible = false;
			this->Column8->Width = 70;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"C2";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Visible = false;
			this->Column9->Width = 70;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"u_i";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 70;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"|u_i - v_i|";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 75;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1557, 618);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox_u0
			// 
			this->textBox_u0->Location = System::Drawing::Point(1404, 656);
			this->textBox_u0->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_u0->Name = L"textBox_u0";
			this->textBox_u0->Size = System::Drawing::Size(87, 26);
			this->textBox_u0->TabIndex = 22;
			this->textBox_u0->Text = L"10";
			// 
			// label_u0
			// 
			this->label_u0->AutoSize = true;
			this->label_u0->Location = System::Drawing::Point(1363, 659);
			this->label_u0->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_u0->Name = L"label_u0";
			this->label_u0->Size = System::Drawing::Size(36, 20);
			this->label_u0->TabIndex = 21;
			this->label_u0->Text = L"u_0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1223, 550);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(83, 26);
			this->textBox3->TabIndex = 20;
			this->textBox3->Text = L"0,01";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1194, 556);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"h";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1404, 497);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 26);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1375, 501);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"b";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1223, 497);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 26);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1194, 497);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 20);
			this->label1->TabIndex = 15;
			this->label1->Text = L"a";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1223, 607);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(83, 26);
			this->textBox4->TabIndex = 24;
			this->textBox4->Text = L"0,000001";
			this->textBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1186, 610);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 23;
			this->label4->Text = L"eps";
			this->label4->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(1557, 497);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(174, 24);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"control of local error";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1404, 550);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(83, 26);
			this->textBox6->TabIndex = 27;
			this->textBox6->Text = L"1000";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1351, 553);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Nmax";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1404, 604);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(85, 26);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L"0,05";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1343, 607);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 20);
			this->label7->TabIndex = 28;
			this->label7->Text = L"eps_b";
			// 
			// textBoxStats
			// 
			this->textBoxStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->textBoxStats->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->textBoxStats->Location = System::Drawing::Point(1289, 43);
			this->textBoxStats->Name = L"textBoxStats";
			this->textBoxStats->ReadOnly = true;
			this->textBoxStats->Size = System::Drawing::Size(572, 377);
			this->textBoxStats->TabIndex = 32;
			this->textBoxStats->Text = L"Statistics will appear after clicking the Draw button...";
			// 
			// labelStats
			// 
			this->labelStats->AutoSize = true;
			this->labelStats->Location = System::Drawing::Point(1288, 9);
			this->labelStats->Name = L"labelStats";
			this->labelStats->Size = System::Drawing::Size(78, 20);
			this->labelStats->TabIndex = 31;
			this->labelStats->Text = L"Statistics:";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(15, 444);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(543, 403);
			this->zedGraphControl2->TabIndex = 33;
			this->zedGraphControl2->Visible = false;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(577, 444);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(543, 403);
			this->zedGraphControl3->TabIndex = 34;
			this->zedGraphControl3->Visible = false;
			// 
			// textBox_m
			// 
			this->textBox_m->Location = System::Drawing::Point(1223, 684);
			this->textBox_m->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_m->Name = L"textBox_m";
			this->textBox_m->Size = System::Drawing::Size(85, 26);
			this->textBox_m->TabIndex = 36;
			this->textBox_m->Text = L"1";
			this->textBox_m->Visible = false;
			// 
			// label_m
			// 
			this->label_m->AutoSize = true;
			this->label_m->Location = System::Drawing::Point(1194, 684);
			this->label_m->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_m->Name = L"label_m";
			this->label_m->Size = System::Drawing::Size(22, 20);
			this->label_m->TabIndex = 35;
			this->label_m->Text = L"m";
			this->label_m->Visible = false;
			// 
			// textBox_k
			// 
			this->textBox_k->Location = System::Drawing::Point(1223, 776);
			this->textBox_k->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(85, 26);
			this->textBox_k->TabIndex = 38;
			this->textBox_k->Text = L"2,0";
			this->textBox_k->Visible = false;
			// 
			// label_k
			// 
			this->label_k->AutoSize = true;
			this->label_k->Location = System::Drawing::Point(1194, 776);
			this->label_k->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_k->Name = L"label_k";
			this->label_k->Size = System::Drawing::Size(17, 20);
			this->label_k->TabIndex = 37;
			this->label_k->Text = L"k";
			this->label_k->Visible = false;
			// 
			// textBox_c
			// 
			this->textBox_c->Location = System::Drawing::Point(1223, 730);
			this->textBox_c->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(85, 26);
			this->textBox_c->TabIndex = 40;
			this->textBox_c->Text = L"0,15";
			this->textBox_c->Visible = false;
			// 
			// label_c
			// 
			this->label_c->AutoSize = true;
			this->label_c->Location = System::Drawing::Point(1194, 730);
			this->label_c->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_c->Name = L"label_c";
			this->label_c->Size = System::Drawing::Size(17, 20);
			this->label_c->TabIndex = 39;
			this->label_c->Text = L"c";
			this->label_c->Visible = false;
			// 
			// textBox_k2
			// 
			this->textBox_k2->Location = System::Drawing::Point(1223, 821);
			this->textBox_k2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_k2->Name = L"textBox_k2";
			this->textBox_k2->Size = System::Drawing::Size(85, 26);
			this->textBox_k2->TabIndex = 42;
			this->textBox_k2->Text = L"2,0";
			this->textBox_k2->Visible = false;
			// 
			// label_k2
			// 
			this->label_k2->AutoSize = true;
			this->label_k2->Location = System::Drawing::Point(1194, 821);
			this->label_k2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_k2->Name = L"label_k2";
			this->label_k2->Size = System::Drawing::Size(23, 20);
			this->label_k2->TabIndex = 41;
			this->label_k2->Text = L"k*";
			this->label_k2->Visible = false;
			// 
			// textBox_z0
			// 
			this->textBox_z0->Location = System::Drawing::Point(1404, 706);
			this->textBox_z0->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox_z0->Name = L"textBox_z0";
			this->textBox_z0->Size = System::Drawing::Size(87, 26);
			this->textBox_z0->TabIndex = 46;
			this->textBox_z0->Text = L"0";
			this->textBox_z0->Visible = false;
			// 
			// label_z0
			// 
			this->label_z0->AutoSize = true;
			this->label_z0->Location = System::Drawing::Point(1363, 709);
			this->label_z0->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_z0->Name = L"label_z0";
			this->label_z0->Size = System::Drawing::Size(39, 20);
			this->label_z0->TabIndex = 45;
			this->label_z0->Text = L"u\'_0";
			this->label_z0->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(1191, 444);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(99, 24);
			this->radioButton1->TabIndex = 47;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Test task";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(1321, 444);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 24);
			this->radioButton2->TabIndex = 48;
			this->radioButton2->Text = L"Main task";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1829, 1020);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox_z0);
			this->Controls->Add(this->label_z0);
			this->Controls->Add(this->textBox_k2);
			this->Controls->Add(this->label_k2);
			this->Controls->Add(this->textBox_c);
			this->Controls->Add(this->label_c);
			this->Controls->Add(this->textBox_k);
			this->Controls->Add(this->label_k);
			this->Controls->Add(this->textBox_m);
			this->Controls->Add(this->label_m);
			this->Controls->Add(this->zedGraphControl3);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->labelStats);
			this->Controls->Add(this->textBoxStats);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_u0);
			this->Controls->Add(this->label_u0);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		double func_test(double x, double v) {
			return 10*v;
		}

		double exactSolution(double x, double u_0) {
			return u_0*exp(10*x);
		}

		double RungeKutta4(double x, double v, double h) {
			double k1 = func_test(x, v);
			double k2 = func_test(x + (h / 2), v + (h / 2) * k1);
			double k3 = func_test(x + (h / 2), v + (h / 2) * k2);
			double k4 = func_test(x + h, v + h * k3);
			return v + (h / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
		}

		bool StepWithControl(double& x, double& u, double& v2, double& h, double eps, double& S) {
			// 1. Вычисляем v_i (один шаг с шагом h)
			double v = RungeKutta4(x, u, h);

			// 2. Вычисляем v2_i (два шага с шагом h/2)
			double v2_mid = RungeKutta4(x, u, h / 2); // Шаг 1 из x в x + h/2
			v2 = RungeKutta4(x + h / 2, v2_mid, h / 2); // Шаг 2 из x+h/2 в x+h

			// 3. Оценка локальной погрешности по правилу Рунге
			S = abs(v - v2) / 15; // Для метода 4-го порядка
			// 4. Логика управления шагом
			if (S <= eps) {
				// Шаг принимается
				u = v;
				x = x + h;
				return true; // Шаг успешен
			}
			else {
				return false;
			}
		}

		// Функция правой части системы для основной задачи
		void SystemFunction(double x, double u, double v, double& du, double& dv,
			double m, double c, double k, double k2) {
			du = v;  // производная смещения = скорость

			// Ускорение из уравнения: m*u'' + c*u' + k*u + k2*u^3 = 0
			// u'' = -(c*u' + k*u + k2*u^3)/m
			dv = -(c * v + k * u + k2 * u * u * u) / m;
		}

		// Метод Рунге-Куттa 4-го порядка для системы
		void RungeKutta4System(double x, double u, double v, double& u_new, double& v_new,
			double h, double m, double c, double k, double k2) {
			double du1, dv1, du2, dv2, du3, dv3, du4, dv4;

			// k1
			SystemFunction(x, u, v, du1, dv1, m, c, k, k2);

			// k2
			SystemFunction(x + h / 2, u + h / 2 * du1, v + h / 2 * dv1, du2, dv2, m, c, k, k2);

			// k3
			SystemFunction(x + h / 2, u + h / 2 * du2, v + h / 2 * dv2, du3, dv3, m, c, k, k2);

			// k4
			SystemFunction(x + h, u + h * du3, v + h * dv3, du4, dv4, m, c, k, k2);

			// Новые значения
			u_new = u + (h / 6.0) * (du1 + 2 * du2 + 2 * du3 + du4);
			v_new = v + (h / 6.0) * (dv1 + 2 * dv2 + 2 * dv3 + dv4);
		}

		// Шаг с контролем погрешности для системы
		bool StepWithControlSystem(double& x, double& u, double& v, double& u2, double& v2,
			double& h, double eps, double& S,
			double m, double c, double k, double k2) {
			// Один шаг с шагом h
			double u_h, v_h;
			RungeKutta4System(x, u, v, u_h, v_h, h, m, c, k, k2);

			// Два шага с шагом h/2
			double u_mid, v_mid;
			double u_half, v_half;

			// Первый половинный шаг
			RungeKutta4System(x, u, v, u_mid, v_mid, h / 2, m, c, k, k2);

			// Второй половинный шаг
			RungeKutta4System(x + h / 2, u_mid, v_mid, u_half, v_half, h / 2, m, c, k, k2);

			u2 = u_half;
			v2 = v_half;

			// Оценка погрешности по правилу Рунге для метода 4-го порядка
			double error_u = abs(u_h - u_half) / 15;
			double error_v = abs(v_h - v_half) / 15;
			S = std::max(error_u, error_v);  // Берем максимальную погрешность

			if (S <= eps) {
				// Шаг принимается - используем решение с половинным шагом (оно точнее)
				u = u_half;
				v = v_half;
				x = x + h;
				return true;
			}
			else {
				return false;
			}
		}

		void test_task() {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			PointPairList^ v_list = gcnew ZedGraph::PointPairList();
			PointPairList^ u_list = gcnew ZedGraph::PointPairList();

			double u_0 = Convert::ToDouble(textBox_u0->Text);
			bool control = checkBox1->Checked;
			double eps = Convert::ToDouble(textBox4->Text);
			double eps_b = Convert::ToDouble(textBox7->Text);
			double S;
			double local_error;
			double current_error;
			int count_c1 = 0;
			int count_c2 = 0;
			int Nmax = Convert::ToInt32(textBox6->Text);

			//Statistics:
			double max_OLP = 0;              // максимальная оценка локальной погрешности
			int total_c1 = 0;                // общее число делений шага
			int total_c2 = 0;                // общее число удвоений шага
			double max_h = 0;                // максимальный шаг
			double max_h_x;              // координата x для максимального шага
			double min_h = 1e100;                // минимальный шаг
			double min_h_x;              // координата x для минимального шага
			double max_error = 0;            // максимальная погрешность |ui - vi|
			double max_error_x;          // координата x для максимальной погрешности

			// Интервал, где есть данные
			double a = Convert::ToDouble(textBox1->Text);
			double b = Convert::ToDouble(textBox2->Text);

			double h = Convert::ToDouble(textBox3->Text);
			double h_new = h;

			double xmin_limit = a - 0.1;
			double xmax_limit = b + 0.1;
			/*
					double ymin_limit = -1.0;
					double ymax_limit = 100.0;
			*/
			// Список точек
			dataGridView1->Rows->Clear();

			double x = a;
			double v = u_0;
			double v2, u;

			int count_iterations = 0;
			while (abs(b - x) > eps_b && count_iterations < Nmax) {
				if (control) {
					count_c1 = 0;
					count_c2 = 0;
					bool step_accepted = false;

					// Внутренний цикл изменения шага
					while (!step_accepted) {
						h = h_new;
						// Проверяем, не выйдет ли шаг за границу b
						if (x + h > b && x < b - eps_b) {
							h = b - x;  // Уменьшаем шаг точно до границы
						}

						// Пытаемся сделать шаг с текущим h_current
						step_accepted = StepWithControl(x, v, v2, h, eps, S);
						local_error = S * 16;
						if (S < eps / 32) {
							h_new = h * 2;
							count_c2++;
						}
						else if (!step_accepted) {
							// Если шаг не принят (ошибка велика), уменьшаем шаг и пробуем снова
							h_new = h / 2;
							count_c1++;
						}
					}
					// Обновляем общие счетчики
					total_c1 += count_c1;
					total_c2 += count_c2;
				}
				else {
					// Сохраняем текущее состояние
					double x_current = x;
					double v_current = v;
					// Проверяем, не выйдет ли шаг за границу b
					if (x + h > b && x < b - eps_b) {
						h = b - x;  // Уменьшаем шаг точно до границы
					}

					// 1. Вычисляем v_i (в один шаг с h)
					v = RungeKutta4(x_current, v_current, h);

					// 3. Обновляем x
					x = x_current + h;
				}

				u = exactSolution(x, u_0);

				current_error = abs(u - v);

				//Добавление на график
				v_list->Add(x, v);
				u_list->Add(x, u);
				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[count_iterations]->Cells[0]->Value = count_iterations;
				dataGridView1->Rows[count_iterations]->Cells[1]->Value = x;
				dataGridView1->Rows[count_iterations]->Cells[2]->Value = v;

				dataGridView1->Rows[count_iterations]->Cells[6]->Value = h;

				dataGridView1->Rows[count_iterations]->Cells[9]->Value = u;
				dataGridView1->Rows[count_iterations]->Cells[10]->Value = current_error;

				if (control) {
					dataGridView1->Rows[count_iterations]->Cells[3]->Value = v2;
					dataGridView1->Rows[count_iterations]->Cells[4]->Value = v - v2;
					dataGridView1->Rows[count_iterations]->Cells[5]->Value = local_error;
					dataGridView1->Rows[count_iterations]->Cells[7]->Value = count_c1;
					dataGridView1->Rows[count_iterations]->Cells[8]->Value = count_c2;
				}

				// Обновляем статистику по шагам и погрешностям

				if (h > max_h) { // Максимальный шаг
					max_h = h;
					max_h_x = x;
				}

				if (h < min_h) { // Минимальный шаг
					min_h = h;
					min_h_x = x;
				}

				// Максимальная погрешность
				if (current_error > max_error) {
					max_error = current_error;
					max_error_x = x;
				}

				if (control && max_OLP < local_error) {
					max_OLP = local_error;
				}
				count_iterations++;
			}
			LineItem Curve1 = panel->AddCurve("v(x)", v_list, Color::Red, SymbolType::Plus);
			LineItem Curve2 = panel->AddCurve("u(x)", u_list, Color::Blue, SymbolType::XCross);

			// Устанавливаем интересующий нас интервал по оси X
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;

			// Автоматическое масштабирование по Y
			panel->YAxis->Scale->MinAuto = true;
			panel->YAxis->Scale->MaxAuto = true;




			// Вывод статистики
			textBoxStats->Clear();

			//textBoxStats->SelectionFont = fontRegular;
			textBoxStats->SelectionColor = Color::Black;

			textBoxStats->AppendText(String::Format("  n = {0,-10} \n", count_iterations));
			textBoxStats->AppendText(String::Format("  b - xn = {0,10:E6}  \n", b - x));

			if (control) {
				textBoxStats->AppendText(String::Format("  max |ОЛП| = {0,10:E6} \n", max_OLP));
				textBoxStats->AppendText(String::Format("  Общее число делений шага (C1) = {0,-5}   \n", total_c1));
				textBoxStats->AppendText(String::Format("  Общее число удвоений шага (C2) = {0,-5}  \n", total_c2));
			}

			textBoxStats->AppendText(String::Format("  max hi = {0,10:E6} при x = {1,8:F6}  \n", max_h, max_h_x));
			textBoxStats->AppendText(String::Format("  min hi = {0,10:E6} при x = {1,8:F6}   \n", min_h, min_h_x));
			textBoxStats->AppendText(String::Format("  max |ui - vi| = {0,10:E6} при x = {1,8:F6}    \n", max_error, max_error_x));


			// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
			// В противном случае на рисунке будет показана только часть графика, 
			// которая умещается в интервалы по осям, установленные по умолчанию
			zedGraphControl1->AxisChange();
			// Обновляем график
			zedGraphControl1->Invalidate();
		}

		void main_task() {
			// Очистка графиков
			zedGraphControl1->GraphPane->CurveList->Clear();
			zedGraphControl2->GraphPane->CurveList->Clear();
			zedGraphControl3->GraphPane->CurveList->Clear();

			// Создание списков точек для графиков
			PointPairList^ u_list = gcnew ZedGraph::PointPairList();  // u(x) - смещение
			PointPairList^ v_list = gcnew ZedGraph::PointPairList();  // v(x) - скорость
			PointPairList^ phase_list = gcnew ZedGraph::PointPairList(); // фазовый портрет (u, v)

			// Считывание параметров
			double u_0 = Convert::ToDouble(textBox_u0->Text);  // начальное смещение (см)
			double v_0 = Convert::ToDouble(textBox_z0->Text);  // начальная скорость (см/с)

			// Параметры системы (в соответствие с заданием)
			double m = 0.01*Convert::ToDouble(textBox_m->Text);  // масса (Н·с²/см) - уже в нужной размерности
			double c = Convert::ToDouble(textBox_c->Text);  // коэффициент демпфирования (Н·с/см²)
			double k = Convert::ToDouble(textBox_k->Text);   // жесткость линейной пружины (Н/см)
			double k2 = Convert::ToDouble(textBox_k2->Text);  // коэффициент нелинейной пружины (Н/см³)

			// Параметры интегрирования
			bool control = checkBox1->Checked;
			double eps = Convert::ToDouble(textBox4->Text);     // допустимая погрешность
			double eps_b = Convert::ToDouble(textBox7->Text);   // точность выхода на границу
			int Nmax = Convert::ToInt32(textBox6->Text);        // максимальное число итераций

			// Интервал интегрирования
			double a = Convert::ToDouble(textBox1->Text);
			double b = Convert::ToDouble(textBox2->Text);

			// Начальный шаг
			double h = Convert::ToDouble(textBox3->Text);
			double h_new = h;

			// Статистика
			double max_OLP = 0;              // максимальная оценка локальной погрешности
			int total_c1 = 0;                // общее число делений шага
			int total_c2 = 0;                // общее число удвоений шага
			double max_h = 0;                 // максимальный шаг
			double max_h_x = 0;                // координата для максимального шага
			double min_h = 1e100;              // минимальный шаг
			double min_h_x = 0;                // координата для минимального шага

			// Счетчики для текущего шага
			int count_c1 = 0;
			int count_c2 = 0;

			// Очистка таблицы
			dataGridView1->Rows->Clear();

			// Начальные условия
			double x = a;
			double u = u_0;  // смещение
			double v = v_0;  // скорость

			// Для контроля погрешности
			double u2, v2;  // решение с половинным шагом
			double S;       // оценка погрешности
			double local_error;

			int count_iterations = 0;

			/*double xmin_limit = a - 0.1;
			double xmax_limit = b + 0.1;*/

			// Основной цикл интегрирования
			while (abs(b - x) > eps_b && count_iterations < Nmax) {
				if (control) {
					// Режим с контролем погрешности
					count_c1 = 0;
					count_c2 = 0;
					bool step_accepted = false;

					// Внутренний цикл изменения шага
					while (!step_accepted) {
						h = h_new;

						// Проверка выхода за границу
						if (x + h > b && x < b - eps_b) {
							h = b - x;
						}

						// Пытаемся сделать шаг с текущим h
						step_accepted = StepWithControlSystem(x, u, v, u2, v2, h, eps, S, m, c, k, k2);
						local_error = S * 16;

						if (S < eps / 32) {
							h_new = h * 2;  // удваиваем шаг
							count_c2++;
						}
						else if (!step_accepted) {
							h_new = h / 2;  // уменьшаем шаг
							count_c1++;
						}
					}

					// Обновляем общие счетчики
					total_c1 += count_c1;
					total_c2 += count_c2;
				}
				else {
					// Режим с постоянным шагом
					double x_current = x;
					double u_current = u;
					double v_current = v;

					// Проверка выхода за границу
					if (x + h > b && x < b - eps_b) {
						h = b - x;
					}

					// Один шаг методом Рунге-Кутты для системы
					RungeKutta4System(x_current, u_current, v_current, u, v, h, m, c, k, k2);
					x = x_current + h;
				}

				// Добавление точек на графики
				u_list->Add(x, u);           // смещение от времени
				v_list->Add(x, v);           // скорость от времени
				phase_list->Add(u, v);        // фазовый портрет

				// Заполнение таблицы
				dataGridView1->Rows->Add();
				dataGridView1->Rows[count_iterations]->Cells[0]->Value = count_iterations + 1;
				dataGridView1->Rows[count_iterations]->Cells[1]->Value = x;
				dataGridView1->Rows[count_iterations]->Cells[2]->Value = u;
				dataGridView1->Rows[count_iterations]->Cells[6]->Value = h;

				if (control) {
					dataGridView1->Rows[count_iterations]->Cells[3]->Value = u2;
					dataGridView1->Rows[count_iterations]->Cells[4]->Value = u - u2;
					dataGridView1->Rows[count_iterations]->Cells[5]->Value = local_error;
					dataGridView1->Rows[count_iterations]->Cells[7]->Value = count_c1;
					dataGridView1->Rows[count_iterations]->Cells[8]->Value = count_c2;
				}

				// Обновление статистики
				if (h > max_h) {
					max_h = h;
					max_h_x = x;
				}

				if (h < min_h) {
					min_h = h;
					min_h_x = x;
				}

				if (control && local_error > max_OLP) {
					max_OLP = local_error;
				}

				count_iterations++;
			}

			// Построение графиков
			// График 1: смещение u(x)
			GraphPane^ panel1 = zedGraphControl1->GraphPane;
			panel1->Title->Text = "Смещение груза u(x)";
			panel1->XAxis->Title->Text = "Время x (с)";
			panel1->YAxis->Title->Text = "Смещение u (см)";
			panel1->AddCurve("u(x)", u_list, Color::Blue, SymbolType::None);

			// График 2: скорость v(x)
			GraphPane^ panel2 = zedGraphControl2->GraphPane;
			panel2->Title->Text = "Скорость груза v(x)";
			panel2->XAxis->Title->Text = "Время x (с)";
			panel2->YAxis->Title->Text = "Скорость v (см/с)";
			panel2->AddCurve("v(x)", v_list, Color::Red, SymbolType::None);

			// График 3: фазовый портрет (v от u)
			GraphPane^ panel3 = zedGraphControl3->GraphPane;
			panel3->Title->Text = "Фазовый портрет";
			panel3->XAxis->Title->Text = "Смещение u (см)";
			panel3->YAxis->Title->Text = "Скорость v (см/с)";
			panel3->AddCurve("v(u)", phase_list, Color::Green, SymbolType::None);

			// Настройка масштабов
			double xmin_limit = a - 0.1 * (b - a);
			double xmax_limit = b + 0.1 * (b - a);

			panel1->XAxis->Scale->Min = xmin_limit;
			panel1->XAxis->Scale->Max = xmax_limit;
			panel1->YAxis->Scale->MinAuto = true;
			panel1->YAxis->Scale->MaxAuto = true;

			panel2->XAxis->Scale->Min = xmin_limit;
			panel2->XAxis->Scale->Max = xmax_limit;
			panel2->YAxis->Scale->MinAuto = true;
			panel2->YAxis->Scale->MaxAuto = true;

			// Обновление графиков
			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();

			zedGraphControl2->AxisChange();
			zedGraphControl2->Invalidate();

			zedGraphControl3->AxisChange();
			zedGraphControl3->Invalidate();

			// Вывод статистики
			textBoxStats->Clear();
			textBoxStats->SelectionColor = Color::Black;

			textBoxStats->AppendText(String::Format("  n = {0,-10} \n", count_iterations));
			textBoxStats->AppendText(String::Format("  b - xn = {0,10:E6}  \n", b - x));

			if (control) {
				textBoxStats->AppendText(String::Format("  max ОЛП = {0,10:E6} \n", max_OLP));
				textBoxStats->AppendText(String::Format("  Общее число делений шага (C1) = {0,-5}   \n", total_c1));
				textBoxStats->AppendText(String::Format("  Общее число удвоений шага (C2) = {0,-5}  \n", total_c2));
			}

			textBoxStats->AppendText(String::Format("  max hi = {0,10:E6} при x = {1,8:F6}  \n", max_h, max_h_x));
			textBoxStats->AppendText(String::Format("  min hi = {0,10:E6} при x = {1,8:F6}   \n", min_h, min_h_x));
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (radioButton1->Checked) {
			test_task();
		}
		else {
			main_task();
		}

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox1->Text);
	double xmax = Convert::ToDouble(textBox2->Text);
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	// if checkBox1 = true --> show elements
	// if checkBox1 = false --> hide elements
	bool show = checkBox1->Checked;

	Column4->Visible = show;
	Column5->Visible = show;
	Column6->Visible = show;
	Column8->Visible = show;
	Column9->Visible = show;

	textBox4->Visible = show;
	label4->Visible = show;

	dataGridView1->Rows->Clear();
	this->textBoxStats->Text = L"Statistics will appear after clicking the Draw button...";

	// Очистка графиков
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();

	zedGraphControl2->GraphPane->CurveList->Clear();
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	zedGraphControl3->GraphPane->CurveList->Clear();
	zedGraphControl3->AxisChange();
	zedGraphControl3->Invalidate();
}

private: void show_task(bool show) {
	textBox_m->Visible = show;
	label_m->Visible = show;
	textBox_c->Visible = show;
	label_c->Visible = show;
	textBox_k->Visible = show;
	label_k->Visible = show;
	textBox_k2->Visible = show;
	label_k2->Visible = show;
	textBox_z0->Visible = show;
	label_z0->Visible = show;

	Column10->Visible = !show;
	Column11->Visible = !show;
	zedGraphControl2->Visible = show;
	zedGraphControl3->Visible = show;

	dataGridView1->Rows->Clear();
	this->textBoxStats->Text = L"Statistics will appear after clicking the Draw button...";

	// Очистка графиков
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();

	zedGraphControl2->GraphPane->CurveList->Clear();
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	zedGraphControl3->GraphPane->CurveList->Clear();
	zedGraphControl3->AxisChange();
	zedGraphControl3->Invalidate();
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	show_task(radioButton2->Checked);
}
};
}
