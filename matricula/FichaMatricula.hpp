#include <iostream>
#include <conio.h>
using namespace std;
namespace Matricula{
	class CFichaMatricula{
		short nCursos;
		char **Cursos;
		short* horas;
		short* sala;
	public:	
		CFichaMatricula(short nCursos,char **Cursos,short* horas,short* sala);
		~CFichaMatricula(){
			for(int i=0;i<nCursos;++i)
			delete[] this->Cursos[i];
			delete[] this->Cursos;
			delete[] this->horas;
			delete[] this->sala;
		}
		void MostrarRegistro();
	};
CFichaMatricula::CFichaMatricula(short nCursos,char **Cursos,short* horas,short* sala){
	this->nCursos=nCursos;
	this->Cursos=Cursos;
	this->horas=horas;
	this->sala=sala;
}
	void CFichaMatricula::MostrarRegistro(){
		cout<<"************MATRICULA**************"<<endl;
		for(int i=0;i<this->nCursos;++i){
			cout<<"Curso: "<<this->Cursos[i]<<endl;
			cout<<"Horas: "<<this->horas[i]<<endl;
			cout<<"Sala: "<<this->sala[i]<<endl;
			cout<<endl;
		}
	}
}
