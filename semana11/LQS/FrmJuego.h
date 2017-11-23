#pragma once

namespace LQS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmJuego
	/// </summary>
	public ref class FrmJuego : public System::Windows::Forms::Form
	{
	public:
		FrmJuego(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			lienzo = this->CreateGraphics();
			this->fila = 0;
			this->columna = 0;
			this->fila2 = 0;
			this->columna2 = 0;
			this->imagen = gcnew Bitmap("recursos/gras.jpg");;
			this->p1 = gcnew Bitmap("recursos/p1.png");;
			this->p2 = gcnew Bitmap("recursos/p1.png");;
			ancho = p1->Width / 4;
			alto = p1->Height / 4;
			dx = 30;
			dy = 30;
			dx2 = 300;
			dy2= 300;
			vida1=40;
			vida2=40;
			control = 0;
			sx = 0; ///derecha1, izq=-1
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmJuego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		Graphics ^ lienzo;
		int fila;
		int columna;
		int fila2;
		int columna2;
		int ancho;
		int alto;
		int vida1, vida2;
		Bitmap^ imagen;
		Bitmap^ p1;
		Bitmap^ p2;
		private: System::Windows::Forms::Timer^  timer1;
		int	 dx ;
		int	 dy ;
		int	 dx2;
		int	 dy2;
		short control;
		int sx;
		unsigned int time;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmJuego::timer1_Tick);
			// 
			// FrmJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 412);
			this->Name = L"FrmJuego";
			this->Text = L"FrmJuego";
			this->Load += gcnew System::EventHandler(this, &FrmJuego::FrmJuego_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmJuego::FrmJuego_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmJuego::FrmJuego_KeyDown);
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void FrmJuego_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void FrmJuego_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	}
	private: System::Void FrmJuego_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Up) {
			fila = 3;
			dy -= 5;
			control = 1;
		}else  if (e->KeyCode == Keys::Down) {
			fila = 0;
			dy += 5;
			control = 1;
		}else if (e->KeyCode == Keys::Left) {
			fila = 1;
			dx -= 5;
			control = 1;

		}else if (e->KeyCode == Keys::Right) {
			fila = 2;
			dx += 5;
			control = 1;

		}else if (e->KeyCode == Keys::D) {
			fila2 = 2;
			dx2 += 5;
			control = 2;
		}else if (e->KeyCode == Keys::A) {
			fila2 = 1;
			dx2 -= 5;
			control = 2;

		}
		else if (e->KeyCode == Keys::S) {
			fila2 = 0;
			dy2 += 5;
			control = 2;

		}
		else if (e->KeyCode == Keys::W) {
			fila2 = 3;
			dy2 -= 5;
			control = 2;
		}
		else if (e->KeyCode == Keys::Space && control==1) {
			sx = 1;
		}
		else if (e->KeyCode == Keys::Space && control ==2) {
			sx=-1;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		time += 16.6;
		if (time >1000/60 ) {
			Rectangle r1(columna*ancho, fila*alto, ancho, alto);
			Rectangle r2(columna*ancho, fila2*alto, ancho, alto);
			lienzo->DrawImage(imagen, 0, 0, 1000, 400);
			lienzo->DrawImage(p1, dx, dy, r1, GraphicsUnit::Pixel);
			lienzo->DrawImage(p2, dx2, dy2, r2, GraphicsUnit::Pixel);
			lienzo->FillRectangle(Brushes::Red, 10, 10, vida1 * 5, 20);
			lienzo->FillRectangle(Brushes::Blue, 600, 10, vida2 * 5, 20);
			Rectangle col(dx, dx, ancho, alto);
			Rectangle col2(dy, dy2, ancho, alto);
			sx++;
			if (control == 1) {
				lienzo->FillEllipse(Brushes::Black, sx*(dx + 10), dy*sx, 30, 30);
			}
			else if (control == 2) {
				lienzo->FillEllipse(Brushes::Black, sx*(dx2 + 10), dy2 *sx, 30, 30);
			}

			if (col.IntersectsWith(col2) && control == 1)
				vida2--;
			else {
				if (col2.IntersectsWith(col) && control == 2)
					vida1--;
			}
			columna++;
			if (columna > 3) {
				columna = 0;
			}
		}
		
		
	}
	};
}
