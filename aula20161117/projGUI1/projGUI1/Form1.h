#pragma once

namespace projGUI1 {

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
	private: System::Windows::Forms::Button^  btnOK;
	protected: 

	private: System::Windows::Forms::TextBox^  txtEntrada;
	private: System::Windows::Forms::CheckBox^  chbEscolha;
	protected: 


	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cbxOpcao;


	private: System::Windows::Forms::RadioButton^  radioaOpcao1;
	private: System::Windows::Forms::PictureBox^  pict;


	private: System::Windows::Forms::GroupBox^  rbtOpcao;
	private: System::Windows::Forms::RadioButton^  radiobOpcao2;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->txtEntrada = (gcnew System::Windows::Forms::TextBox());
			this->chbEscolha = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cbxOpcao = (gcnew System::Windows::Forms::ComboBox());
			this->radioaOpcao1 = (gcnew System::Windows::Forms::RadioButton());
			this->pict = (gcnew System::Windows::Forms::PictureBox());
			this->rbtOpcao = (gcnew System::Windows::Forms::GroupBox());
			this->radiobOpcao2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pict))->BeginInit();
			this->rbtOpcao->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(298, 400);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &Form1::btnOK_Click);
			// 
			// txtEntrada
			// 
			this->txtEntrada->Location = System::Drawing::Point(145, 200);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(166, 20);
			this->txtEntrada->TabIndex = 1;
			this->txtEntrada->TextChanged += gcnew System::EventHandler(this, &Form1::txtEntrada_TextChanged);
			// 
			// chbEscolha
			// 
			this->chbEscolha->AutoSize = true;
			this->chbEscolha->Location = System::Drawing::Point(165, 135);
			this->chbEscolha->Name = L"chbEscolha";
			this->chbEscolha->Size = System::Drawing::Size(181, 17);
			this->chbEscolha->TabIndex = 2;
			this->chbEscolha->Text = L"Desejo instalar o Baidu anti-vírus";
			this->chbEscolha->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(15, 293);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(374, 104);
			this->lblMensagem->TabIndex = 3;
			this->lblMensagem->Text = L"Google Earth";
			// 
			// cbxOpcao
			// 
			this->cbxOpcao->FormattingEnabled = true;
			this->cbxOpcao->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Débito", L"Crédito", L"Boleto", L"Pagar quando tiver dinheiro"});
			this->cbxOpcao->Location = System::Drawing::Point(145, 238);
			this->cbxOpcao->Name = L"cbxOpcao";
			this->cbxOpcao->Size = System::Drawing::Size(175, 21);
			this->cbxOpcao->TabIndex = 4;
			this->cbxOpcao->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// radioaOpcao1
			// 
			this->radioaOpcao1->AutoSize = true;
			this->radioaOpcao1->ForeColor = System::Drawing::Color::Green;
			this->radioaOpcao1->Location = System::Drawing::Point(21, 30);
			this->radioaOpcao1->Name = L"radioaOpcao1";
			this->radioaOpcao1->Size = System::Drawing::Size(110, 17);
			this->radioaOpcao1->TabIndex = 5;
			this->radioaOpcao1->TabStop = true;
			this->radioaOpcao1->Text = L"Download Rápido";
			this->radioaOpcao1->UseVisualStyleBackColor = true;
			// 
			// pict
			// 
			this->pict->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pict.Image")));
			this->pict->Location = System::Drawing::Point(12, 12);
			this->pict->Name = L"pict";
			this->pict->Size = System::Drawing::Size(121, 140);
			this->pict->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pict->TabIndex = 6;
			this->pict->TabStop = false;
			// 
			// rbtOpcao
			// 
			this->rbtOpcao->Controls->Add(this->radiobOpcao2);
			this->rbtOpcao->Controls->Add(this->radioaOpcao1);
			this->rbtOpcao->Location = System::Drawing::Point(165, 39);
			this->rbtOpcao->Name = L"rbtOpcao";
			this->rbtOpcao->Size = System::Drawing::Size(181, 90);
			this->rbtOpcao->TabIndex = 7;
			this->rbtOpcao->TabStop = false;
			this->rbtOpcao->Text = L"Forma ";
			// 
			// radiobOpcao2
			// 
			this->radiobOpcao2->AutoSize = true;
			this->radiobOpcao2->Location = System::Drawing::Point(21, 62);
			this->radiobOpcao2->Name = L"radiobOpcao2";
			this->radiobOpcao2->Size = System::Drawing::Size(120, 17);
			this->radiobOpcao2->TabIndex = 6;
			this->radiobOpcao2->TabStop = true;
			this->radiobOpcao2->Text = L"Download Completo";
			this->radiobOpcao2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Local de armazenamento";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Forma de pagamento";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 451);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->rbtOpcao);
			this->Controls->Add(this->pict);
			this->Controls->Add(this->cbxOpcao);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chbEscolha);
			this->Controls->Add(this->txtEntrada);
			this->Controls->Add(this->btnOK);
			this->Name = L"Form1";
			this->Text = L"Istalação do Google Earth";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pict))->EndInit();
			this->rbtOpcao->ResumeLayout(false);
			this->rbtOpcao->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text = "";
			 if(chbEscolha->Checked)
				 lblMensagem->Text = lblMensagem->Text + "Download concluído com Baidu";
			 else 
				 lblMensagem->Text = lblMensagem->Text + "Download concluído";
			 lblMensagem->Text = lblMensagem->Text + "\nForma de pagamento: ";
				//Se fosse numero: System::Convert::ToString(cbxOpcao->SelectedItem) + ",";
				 lblMensagem->Text = lblMensagem->Text + cbxOpcao->SelectedItem + "\nLocal de armazenamento: ";
			 lblMensagem->Text = lblMensagem->Text + txtEntrada->Text;
			 if(radioaOpcao1->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::Green;
			 if(radiobOpcao2->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::Black;



		 }
private: System::Void txtEntrada_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

