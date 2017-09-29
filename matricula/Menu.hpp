#include "Alumno.hpp"
namespace Matricula{
	void menu(){
		char* name;
		char* code;
		CFichaMatricula* fichaMat;
		CAlumno* alumno;
		short nCursos;
		char **Cursos;
		short* horas;
		short* sala;
		char option;
		char opt;
		do{
			system("cls");
			cout<<"***********Menu**************"<<endl;	
			cout<<"*****************************"<<endl;	
			cout<<"*1.Registrar Matricula         *"<<endl;			
			cout<<"*2.Eliminar Matricula       *"<<endl;	
			cout<<"*3.Mostrar Registro         *"<<endl;
			cout<<"*0.Salir                    *"<<endl;
			cout<<"Ingrese una opcion: ";cin>>opt;
			switch(opt){
				case '1':
					system("cls");
					cout<<"Indique el Numero de Cursos que desea llevar: ";cin>>nCursos;
					name = new char[10];
					code = new char[20];
					Cursos= new char*[nCursos];
					horas= new short[10];
					sala= new short[10];
					for(int i=0;i<nCursos;++i){
						Cursos[i]= new char[20];
						cout<<"Registro : "<<i+1<<endl;cin.ignore();
						cout<<"Ingrese Curso : "; cin>>Cursos[i];
						cout<<"Ingrese horas : "; cin>>horas[i];
						cout<<"Ingrese Salas : "; cin>>sala[i];
						cout<<endl;
					}
					fichaMat = new CFichaMatricula(nCursos,(char**)Cursos,horas,sala);
					cout<<"*****Registro Alumno*****"<<endl; cin.ignore();	
					cout<<"Codigo: "; cin>>code;
					cout<<"Nombre : ";cin>>name;
					alumno= new CAlumno((char*)name,(char*)code,fichaMat);
					system("pause");	break;
				case '2':
					system("cls");
					cout<<"Seguro que desea eliminar matricula (s/n): ";cin>>option;
					alumno->eliminarMatricula(option);
					system("pause");
				break;
				case '3':
					system("cls");
					alumno->mostrarRegistro();
					system("pause");					
				break;	
			}
		}while(opt!='0');
	}
}
