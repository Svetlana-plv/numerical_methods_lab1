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



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->zedGraphControl1->Size = System::Drawing::Size(590, 433);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(344, 536);
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
			this->dataGridView1->Location = System::Drawing::Point(626, 17);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1100, 433);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
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
			this->Column4->Width = 70;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"v_i - v2_i";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
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
			this->button2->Location = System::Drawing::Point(344, 604);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(224, 530);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(70, 26);
			this->textBox5->TabIndex = 22;
			this->textBox5->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(195, 533);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 20);
			this->label5->TabIndex = 21;
			this->label5->Text = L"u0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(73, 530);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 26);
			this->textBox3->TabIndex = 20;
			this->textBox3->Text = L"0,01";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 536);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"h";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(224, 477);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 26);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 481);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"b";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 477);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 26);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 477);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 20);
			this->label1->TabIndex = 15;
			this->label1->Text = L"a";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 634);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 26);
			this->textBox4->TabIndex = 24;
			this->textBox4->Text = L"0,0001";
			this->textBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 637);
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
			this->checkBox1->Location = System::Drawing::Point(344, 477);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(174, 24);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"control of local error";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(73, 581);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(68, 26);
			this->textBox6->TabIndex = 27;
			this->textBox6->Text = L"1000";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 584);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Nmax";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(224, 584);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(68, 26);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L"0,05";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(163, 587);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 20);
			this->label7->TabIndex = 28;
			this->label7->Text = L"eps_b";
			// 
			// textBoxStats
			// 
			this->textBoxStats->Location = System::Drawing::Point(626, 505);
			this->textBoxStats->Name = L"textBoxStats";
			this->textBoxStats->Size = System::Drawing::Size(723, 231);
			//this->textBoxStats->TabIndex = 30;
			//this->textBoxStats->Text = L"";
			this->textBoxStats->Multiline = true;
			//this->textBoxStats->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxStats->ReadOnly = true;
			this->textBoxStats->BackColor = System::Drawing::Color::FromArgb(240, 240, 240);
			this->textBoxStats->Font = gcnew System::Drawing::Font(L"Consolas", 10);
			this->textBoxStats->Text = L"Statistics will appear after clicking the Draw button...";
			// 
			// labelStats
			// 
			this->labelStats->AutoSize = true;
			this->labelStats->Location = System::Drawing::Point(622, 477);
			this->labelStats->Name = L"labelStats";
			this->labelStats->Size = System::Drawing::Size(51, 20);
			this->labelStats->TabIndex = 31;
			this->labelStats->Text = L"Statistics:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 772);
			this->Controls->Add(this->labelStats);
			this->Controls->Add(this->textBoxStats);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
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

		double func(double x, double v) {
			return 10*v;
		}

		double exactSolution(double x, double u_0) {
			return u_0*exp(10*x);
		}

		double RungeKutta4(double x, double v, double h) {
			double k1 = func(x, v);
			double k2 = func(x + (h / 2), v + (h / 2) * k1);
			double k3 = func(x + (h / 2), v + (h / 2) * k2);
			double k4 = func(x + h, v + h * k3);
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

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ v_list = gcnew ZedGraph::PointPairList();
		PointPairList^ u_list = gcnew ZedGraph::PointPairList();

		double u_0 = Convert::ToDouble(textBox5->Text);
		bool control = checkBox1->Checked;
		double eps = Convert::ToDouble(textBox4->Text);
		double eps_b = Convert::ToDouble(textBox7->Text);
		double S;
		double local_error;
		double current_error;
		int count_c1;
		int count_c2;
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
						h_new = h*2;
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

				// 2. Вычисляем v2_i (в два шага с h/2)
				double v2_mid = RungeKutta4(x_current, v_current, h / 2);
				v2 = RungeKutta4(x_current + h / 2, v2_mid, h / 2);

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
			dataGridView1->Rows[count_iterations]->Cells[3]->Value = v2;
			dataGridView1->Rows[count_iterations]->Cells[4]->Value = v-v2;
			
			dataGridView1->Rows[count_iterations]->Cells[6]->Value = h;

			dataGridView1->Rows[count_iterations]->Cells[9]->Value = u;
			dataGridView1->Rows[count_iterations]->Cells[10]->Value = current_error;

			if (control) {
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
		LineItem Curve1 = panel->AddCurve("v(x)", v_list, Color::Red,SymbolType::Plus);
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

	Column6->Visible = show;
	Column8->Visible = show;
	Column9->Visible = show;

	textBox4->Visible = show;
	label4->Visible = show;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
