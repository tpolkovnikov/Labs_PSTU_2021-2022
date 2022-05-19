#pragma once

namespace calculator {

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
	private: System::Windows::Forms::TextBox^ textBox17;
	protected:
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox26;




	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
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
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SuspendLayout();
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(821, 420);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(71, 31);
			this->textBox17->TabIndex = 225;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox17_KeyPress);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(693, 420);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(71, 31);
			this->textBox18->TabIndex = 224;
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox18_KeyPress);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(951, 420);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(71, 31);
			this->textBox19->TabIndex = 223;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox19_KeyPress);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(564, 420);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(71, 31);
			this->textBox20->TabIndex = 222;
			this->textBox20->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox20_KeyPress);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(313, 420);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(71, 31);
			this->textBox21->TabIndex = 221;
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox21_KeyPress);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(435, 420);
			this->textBox22->Margin = System::Windows::Forms::Padding(4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(71, 31);
			this->textBox22->TabIndex = 220;
			this->textBox22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox22_KeyPress);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(187, 420);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(71, 31);
			this->textBox23->TabIndex = 219;
			this->textBox23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox23_KeyPress);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1031, 424);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 25);
			this->label19->TabIndex = 218;
			this->label19->Text = L"k";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(901, 424);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(42, 25);
			this->label20->TabIndex = 217;
			this->label20->Text = L"d +";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(773, 424);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 25);
			this->label21->TabIndex = 216;
			this->label21->Text = L"c +";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(644, 424);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 25);
			this->label22->TabIndex = 215;
			this->label22->Text = L"b +";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(515, 424);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 25);
			this->label23->TabIndex = 214;
			this->label23->Text = L"a +";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(393, 424);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 25);
			this->label24->TabIndex = 213;
			this->label24->Text = L"z +";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(267, 424);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 25);
			this->label25->TabIndex = 212;
			this->label25->Text = L"y +";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(55, 359);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(77, 25);
			this->label26->TabIndex = 211;
			this->label26->Text = L"Ответ:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(140, 424);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 25);
			this->label27->TabIndex = 210;
			this->label27->Text = L"x +";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(60, 420);
			this->textBox24->Margin = System::Windows::Forms::Padding(4);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(71, 31);
			this->textBox24->TabIndex = 209;
			this->textBox24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox24_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(821, 264);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(71, 31);
			this->textBox9->TabIndex = 208;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(693, 264);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(71, 31);
			this->textBox10->TabIndex = 207;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(951, 264);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(71, 31);
			this->textBox11->TabIndex = 206;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(564, 264);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(71, 31);
			this->textBox12->TabIndex = 205;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(313, 264);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(71, 31);
			this->textBox13->TabIndex = 204;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox13_KeyPress);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(435, 264);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(71, 31);
			this->textBox14->TabIndex = 203;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox14_KeyPress);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(187, 264);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(71, 31);
			this->textBox15->TabIndex = 202;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox15_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1031, 268);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 25);
			this->label10->TabIndex = 201;
			this->label10->Text = L"k";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(901, 268);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 25);
			this->label11->TabIndex = 200;
			this->label11->Text = L"d +";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(773, 268);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 25);
			this->label12->TabIndex = 199;
			this->label12->Text = L"c +";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(644, 268);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 25);
			this->label13->TabIndex = 198;
			this->label13->Text = L"b +";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(515, 268);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 25);
			this->label14->TabIndex = 197;
			this->label14->Text = L"a +";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(393, 268);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 25);
			this->label15->TabIndex = 196;
			this->label15->Text = L"z +";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(267, 268);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 25);
			this->label16->TabIndex = 195;
			this->label16->Text = L"y +";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(55, 202);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(202, 25);
			this->label17->TabIndex = 194;
			this->label17->Text = L"Второй многочлен:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(140, 268);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 25);
			this->label18->TabIndex = 193;
			this->label18->Text = L"x +";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(60, 264);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(71, 31);
			this->textBox16->TabIndex = 192;
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox16_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(821, 101);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(71, 31);
			this->textBox8->TabIndex = 191;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(693, 101);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(71, 31);
			this->textBox7->TabIndex = 190;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(951, 101);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(71, 31);
			this->textBox6->TabIndex = 189;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(564, 101);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(71, 31);
			this->textBox5->TabIndex = 188;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(313, 101);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(71, 31);
			this->textBox4->TabIndex = 187;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(435, 101);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 31);
			this->textBox3->TabIndex = 186;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(187, 101);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(71, 31);
			this->textBox25->TabIndex = 185;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1031, 105);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 25);
			this->label9->TabIndex = 184;
			this->label9->Text = L"k";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(901, 105);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 25);
			this->label8->TabIndex = 183;
			this->label8->Text = L"d +";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(773, 105);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 25);
			this->label7->TabIndex = 182;
			this->label7->Text = L"c +";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(644, 105);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 25);
			this->label6->TabIndex = 181;
			this->label6->Text = L"b +";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(515, 105);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 25);
			this->label5->TabIndex = 180;
			this->label5->Text = L"a +";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(393, 105);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 25);
			this->label4->TabIndex = 179;
			this->label4->Text = L"z +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(267, 105);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 25);
			this->label3->TabIndex = 178;
			this->label3->Text = L"y +";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 40);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 25);
			this->label2->TabIndex = 177;
			this->label2->Text = L"Первый многочлен:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 105);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 25);
			this->label1->TabIndex = 176;
			this->label1->Text = L"x +";
			// 
			// textBox26
			// 
			this->textBox26->ForeColor = System::Drawing::Color::Black;
			this->textBox26->Location = System::Drawing::Point(60, 101);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(71, 31);
			this->textBox26->TabIndex = 175;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox26_TextChanged);
			this->textBox26->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox26_KeyPress);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1136, 264);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 104);
			this->button5->TabIndex = 230;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1313, 264);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 104);
			this->button6->TabIndex = 231;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox1->Location = System::Drawing::Point(1136, 95);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 33);
			this->comboBox1->TabIndex = 232;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1484, 524);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox26);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1506, 580);
			this->MinimumSize = System::Drawing::Size(1506, 580);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор многочленов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


	   // запрет ввода 
		private: System::Void textBox26_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox4_KeyPress(System::Object ^ sender, System::Windows::Forms::KeyPressEventArgs ^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}

		private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}
		private: System::Void textBox16_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			if (((e->KeyChar < 48) || (e->KeyChar > 57)) && e->KeyChar != 8 && e->KeyChar != 44 && e->KeyChar != 45) {
				e->Handled = true;
				return;
			}
		}

			   // для ответа запретить весь ввод 17 - 24
		private: System::Void textBox17_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox18_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox19_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox20_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
		private: System::Void textBox24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			char number = e->KeyChar;
			e->Handled = true;
		}
};
}
