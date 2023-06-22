#pragma once

#include <mysql.h>

#include "Donaciones.h"
#include "Inventario.h"
#include "Proyectos.h"

using namespace ProyectoODSis;

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
	private:
		MYSQL* conn;
		bool dragging = false;
		Point offset;
	public:
		MenuOpciones(void)
		{
			InitializeComponent();
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
		System::ComponentModel::Container^ components;

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
			this->panelLateral->Margin = System::Windows::Forms::Padding(2);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(231, 513);
			this->panelLateral->TabIndex = 0;
			this->panelLateral->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuOpciones::panelLateral_MouseDown);
			this->panelLateral->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuOpciones::panelLateral_MouseMove);
			this->panelLateral->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuOpciones::panelLateral_MouseUp);
			// 
			// btnSalir
			// 
			this->btnSalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSalir->Location = System::Drawing::Point(0, 246);
			this->btnSalir->Margin = System::Windows::Forms::Padding(2);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(231, 51);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MenuOpciones::btnSalir_Click);
			// 
			// btnProyectos
			// 
			this->btnProyectos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProyectos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProyectos->Location = System::Drawing::Point(0, 195);
			this->btnProyectos->Margin = System::Windows::Forms::Padding(2);
			this->btnProyectos->Name = L"btnProyectos";
			this->btnProyectos->Size = System::Drawing::Size(231, 51);
			this->btnProyectos->TabIndex = 3;
			this->btnProyectos->Text = L"Proyectos";
			this->btnProyectos->UseVisualStyleBackColor = true;
			this->btnProyectos->Click += gcnew System::EventHandler(this, &MenuOpciones::btnProyectos_Click);
			// 
			// btnInventario
			// 
			this->btnInventario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInventario->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnInventario->Location = System::Drawing::Point(0, 144);
			this->btnInventario->Margin = System::Windows::Forms::Padding(2);
			this->btnInventario->Name = L"btnInventario";
			this->btnInventario->Size = System::Drawing::Size(231, 51);
			this->btnInventario->TabIndex = 2;
			this->btnInventario->Text = L"Inventario";
			this->btnInventario->UseVisualStyleBackColor = true;
			this->btnInventario->Click += gcnew System::EventHandler(this, &MenuOpciones::btnInventario_Click);
			// 
			// btnDonaciones
			// 
			this->btnDonaciones->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDonaciones->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDonaciones->Location = System::Drawing::Point(0, 93);
			this->btnDonaciones->Margin = System::Windows::Forms::Padding(2);
			this->btnDonaciones->Name = L"btnDonaciones";
			this->btnDonaciones->Size = System::Drawing::Size(231, 51);
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
			this->margenTop->Margin = System::Windows::Forms::Padding(2);
			this->margenTop->Name = L"margenTop";
			this->margenTop->Size = System::Drawing::Size(231, 93);
			this->margenTop->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 34);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OPCIONES";
			this->label1->Click += gcnew System::EventHandler(this, &MenuOpciones::label1_Click);
			// 
			// panelContenedor
			// 
			this->panelContenedor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(231, 0);
			this->panelContenedor->Margin = System::Windows::Forms::Padding(2);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(715, 513);
			this->panelContenedor->TabIndex = 1;
			this->panelContenedor->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuOpciones::panelContenedor_MouseDown);
			this->panelContenedor->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuOpciones::panelContenedor_MouseMove);
			this->panelContenedor->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuOpciones::panelContenedor_MouseUp);
			// 
			// MenuOpciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 513);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panelLateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
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
		MessageBox::Show("Salir lo hará desconectarse de su sesión ¿Está seguro que quiere salir?", "Aviso", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (DialogResult == System::Windows::Forms::DialogResult::Yes) {
			//mysql_close(conn);
			//TODO: Cerrar ventana, volver a login
		}
	}
	private: System::Void panelContenedor_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void panelLateral_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void panelContenedor_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}
	private: System::Void panelLateral_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}
	private: System::Void panelContenedor_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPos = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPos.X - offset.X, currentScreenPos.Y - offset.Y);
		}
	}
	private: System::Void panelLateral_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPos = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPos.X - offset.X, currentScreenPos.Y - offset.Y);
		}
	}
	};
}
