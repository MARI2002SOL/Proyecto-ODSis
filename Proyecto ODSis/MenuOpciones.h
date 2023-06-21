#include "Donaciones.h"
#include "Inventario.h"
#include "Proyectos.h"
#pragma once

namespace ProyectoODSis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuOpciones
	/// </summary>
	public ref class MenuOpciones : public System::Windows::Forms::Form
	{
	public:
		MenuOpciones(void)
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
		~MenuOpciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLateral;
	protected:
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnProyectos;
	private: System::Windows::Forms::Button^ btnInventario;
	private: System::Windows::Forms::Button^ btnDonaciones;
	private: System::Windows::Forms::Panel^ margenTop;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelContenedor;


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
			this->panelLateral = (gcnew System::Windows::Forms::Panel());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnProyectos = (gcnew System::Windows::Forms::Button());
			this->btnInventario = (gcnew System::Windows::Forms::Button());
			this->btnDonaciones = (gcnew System::Windows::Forms::Button());
			this->margenTop = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->panelLateral->SuspendLayout();
			this->margenTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLateral
			// 
			this->panelLateral->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelLateral->Controls->Add(this->btnSalir);
			this->panelLateral->Controls->Add(this->btnProyectos);
			this->panelLateral->Controls->Add(this->btnInventario);
			this->panelLateral->Controls->Add(this->btnDonaciones);
			this->panelLateral->Controls->Add(this->margenTop);
			this->panelLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLateral->Location = System::Drawing::Point(0, 0);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(308, 631);
			this->panelLateral->TabIndex = 0;
			// 
			// btnSalir
			// 
			this->btnSalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSalir->Location = System::Drawing::Point(0, 303);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(308, 63);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MenuOpciones::btnSalir_Click);
			// 
			// btnProyectos
			// 
			this->btnProyectos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProyectos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProyectos->Location = System::Drawing::Point(0, 240);
			this->btnProyectos->Name = L"btnProyectos";
			this->btnProyectos->Size = System::Drawing::Size(308, 63);
			this->btnProyectos->TabIndex = 3;
			this->btnProyectos->Text = L"Proyectos";
			this->btnProyectos->UseVisualStyleBackColor = true;
			this->btnProyectos->Click += gcnew System::EventHandler(this, &MenuOpciones::btnProyectos_Click);
			// 
			// btnInventario
			// 
			this->btnInventario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInventario->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnInventario->Location = System::Drawing::Point(0, 177);
			this->btnInventario->Name = L"btnInventario";
			this->btnInventario->Size = System::Drawing::Size(308, 63);
			this->btnInventario->TabIndex = 2;
			this->btnInventario->Text = L"Inventario";
			this->btnInventario->UseVisualStyleBackColor = true;
			this->btnInventario->Click += gcnew System::EventHandler(this, &MenuOpciones::btnInventario_Click);
			// 
			// btnDonaciones
			// 
			this->btnDonaciones->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDonaciones->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDonaciones->Location = System::Drawing::Point(0, 114);
			this->btnDonaciones->Name = L"btnDonaciones";
			this->btnDonaciones->Size = System::Drawing::Size(308, 63);
			this->btnDonaciones->TabIndex = 1;
			this->btnDonaciones->Text = L"Donaciones";
			this->btnDonaciones->UseVisualStyleBackColor = true;
			this->btnDonaciones->Click += gcnew System::EventHandler(this, &MenuOpciones::btnDonaciones_Click);
			// 
			// margenTop
			// 
			this->margenTop->Controls->Add(this->label1);
			this->margenTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->margenTop->Location = System::Drawing::Point(0, 0);
			this->margenTop->Name = L"margenTop";
			this->margenTop->Size = System::Drawing::Size(308, 114);
			this->margenTop->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OPCIONES";
			this->label1->Click += gcnew System::EventHandler(this, &MenuOpciones::label1_Click);
			// 
			// panelContenedor
			// 
			this->panelContenedor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(308, 0);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(954, 631);
			this->panelContenedor->TabIndex = 1;
			// 
			// MenuOpciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 631);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panelLateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuOpciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuOpciones";
			this->panelLateral->ResumeLayout(false);
			this->margenTop->ResumeLayout(false);
			this->margenTop->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class T>
		void AbrirPanel(T FormHijo) {
			if (this->panelContenedor->Controls->Count > 0)
				this->panelContenedor->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panelContenedor->Controls->Add(FormHijo);
			this->panelContenedor->Tag = FormHijo;
			FormHijo->Show();
		}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDonaciones_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew ProyectoODSis::Donaciones);
	} 
	private: System::Void btnInventario_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew ProyectoODSis::Inventario);
	}
	private: System::Void btnProyectos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew ProyectoODSis::Proyectos);

	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
