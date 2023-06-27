#pragma once

namespace ProyectoODSis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proyectos
	/// </summary>
	public ref class Proyectos : public System::Windows::Forms::Form
	{
	public:
		Proyectos(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Proyectos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTitulo;
	private: System::Windows::Forms::TextBox^ txtMontoObjetivo;
	private: System::Windows::Forms::TextBox^ txtMontoRecaudado;
	private: System::Windows::Forms::DataGridView^ dataGridView;

	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Button^ btnEliminar;




	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->txtMontoObjetivo = (gcnew System::Windows::Forms::TextBox());
			this->txtMontoRecaudado = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(513, 52);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(450, 116);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Proyectos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(112, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Título";
			this->label2->Click += gcnew System::EventHandler(this, &Proyectos::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(112, 371);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(315, 54);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Monto objetivo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(112, 497);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(359, 54);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Monto recaudado";
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(560, 261);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(351, 38);
			this->txtTitulo->TabIndex = 4;
			// 
			// txtMontoObjetivo
			// 
			this->txtMontoObjetivo->Location = System::Drawing::Point(560, 385);
			this->txtMontoObjetivo->Name = L"txtMontoObjetivo";
			this->txtMontoObjetivo->Size = System::Drawing::Size(351, 38);
			this->txtMontoObjetivo->TabIndex = 5;
			// 
			// txtMontoRecaudado
			// 
			this->txtMontoRecaudado->Location = System::Drawing::Point(560, 511);
			this->txtMontoRecaudado->Name = L"txtMontoRecaudado";
			this->txtMontoRecaudado->Size = System::Drawing::Size(351, 38);
			this->txtMontoRecaudado->TabIndex = 6;
			// 
			// dataGridView
			// 
			this->dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.900001F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView->Location = System::Drawing::Point(97, 658);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 102;
			this->dataGridView->RowTemplate->Height = 40;
			this->dataGridView->Size = System::Drawing::Size(1207, 573);
			this->dataGridView->TabIndex = 7;
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::Color::Black;
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnGuardar->Location = System::Drawing::Point(1017, 371);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(218, 63);
			this->btnGuardar->TabIndex = 8;
			this->btnGuardar->Text = L"GUARDAR";
			this->btnGuardar->UseVisualStyleBackColor = false;
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::Black;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEditar->Location = System::Drawing::Point(745, 1282);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(218, 63);
			this->btnEditar->TabIndex = 9;
			this->btnEditar->Text = L"EDITAR";
			this->btnEditar->UseVisualStyleBackColor = false;
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::Black;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEliminar->Location = System::Drawing::Point(1064, 1282);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(218, 63);
			this->btnEliminar->TabIndex = 10;
			this->btnEliminar->Text = L"ELIMINAR";
			this->btnEliminar->UseVisualStyleBackColor = false;
			// 
			// Proyectos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(1358, 1382);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->txtMontoRecaudado);
			this->Controls->Add(this->txtMontoObjetivo);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"Proyectos";
			this->Text = L"Proyectos";
			this->Load += gcnew System::EventHandler(this, &Proyectos::Proyectos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Proyectos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
