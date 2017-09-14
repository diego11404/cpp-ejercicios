#include <iostream>
#include <conio.h>
using namespace std;
#define MaxCursos 20

namespace Matricula{
	class CFichaMatricula{
		short nCursos;
		char **Cursos;
		short* horas;
		short* sala;
	public:	
		CFichaMatricula(short nCursos){
			this->nCursos=nCursos;
			this->Cursos=new char*[nCursos];
			this->horas= new short[nCursos];
			this->sala=new short[nCursos];
			for(int i=0;i<this->nCursos;++i)
				this->Cursos[i]= new char[MaxCursos];
		}
		~CFichaMatricula(){
			for(int i=0;i<nCursos;++i)
			delete[] this->Cursos[i];
			delete[] this->Cursos;
			delete[] this->horas;
			delete[] this->sala;
		}
		void IngresarRegistro();
		void MostrarRegistro();
	};
	void CFichaMatricula::IngresarRegistro(){
		for(int i=0;i<this->nCursos;++i){
			cout<<"Registro : "<<i+1<<endl;cin.ignore();
			cout<<"Ingrese Curso : "; cin.get(this->Cursos[i],MaxCursos);
			cout<<"Ingrese horas : "; cin>>this->horas[i];
			cout<<"Ingrese Salas : "; cin>>this->sala[i];
			cout<<endl;
		}
	}
	void CFichaMatricula::MostrarRegistro(){
		cout<<"************MATRICULA**************"<<endl;
		for(int i=0;i<this->nCursos;++i){
			cout<<"Curso: "<<this->Cursos[i]<<endl;
			cout<<"Horas: "<<this->horas[i]<<endl;
			cout<<"Sala: "<<this->sala[i]<<endl;
			cout<<endl;
		}
		getch();
	}
}
