#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
int mainArg = -1;

namespace EngCalc {

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
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_multiply;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_mod;
	private: System::Windows::Forms::Button^ button_equally;
	private: System::Windows::Forms::Button^ button_tan;
	private: System::Windows::Forms::Button^ button_cos;
	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_sin;
	private: System::Windows::Forms::Button^ button_c;
	private: System::Windows::Forms::Button^ button_sqr_n;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_ce;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_sqr;
	private: System::Windows::Forms::Button^ button_log;
	private: System::Windows::Forms::Button^ button_sqrt;
	private: System::Windows::Forms::Button^ button_switch;
	private: System::Windows::Forms::Button^ factorial;
	private: System::Windows::Forms::Button^ button_pi;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Label^ description;
	private: System::Windows::Forms::Button^ button_ln;
	private: System::Windows::Forms::Button^ button_sqrt_n;
	private: System::Windows::Forms::Button^ button_tan_sqr;
	private: System::Windows::Forms::Button^ button_one_equally;
	private: System::Windows::Forms::Button^ button_exp_n;

	protected:

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
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_mod = (gcnew System::Windows::Forms::Button());
			this->button_equally = (gcnew System::Windows::Forms::Button());
			this->button_tan = (gcnew System::Windows::Forms::Button());
			this->button_cos = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_sin = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_c = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_sqr_n = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_ce = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_sqr = (gcnew System::Windows::Forms::Button());
			this->button_log = (gcnew System::Windows::Forms::Button());
			this->button_sqrt = (gcnew System::Windows::Forms::Button());
			this->button_switch = (gcnew System::Windows::Forms::Button());
			this->factorial = (gcnew System::Windows::Forms::Button());
			this->button_pi = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->description = (gcnew System::Windows::Forms::Label());
			this->button_ln = (gcnew System::Windows::Forms::Button());
			this->button_sqrt_n = (gcnew System::Windows::Forms::Button());
			this->button_tan_sqr = (gcnew System::Windows::Forms::Button());
			this->button_one_equally = (gcnew System::Windows::Forms::Button());
			this->button_exp_n = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_plus
			// 
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(356, 391);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(80, 50);
			this->button_plus->TabIndex = 0;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multiply->Location = System::Drawing::Point(356, 279);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(80, 50);
			this->button_multiply->TabIndex = 1;
			this->button_multiply->Text = L"x";
			this->button_multiply->UseVisualStyleBackColor = true;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::button_multiply_Click);
			// 
			// button_minus
			// 
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->Location = System::Drawing::Point(356, 335);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(80, 50);
			this->button_minus->TabIndex = 2;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_mod
			// 
			this->button_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mod->Location = System::Drawing::Point(356, 111);
			this->button_mod->Name = L"button_mod";
			this->button_mod->Size = System::Drawing::Size(80, 50);
			this->button_mod->TabIndex = 4;
			this->button_mod->Text = L"Mod";
			this->button_mod->UseVisualStyleBackColor = true;
			this->button_mod->Click += gcnew System::EventHandler(this, &MyForm::button_mod_Click);
			// 
			// button_equally
			// 
			this->button_equally->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equally->Location = System::Drawing::Point(356, 447);
			this->button_equally->Name = L"button_equally";
			this->button_equally->Size = System::Drawing::Size(80, 50);
			this->button_equally->TabIndex = 5;
			this->button_equally->Text = L"=";
			this->button_equally->UseVisualStyleBackColor = true;
			this->button_equally->Click += gcnew System::EventHandler(this, &MyForm::button_equally_Click);
			// 
			// button_tan
			// 
			this->button_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_tan->Location = System::Drawing::Point(356, 167);
			this->button_tan->Name = L"button_tan";
			this->button_tan->Size = System::Drawing::Size(80, 50);
			this->button_tan->TabIndex = 6;
			this->button_tan->Text = L"tan";
			this->button_tan->UseVisualStyleBackColor = true;
			this->button_tan->Click += gcnew System::EventHandler(this, &MyForm::button_tan_Click);
			// 
			// button_cos
			// 
			this->button_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_cos->Location = System::Drawing::Point(270, 167);
			this->button_cos->Name = L"button_cos";
			this->button_cos->Size = System::Drawing::Size(80, 50);
			this->button_cos->TabIndex = 12;
			this->button_cos->Text = L"cos";
			this->button_cos->UseVisualStyleBackColor = true;
			this->button_cos->Click += gcnew System::EventHandler(this, &MyForm::button_cos_Click);
			// 
			// button_dot
			// 
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->Location = System::Drawing::Point(270, 447);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(80, 50);
			this->button_dot->TabIndex = 11;
			this->button_dot->Text = L",";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button_delete
			// 
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->Location = System::Drawing::Point(270, 223);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(80, 50);
			this->button_delete->TabIndex = 10;
			this->button_delete->Text = L"⬅";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->Location = System::Drawing::Point(270, 279);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(80, 50);
			this->button_9->TabIndex = 9;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->Location = System::Drawing::Point(270, 335);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(80, 50);
			this->button_6->TabIndex = 8;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->Location = System::Drawing::Point(270, 391);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(80, 50);
			this->button_3->TabIndex = 7;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
			// 
			// button_sin
			// 
			this->button_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sin->Location = System::Drawing::Point(184, 167);
			this->button_sin->Name = L"button_sin";
			this->button_sin->Size = System::Drawing::Size(80, 50);
			this->button_sin->TabIndex = 18;
			this->button_sin->Text = L"sin";
			this->button_sin->UseVisualStyleBackColor = true;
			this->button_sin->Click += gcnew System::EventHandler(this, &MyForm::button_sin_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->Location = System::Drawing::Point(184, 447);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(80, 50);
			this->button_0->TabIndex = 17;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
			// 
			// button_c
			// 
			this->button_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_c->Location = System::Drawing::Point(184, 223);
			this->button_c->Name = L"button_c";
			this->button_c->Size = System::Drawing::Size(80, 50);
			this->button_c->TabIndex = 16;
			this->button_c->Text = L"C";
			this->button_c->UseVisualStyleBackColor = true;
			this->button_c->Click += gcnew System::EventHandler(this, &MyForm::button_c_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->Location = System::Drawing::Point(184, 279);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(80, 50);
			this->button_8->TabIndex = 15;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->Location = System::Drawing::Point(184, 335);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(80, 50);
			this->button_5->TabIndex = 14;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->Location = System::Drawing::Point(184, 391);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(80, 50);
			this->button_2->TabIndex = 13;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
			// 
			// button_sqr_n
			// 
			this->button_sqr_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sqr_n->Location = System::Drawing::Point(98, 167);
			this->button_sqr_n->Name = L"button_sqr_n";
			this->button_sqr_n->Size = System::Drawing::Size(80, 50);
			this->button_sqr_n->TabIndex = 24;
			this->button_sqr_n->Text = L"xⁿ";
			this->button_sqr_n->UseVisualStyleBackColor = true;
			this->button_sqr_n->Click += gcnew System::EventHandler(this, &MyForm::button_sqr_n_Click);
			// 
			// button_divide
			// 
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->Location = System::Drawing::Point(356, 223);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(80, 50);
			this->button_divide->TabIndex = 23;
			this->button_divide->Text = L"÷";
			this->button_divide->UseVisualStyleBackColor = true;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_ce
			// 
			this->button_ce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ce->Location = System::Drawing::Point(98, 223);
			this->button_ce->Name = L"button_ce";
			this->button_ce->Size = System::Drawing::Size(80, 50);
			this->button_ce->TabIndex = 22;
			this->button_ce->Text = L"CE";
			this->button_ce->UseVisualStyleBackColor = true;
			this->button_ce->Click += gcnew System::EventHandler(this, &MyForm::button_ce_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->Location = System::Drawing::Point(98, 279);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(80, 50);
			this->button_7->TabIndex = 21;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->Location = System::Drawing::Point(98, 335);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(80, 50);
			this->button_4->TabIndex = 20;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->Location = System::Drawing::Point(98, 391);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(80, 50);
			this->button_1->TabIndex = 19;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
			// 
			// button_sqr
			// 
			this->button_sqr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sqr->Location = System::Drawing::Point(12, 167);
			this->button_sqr->Name = L"button_sqr";
			this->button_sqr->Size = System::Drawing::Size(80, 50);
			this->button_sqr->TabIndex = 30;
			this->button_sqr->Text = L"x²";
			this->button_sqr->UseVisualStyleBackColor = true;
			this->button_sqr->Click += gcnew System::EventHandler(this, &MyForm::button_sqr_Click);
			// 
			// button_log
			// 
			this->button_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_log->Location = System::Drawing::Point(12, 447);
			this->button_log->Name = L"button_log";
			this->button_log->Size = System::Drawing::Size(80, 50);
			this->button_log->TabIndex = 29;
			this->button_log->Text = L"log";
			this->button_log->UseVisualStyleBackColor = true;
			this->button_log->Click += gcnew System::EventHandler(this, &MyForm::button_log_Click);
			// 
			// button_sqrt
			// 
			this->button_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sqrt->Location = System::Drawing::Point(12, 223);
			this->button_sqrt->Name = L"button_sqrt";
			this->button_sqrt->Size = System::Drawing::Size(80, 50);
			this->button_sqrt->TabIndex = 28;
			this->button_sqrt->Text = L"√";
			this->button_sqrt->UseVisualStyleBackColor = true;
			this->button_sqrt->Click += gcnew System::EventHandler(this, &MyForm::button_sqrt_Click);
			// 
			// button_switch
			// 
			this->button_switch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_switch->Location = System::Drawing::Point(12, 391);
			this->button_switch->Name = L"button_switch";
			this->button_switch->Size = System::Drawing::Size(80, 50);
			this->button_switch->TabIndex = 27;
			this->button_switch->Text = L"+/-";
			this->button_switch->UseVisualStyleBackColor = true;
			this->button_switch->Click += gcnew System::EventHandler(this, &MyForm::button_switch_Click);
			// 
			// factorial
			// 
			this->factorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->factorial->Location = System::Drawing::Point(12, 335);
			this->factorial->Name = L"factorial";
			this->factorial->Size = System::Drawing::Size(80, 50);
			this->factorial->TabIndex = 26;
			this->factorial->Text = L"n!";
			this->factorial->UseVisualStyleBackColor = true;
			this->factorial->Click += gcnew System::EventHandler(this, &MyForm::factorial_Click);
			// 
			// button_pi
			// 
			this->button_pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pi->Location = System::Drawing::Point(12, 279);
			this->button_pi->Name = L"button_pi";
			this->button_pi->Size = System::Drawing::Size(80, 50);
			this->button_pi->TabIndex = 25;
			this->button_pi->Text = L"𝜋";
			this->button_pi->UseVisualStyleBackColor = true;
			this->button_pi->Click += gcnew System::EventHandler(this, &MyForm::button_pi_Click);
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(12, 56);
			this->input->Name = L"input";
			this->input->ReadOnly = true;
			this->input->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->input->Size = System::Drawing::Size(424, 45);
			this->input->TabIndex = 31;
			this->input->Text = L"0";
			this->input->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// description
			// 
			this->description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->description->Location = System::Drawing::Point(12, 9);
			this->description->Name = L"description";
			this->description->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->description->Size = System::Drawing::Size(424, 40);
			this->description->TabIndex = 32;
			this->description->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_ln
			// 
			this->button_ln->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ln->Location = System::Drawing::Point(98, 447);
			this->button_ln->Name = L"button_ln";
			this->button_ln->Size = System::Drawing::Size(80, 50);
			this->button_ln->TabIndex = 33;
			this->button_ln->Text = L"ln";
			this->button_ln->UseVisualStyleBackColor = true;
			this->button_ln->Click += gcnew System::EventHandler(this, &MyForm::button_ln_Click);
			// 
			// button_sqrt_n
			// 
			this->button_sqrt_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sqrt_n->Location = System::Drawing::Point(12, 111);
			this->button_sqrt_n->Name = L"button_sqrt_n";
			this->button_sqrt_n->Size = System::Drawing::Size(80, 50);
			this->button_sqrt_n->TabIndex = 37;
			this->button_sqrt_n->Text = L"ⁿ√";
			this->button_sqrt_n->UseVisualStyleBackColor = true;
			this->button_sqrt_n->Click += gcnew System::EventHandler(this, &MyForm::button_sqrt_n_Click);
			// 
			// button_tan_sqr
			// 
			this->button_tan_sqr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_tan_sqr->Location = System::Drawing::Point(98, 111);
			this->button_tan_sqr->Name = L"button_tan_sqr";
			this->button_tan_sqr->Size = System::Drawing::Size(80, 50);
			this->button_tan_sqr->TabIndex = 36;
			this->button_tan_sqr->Text = L"10ⁿ";
			this->button_tan_sqr->UseVisualStyleBackColor = true;
			this->button_tan_sqr->Click += gcnew System::EventHandler(this, &MyForm::button_tan_sqr_Click);
			// 
			// button_one_equally
			// 
			this->button_one_equally->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_one_equally->Location = System::Drawing::Point(184, 111);
			this->button_one_equally->Name = L"button_one_equally";
			this->button_one_equally->Size = System::Drawing::Size(80, 50);
			this->button_one_equally->TabIndex = 35;
			this->button_one_equally->Text = L"¹/ₓ";
			this->button_one_equally->UseVisualStyleBackColor = true;
			this->button_one_equally->Click += gcnew System::EventHandler(this, &MyForm::button_one_equally_Click);
			// 
			// button_exp_n
			// 
			this->button_exp_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exp_n->Location = System::Drawing::Point(270, 111);
			this->button_exp_n->Name = L"button_exp_n";
			this->button_exp_n->Size = System::Drawing::Size(80, 50);
			this->button_exp_n->TabIndex = 34;
			this->button_exp_n->Text = L"eⁿ";
			this->button_exp_n->UseVisualStyleBackColor = true;
			this->button_exp_n->Click += gcnew System::EventHandler(this, &MyForm::button_exp_n_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 509);
			this->Controls->Add(this->button_sqrt_n);
			this->Controls->Add(this->button_tan_sqr);
			this->Controls->Add(this->button_one_equally);
			this->Controls->Add(this->button_exp_n);
			this->Controls->Add(this->button_ln);
			this->Controls->Add(this->description);
			this->Controls->Add(this->input);
			this->Controls->Add(this->button_sqr);
			this->Controls->Add(this->button_log);
			this->Controls->Add(this->button_sqrt);
			this->Controls->Add(this->button_switch);
			this->Controls->Add(this->factorial);
			this->Controls->Add(this->button_pi);
			this->Controls->Add(this->button_sqr_n);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_ce);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_sin);
			this->Controls->Add(this->button_c);
			this->Controls->Add(this->button_cos);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_tan);
			this->Controls->Add(this->button_equally);
			this->Controls->Add(this->button_mod);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_plus);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Инженерный калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		#pragma endregion

		private: System::Void addNumToInput(int num) { // добавление числа в поле
			if ((input->Text->Length > 0) && (Convert::ToInt32(input->Text->Substring(0, 1)) == 0)) { // проверка на первый 0
				input->Text = Convert::ToString(num);
			}
			else {
				input->Text += Convert::ToString(num);
			}
		}
			    
		private: System::Void button_ce_Click(System::Object^ sender, System::EventArgs^ e) { // Очистка чата (CE)
			input->Text = "0";
		}

		private: System::Void button_c_Click(System::Object^ sender, System::EventArgs^ e) { // Общая очистка (C)
			input->Text = "0";
			description->Text = "";
			mainArg = -1;
		}

		private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) { // Очистка символа чата (Delete) 
			if (input->Text->Length > 1) {
				input->Text = Convert::ToString(input->Text->Substring(0, input->Text->Length - 1));
			}
			else {
				input->Text = "0";
			}
		}

		private: System::Void button_0_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(0);
		}

		private: System::Void button_1_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(1);
		}

		private: System::Void button_2_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(2);
		}

		private: System::Void button_3_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(3);
		}

		private: System::Void button_4_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(4);
		}

		private: System::Void button_5_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(5);
		}

		private: System::Void button_6_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(6);
		}

		private: System::Void button_7_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(7);
		}

		private: System::Void button_8_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(8);
		}

		private: System::Void button_9_Click(System::Object^ sender, System::EventArgs^ e) {
			addNumToInput(9);
		}

		private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) { // ,
			if (input->Text->Length > 0 && input->Text->IndexOf(",", 0) == -1) {
				input->Text += ",";
			}
		}

		private: System::Void button_switch_Click(System::Object^ sender, System::EventArgs^ e) { // +/-
			if (input->Text != "0") {
				if (input->Text->Substring(0, 1) == "-") {
					input->Text = input->Text->Substring(1, input->Text->Length - 1);
				}
				else {
					input->Text = "-" + input->Text;
				}
			}
		}

		// Калькуляция чисел с 2 аргументами

		private: System::Double getCleanNum() { // получение числа из буфера
			int i = 0;
			while (true) {
				i++;
				if (description->Text->Substring(i, 1) == " ") {
					return Convert::ToDouble(description->Text->Substring(0, i));
				}
			}
		}

		private: System::Void button_equally_Click(System::Object^ sender, System::EventArgs^ e) { // кнопка равно
			if (input->Text->Length > 0 && description->Text->Length > 0 && mainArg != -1) {
				double buf = Convert::ToDouble(input->Text);
				double sum = getCleanNum();
				switch (mainArg) {
					case 1: {
						input->Text = Convert::ToString(sum + buf);
						break;
					}
					case 2: {
						input->Text = Convert::ToString(sum - buf);
						break;
					}
					case 3: {
						input->Text = Convert::ToString(sum * buf);
						break;
					}
					case 4: {
						if (buf == 0) {
							input->Text = "На 0 делить нельзя";
						}
						else {
							input->Text = Convert::ToString(sum / buf);
						}
						//MessageBox::Show(input->Text);
						break;
					}
					case 5: {
						input->Text = Convert::ToString(pow(sum, 1.0 / buf));
						break;
					}
					case 6: {
						input->Text = Convert::ToString(pow(sum, buf));
						break;
					}
					case 7: {
						input->Text = Convert::ToString(Convert::ToInt32(sum) % Convert::ToInt32(buf));
						break;
					}
					default: {
						break;
					}
				}
				description->Text += " " + Convert::ToString(buf);
				mainArg = -1;
			}
		}

		private: System::Void calculate(int operation) {
			array<String^>^ strOperations = { "+", "-", "x" , "/", "sqrt", "^", "mod" };
			mainArg = operation;
			if (input->Text->Length > 0) { // проверка на наличие чисел
				description->Text = input->Text + " " + strOperations[operation-1];
				input->Text = "";
			}
			else {
				description->Text = Convert::ToString(getCleanNum()) + " " + strOperations[operation - 1]; // смена операции
			}
		}

		private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) { // Плюс (+)
			calculate(1);
		}

		private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) { // минус (-)
			calculate(2);
		}

		private: System::Void button_multiply_Click(System::Object^ sender, System::EventArgs^ e) { // умножить (*)
			calculate(3);
		}

		private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) { // разделить (/)
			calculate(4);
		}

		private: System::Void button_sqrt_n_Click(System::Object^ sender, System::EventArgs^ e) { // корень n
			calculate(5);
		}

		private: System::Void button_sqr_n_Click(System::Object^ sender, System::EventArgs^ e) { // степень n
			calculate(6);
		}

		private: System::Void button_mod_Click(System::Object^ sender, System::EventArgs^ e) { // остаток (Mod)
			calculate(7);
		}

		/////// ************************** ///////////////


		// Калькуляция числа с 1 аргументом

		private: System::Double fact(int N) { // вычисление факториала
			if (N <= 0) {
				if (N == 0) {
					return 1;
				}
				else {
					return 0;
				}
			}
			else {
				return N * fact(N - 1);
			}
		}

		private: System::Void button_sin_Click(System::Object^ sender, System::EventArgs^ e) { // sin
			if (input->Text != "") {
				description->Text = "sin(" + input->Text + ")";
				input->Text = Convert::ToString(sin(Convert::ToDouble(input->Text)));
			}
		}


		private: System::Void button_cos_Click(System::Object^ sender, System::EventArgs^ e) { // cos
			if (input->Text != "") {
				description->Text = "cos(" + input->Text + ")";
				input->Text = Convert::ToString(cos(Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_tan_Click(System::Object^ sender, System::EventArgs^ e) { // tan
			if (input->Text != "") {
				description->Text = "tan(" + input->Text + ")";
				input->Text = Convert::ToString(tan(Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_sqrt_Click(System::Object^ sender, System::EventArgs^ e) { // sqrt
			if (input->Text != "") {
				description->Text = "sqrt(" + input->Text + ")";
				input->Text = Convert::ToString(sqrt(Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_sqr_Click(System::Object^ sender, System::EventArgs^ e) { // x^2
			if (input->Text != "") {
				description->Text = input->Text + " ^ 2";
				input->Text = Convert::ToString(pow(Convert::ToDouble(input->Text), 2));
			}
		}

		private: System::Void factorial_Click(System::Object^ sender, System::EventArgs^ e) { // factorial
			if (input->Text != "") {
				description->Text = input->Text + "!";
				input->Text = Convert::ToString(fact(Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_log_Click(System::Object^ sender, System::EventArgs^ e) { // log (Десят. логарифм)
			if (input->Text != "") {
				description->Text = "ln(" + input->Text + ")";
				input->Text = Convert::ToString(log10(Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_ln_Click(System::Object^ sender, System::EventArgs^ e) { // ln (Натуральный логарифм)
			if (input->Text != "") {
				description->Text = "log(" + input->Text + ")";
				input->Text = Convert::ToString(log(Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_tan_sqr_Click(System::Object^ sender, System::EventArgs^ e) { // 10 ^ n
			if (input->Text != "") {
				description->Text = "10 ^ " + input->Text;
				input->Text = Convert::ToString(pow(10, Convert::ToDouble(input->Text)));
			}
		}

		private: System::Void button_one_equally_Click(System::Object^ sender, System::EventArgs^ e) { // 1 / n
			if (input->Text != "") {
				description->Text = "1 / " + input->Text;
				input->Text = Convert::ToString(1 / Convert::ToDouble(input->Text));
			}
		}

		private: System::Void button_exp_n_Click(System::Object^ sender, System::EventArgs^ e) { // exp ^ n
			if (input->Text != "") {
				description->Text = "exp(" + input->Text + ")";
				input->Text = Convert::ToString(exp(Convert::ToDouble(input->Text)));
			}
		}


		private: System::Void button_pi_Click(System::Object^ sender, System::EventArgs^ e) { // Pi
			description->Text = "Pi";
			input->Text = Convert::ToString(M_PI);
		}

		//********************************//
};
}
