#pragma once
namespace semana9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Demo : public System::Windows::Forms::Form	{
	public:
		Demo(void){
			InitializeComponent();
			//lienzo = gcnew Graphics();
			lienzo = this->CreateGraphics(); //preparar el formulario para dibujar;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Demo(){
			if (components){
				delete components;
			}
		}
	private:
		System::ComponentModel::Container ^components;
		Graphics ^ lienzo;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)	{
			this->SuspendLayout();
		
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(643, 338);
			this->Name = L"Demo";
			this->Text = L"Demo";
//			this->Click += gcnew System::EventHandler(this, &Demo::Demo_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Demo::Demo_Paint);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Demo::Demo_MouseClick);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Demo_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		/*Pen ^lapiz = gcnew Pen(Color::Blue);
		lienzo->DrawLine(lapiz, 30, 30, 30, 100);
		lienzo->DrawLine(Pens::Red, 30, 100, 80, 100);
		lienzo->DrawLine(Pens::Red, 80, 100, 80, 30);

		lienzo->DrawLine(Pens::Red, 100, 30, 100, 100);
		lienzo->DrawLine(Pens::Red, 100,30, 150, 30);
		lienzo->DrawLine(Pens::Red, 150, 30, 150, 70);
		lienzo->DrawLine(Pens::Red, 150, 70, 100, 70);

		lienzo->DrawLine(Pens::Red, 190, 30, 160, 100);
		lienzo->DrawLine(Pens::Red, 190, 30, 220, 100);
		lienzo->DrawLine(Pens::Red, 170, 75, 210, 75);
		lienzo->DrawEllipse(Pens::Green,230,30,75,75);
		*/
		//lienzo->DrawRectangle(Pens::Gray, 80, 30, 100, 50);
		// UPAO
		for (int w=60, h =80, i = 0, x = 70, y = 50; i < 4; i++, x+=90) {
			lienzo->DrawRectangle(Pens::Green, x, y, w, h);
			if (!i) lienzo->DrawLine(Pens::White, x, y, x + w, y);
			if (i == 1) {
				lienzo->DrawLine(Pens::Green, x, y + (h/2), x + w, y + (h/2));
				//lienzo->DrawRectangle(gcnew Pen(Color::Green), x+1, y + 1 + (h/2), w -1, (h/2)-1);
				lienzo->FillRectangle(Brushes::White, x + 1, y + 1 + (h / 2), w, (h / 2));
			}
			if (i == 2) {
				//lienzo->DrawLine(Pens::Green, x, y + (h / 2), x + w, y + (h/2));
				//lienzo->DrawLine(Pens::White, x, y + h, x + w, y + h);
				lienzo->DrawLine(Pens::Green,x,y+(h/2),x+w,y+(h/2));
				lienzo->DrawLine(Pens::White, x, y + h, x+w,y+h);

			}
		}
		// 1 1 2 3 5 8 13 21 34
		//lienzo->DrawEllipse(Pens::Black, 80, 150, 50, 50);
	}
	
			 int lastX = 0;
			 int lastY = 0;

	private: System::Void Demo_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		/*
		if (lastX > 0 || lastY > 0) {
		//int lx = lastX > e->X ?  : ;
		int ly = 0;
		lienzo->DrawLine(Pens::Red, lastX, lastY, e->X+25, e->Y+25);
		lienzo->DrawLine(Pens::Red, e->X, e->Y+25, e->X-15, e->Y+10);
		lienzo->DrawLine(Pens::Red, e->X, e->Y + 25, e->X - 15, e->Y +35);


		//lienzo->DrawEllipse(Pens::Black, e->X, e->Y, 50, 50);
		lienzo->FillEllipse(Brushes::Green, lastX -25,lastY-25, 50, 50);
		}*/
		if (lastX > 0 || lastY > 0) {
			//int lx = lastX > e->X ?  : ;
			int ly = 0;
			lienzo->DrawLine(Pens::Red, lastX, lastY, e->X, e->Y);
			lienzo->FillEllipse(Brushes::Green, lastX - 25, lastY - 25, 50, 50);
		}
		
		lienzo->DrawEllipse(Pens::Black, e->X - 25, e->Y -25, 50, 50);
		lienzo->FillEllipse(Brushes::Green, e->X-25 , e->Y-25 , 50, 50);
		lastX = e->X;
		lastY = e->Y;
	}
	};
}
