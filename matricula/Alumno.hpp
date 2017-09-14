#include "FichaMatricula.hpp"
#define MaxLongName 20
#define MaxLongcodigo 10
namespace Matricula{
	class CAlumno{
		char name[MaxLongName];
		char code[MaxLongcodigo];
		CFichaMatricula* fichaMat;
		public:
		CAlumno(){fichaMat = NULL;}
		~CAlumno(){
			if(fichaMat!=NULL)
				delete fichaMat;
		}
		void registrarAlumno();
		void registrarMatricula();
		void eliminarMatricula();
		void mostrarRegistro();
	};
	void CAlumno::registrarAlumno(){
		system("cls");
		cout<<"********Registro Alumno****************"<<endl; cin.ignore();	
		cout<<"Codigo: "; cin.get(this->code,MaxLongcodigo);cin.ignore();
		cout<<"Nombre : ";cin.get(this->name,MaxLongName);
		cout<<endl;
	}
	void CAlumno::registrarMatricula(){
		system("cls");
		short nCursos;
		cout<<"Indique el Numero de Cursos que desea llevar: ";cin>>nCursos;
		fichaMat = new CFichaMatricula(nCursos);
		fichaMat->IngresarRegistro();
	}
	void CAlumno::eliminarMatricula(){
		system("cls");
		char option;
		cout<<"Seguro que desea eliminar matricula (s/n)";cin>>option;
		if(toupper(option)=='S'){
			cout<<"Matricula Eliminada"<<endl;
			delete fichaMat;	
		}else cout<<"Ningun Cambio Realizado"<<endl;
		getch();
	}
	void CAlumno::mostrarRegistro(){
		system("cls");
		cout<<"Datos del Alumno:"<<endl;
		cout<<"Nombre: "<<this->name<<endl;
		cout<<"Codigo: "<<this->code<<endl;
		this->fichaMat->MostrarRegistro();
	}
}
