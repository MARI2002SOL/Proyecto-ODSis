#pragma once
#include "MenuOpciones.h"
namespace ProyectoODSis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb_username;
	private: System::Windows::Forms::TextBox^ tb_password;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ b_login;
	private: System::Windows::Forms::Button^ b_exit;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->tb_username = (gcnew System::Windows::Forms::TextBox());
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->b_login = (gcnew System::Windows::Forms::Button());
			this->b_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_username
			// 
			this->tb_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->tb_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_username->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->tb_username->Location = System::Drawing::Point(12, 135);
			this->tb_username->Name = L"tb_username";
			this->tb_username->Size = System::Drawing::Size(122, 19);
			this->tb_username->TabIndex = 0;
			// 
			// tb_password
			// 
			this->tb_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->tb_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_password->Location = System::Drawing::Point(12, 194);
			this->tb_password->Name = L"tb_password";
			this->tb_password->PasswordChar = '*';
			this->tb_password->Size = System::Drawing::Size(122, 19);
			this->tb_password->TabIndex = 1;
			this->tb_password->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(120, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 49);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenido a ODSis";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel1->Location = System::Drawing::Point(12, 153);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(122, 5);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel2->Location = System::Drawing::Point(12, 212);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(122, 5);
			this->panel2->TabIndex = 4;
			// 
			// b_login
			// 
			this->b_login->BackColor = System::Drawing::Color::LightSkyBlue;
			this->b_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_login->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_login->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b_login->Location = System::Drawing::Point(12, 240);
			this->b_login->Name = L"b_login";
			this->b_login->Size = System::Drawing::Size(91, 30);
			this->b_login->TabIndex = 5;
			this->b_login->Text = L"Login";
			this->b_login->UseVisualStyleBackColor = false;
			this->b_login->Click += gcnew System::EventHandler(this, &Login::b_login_Click);
			// 
			// b_exit
			// 
			this->b_exit->BackColor = System::Drawing::Color::Transparent;
			this->b_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_exit->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_exit->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->b_exit->Location = System::Drawing::Point(428, 333);
			this->b_exit->Name = L"b_exit";
			this->b_exit->Size = System::Drawing::Size(91, 30);
			this->b_exit->TabIndex = 6;
			this->b_exit->Text = L"Exit";
			this->b_exit->UseVisualStyleBackColor = false;
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(531, 375);
			this->Controls->Add(this->b_exit);
			this->Controls->Add(this->b_login);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_password);
			this->Controls->Add(this->tb_username);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void b_login_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoODSis::MenuOpciones^ menuOpciones = gcnew ProyectoODSis::MenuOpciones();
		this->Visible = false;	
		menuOpciones->ShowDialog();
		this->Visible = true;
	}
};
}
