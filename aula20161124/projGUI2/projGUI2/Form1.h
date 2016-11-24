#pragma once

namespace projGUI2 {

#define MAXCHARDISP 21

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn1;


	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btnvirgula;



	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btnMaisMenos;





	private: System::Windows::Forms::Button^  btn3;

	private: System::Windows::Forms::Button^  btn6;

	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnDivisao;


	private: System::Windows::Forms::Button^  btnMult;

	private: System::Windows::Forms::Button^  btnMenos;

	private: System::Windows::Forms::Button^  btnMais;
	private: System::Windows::Forms::Button^  btnRaiz;
	private: System::Windows::Forms::Button^  btnPot;



	private: System::Windows::Forms::Button^  btnFat;

	private: System::Windows::Forms::Button^  btnApaga;

	private: System::Windows::Forms::Button^  btnIgual;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnvirgula = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btnMaisMenos = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->btnMais = (gcnew System::Windows::Forms::Button());
			this->btnRaiz = (gcnew System::Windows::Forms::Button());
			this->btnPot = (gcnew System::Windows::Forms::Button());
			this->btnFat = (gcnew System::Windows::Forms::Button());
			this->btnApaga = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"NewsGoth BT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(23, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lblDisplay->Size = System::Drawing::Size(276, 51);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(23, 229);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(51, 43);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(23, 180);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(51, 43);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(23, 131);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(51, 43);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(23, 82);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(51, 43);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btnvirgula
			// 
			this->btnvirgula->BackColor = System::Drawing::Color::White;
			this->btnvirgula->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnvirgula->Location = System::Drawing::Point(80, 229);
			this->btnvirgula->Name = L"btnvirgula";
			this->btnvirgula->Size = System::Drawing::Size(51, 43);
			this->btnvirgula->TabIndex = 1;
			this->btnvirgula->Text = L",";
			this->btnvirgula->UseVisualStyleBackColor = false;
			this->btnvirgula->Click += gcnew System::EventHandler(this, &Form1::btnvirgula_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(80, 180);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(51, 43);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(80, 131);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(51, 43);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(80, 82);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(51, 43);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btnMaisMenos
			// 
			this->btnMaisMenos->BackColor = System::Drawing::Color::White;
			this->btnMaisMenos->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMaisMenos->Location = System::Drawing::Point(137, 229);
			this->btnMaisMenos->Name = L"btnMaisMenos";
			this->btnMaisMenos->Size = System::Drawing::Size(50, 43);
			this->btnMaisMenos->TabIndex = 1;
			this->btnMaisMenos->Text = L"±";
			this->btnMaisMenos->UseVisualStyleBackColor = false;
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(137, 180);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(50, 43);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(137, 131);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(50, 43);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(137, 82);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(50, 43);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->BackColor = System::Drawing::Color::White;
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(193, 229);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(51, 43);
			this->btnDivisao->TabIndex = 1;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = false;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::White;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(193, 180);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(51, 43);
			this->btnMult->TabIndex = 1;
			this->btnMult->Text = L"×";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &Form1::btnMult_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->BackColor = System::Drawing::Color::White;
			this->btnMenos->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMenos->Location = System::Drawing::Point(193, 131);
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->Size = System::Drawing::Size(51, 43);
			this->btnMenos->TabIndex = 1;
			this->btnMenos->Text = L"-";
			this->btnMenos->UseVisualStyleBackColor = false;
			this->btnMenos->Click += gcnew System::EventHandler(this, &Form1::btnMenos_Click);
			// 
			// btnMais
			// 
			this->btnMais->BackColor = System::Drawing::Color::White;
			this->btnMais->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMais->Location = System::Drawing::Point(193, 82);
			this->btnMais->Name = L"btnMais";
			this->btnMais->Size = System::Drawing::Size(51, 43);
			this->btnMais->TabIndex = 1;
			this->btnMais->Text = L"+";
			this->btnMais->UseVisualStyleBackColor = false;
			this->btnMais->Click += gcnew System::EventHandler(this, &Form1::btnMais_Click);
			// 
			// btnRaiz
			// 
			this->btnRaiz->BackColor = System::Drawing::Color::White;
			this->btnRaiz->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaiz->Location = System::Drawing::Point(250, 229);
			this->btnRaiz->Name = L"btnRaiz";
			this->btnRaiz->Size = System::Drawing::Size(49, 43);
			this->btnRaiz->TabIndex = 1;
			this->btnRaiz->Text = L"√";
			this->btnRaiz->UseVisualStyleBackColor = false;
			// 
			// btnPot
			// 
			this->btnPot->BackColor = System::Drawing::Color::White;
			this->btnPot->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPot->Location = System::Drawing::Point(250, 180);
			this->btnPot->Name = L"btnPot";
			this->btnPot->Size = System::Drawing::Size(49, 43);
			this->btnPot->TabIndex = 1;
			this->btnPot->Text = L"Xʸ";
			this->btnPot->UseVisualStyleBackColor = false;
			this->btnPot->Click += gcnew System::EventHandler(this, &Form1::btnPot_Click);
			// 
			// btnFat
			// 
			this->btnFat->BackColor = System::Drawing::Color::White;
			this->btnFat->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnFat->Location = System::Drawing::Point(250, 131);
			this->btnFat->Name = L"btnFat";
			this->btnFat->Size = System::Drawing::Size(49, 43);
			this->btnFat->TabIndex = 1;
			this->btnFat->Text = L"n!";
			this->btnFat->UseVisualStyleBackColor = false;
			// 
			// btnApaga
			// 
			this->btnApaga->BackColor = System::Drawing::Color::White;
			this->btnApaga->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnApaga->Location = System::Drawing::Point(250, 82);
			this->btnApaga->Name = L"btnApaga";
			this->btnApaga->Size = System::Drawing::Size(49, 43);
			this->btnApaga->TabIndex = 1;
			this->btnApaga->Text = L"CE";
			this->btnApaga->UseVisualStyleBackColor = false;
			this->btnApaga->Click += gcnew System::EventHandler(this, &Form1::btnApaga_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->BackColor = System::Drawing::Color::White;
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(193, 290);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(106, 43);
			this->btnIgual->TabIndex = 1;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::btnIgual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(329, 360);
			this->Controls->Add(this->btnApaga);
			this->Controls->Add(this->btnFat);
			this->Controls->Add(this->btnMais);
			this->Controls->Add(this->btnMenos);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnPot);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnRaiz);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnMaisMenos);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnvirgula);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->lblDisplay);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Raiolator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		bool separado;
		double numero;
		char op;


		void LimpaDisplay(){
			separado = false;
			lblDisplay->Text = "0";
		}
		void LimpaTudo(){
			LimpaDisplay();
			op = '\0';
			numero = 0.0;
		}


