#include "Alumno.hpp"
namespace Matricula{
	void menu(){
		CAlumno alumno;
		char opt;
		do{
			system("cls");
			cout<<"*****************************"<<endl;
			cout<<"								"<<endl;	
			cout<<"***********Menu**************"<<endl;	
			cout<<"*****************************"<<endl;	
			cout<<"*1.Registrar Alumno         *"<<endl;	
			cout<<"*2.Registrar Matricula      *"<<endl;		
			cout<<"*3.Eliminar Matricula       *"<<endl;	
			cout<<"*4.Mostrar Registro         *"<<endl;
			cout<<"*0.Salir                    *"<<endl;
			cout<<"*****************************"<<endl;
			cout<<"Ingrese una opcion: ";cin>>opt;
			switch(opt){
				case '1':alumno.registrarAlumno();break;
				case '2':alumno.registrarMatricula();break;
				case '3':alumno.eliminarMatricula();break;	
				case '4':alumno.mostrarRegistro();break;
			}
		}while(opt!='0');
	}
}
