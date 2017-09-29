#include "FichaMatricula.hpp"

namespace Matricula{
	class CAlumno{
		char* name;
		char* code;
		CFichaMatricula* fichaMat;
		public:
		CAlumno(char* a,char* b,CFichaMatricula* f);
		~CAlumno(){
			if(fichaMat!=NULL)
				delete fichaMat;
		}
		void eliminarMatricula(char opt);
		void mostrarRegistro();
	};
	CAlumno::CAlumno(char* name,char* code,CFichaMatricula* f){
		this->name=name;
		this->code=code;
		this->fichaMat=f;
	}
	void CAlumno::eliminarMatricula(char option){
		if(toupper(option)=='S'){
			cout<<"Matricula Eliminada"<<endl;
			delete fichaMat;	
		}else cout<<"Ningun Cambio Realizado"<<endl;
	}
	void CAlumno::mostrarRegistro(){
		cout<<"Datos del Alumno:"<<endl;
		cout<<"Nombre: "<<this->name<<endl;
		cout<<"Codigo: "<<this->code<<endl;
		if(this->fichaMat!=nullptr)
			this->fichaMat->MostrarRegistro();
		else cout<<"No existe Matricula"<<endl;	
	}
}