#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "1";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "1";
		 }
		}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "2";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "2";
			}
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 separado = false;
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "3";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "3";
		
			}
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "4";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "4";
			}
		 }


private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "5";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "5";
			}
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "6";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "6";
			}
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "7";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "7";
			}
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "8";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "8";
			}
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text == "0")
					lblDisplay-> Text = "9";
				else
					lblDisplay-> Text  = lblDisplay -> Text + "9";
			}
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP){
				if(lblDisplay-> Text != "0")
					lblDisplay-> Text  = lblDisplay -> Text + "0";
			}
		 }
private: System::Void btnvirgula_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lblDisplay->Text->Length < MAXCHARDISP && !separado){
					lblDisplay->Text = lblDisplay->Text + ",";
					separado = true;
			}
		 }
private: System::Void btnMais_Click(System::Object^  sender, System::EventArgs^  e) {
				numero = System::Convert::ToDouble(lblDisplay->Text);
				op = '+';
				LimpaDisplay();
		 }
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
			 	numero = System::Convert::ToDouble(lblDisplay->Text);
				op = '-';
				LimpaDisplay();
		 }
private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = numero;	
			 numero = System::Convert::ToDouble(lblDisplay->Text);
				op = '*';
				LimpaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 	numero = System::Convert::ToDouble(lblDisplay->Text);
				op = '/';
				LimpaDisplay();
		 }
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = System::Convert::ToDouble(lblDisplay->Text);
			 switch(op){
			 case '+': lblDisplay->Text = System::Convert::ToString(numero + numero2);
				 break;
			 case '-': lblDisplay->Text = System::Convert::ToString(numero - numero2);
				 break;
			 case '*': lblDisplay->Text = System::Convert::ToString(numero * numero2);
				 break;
			 case '/': lblDisplay->Text = System::Convert::ToString(numero / numero2);
				 break;
			 }
			 
		 }


private: System::Void btnApaga_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
		 }
private: System::Void btnPot_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
};
}

