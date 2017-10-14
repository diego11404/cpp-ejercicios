#include <iostream>
#include "CAlumno.hpp"
int main(){
  char opt;
  CFichaMatricula* ficha;
  CAlumno* alumno;
  CCurso* curso;

  char* nombre;
  long dni;
  long codigoAlumno;
  int capacidad;  

  char* sala;
  char* dia;
  char* hora;
  do{
    system("cls");
    std::cout<<"******Menu*****"<<std::endl;
    std::cout<<"1. Registrar Alumno"<<std::endl;
    std::cout<<"2. Matricular Alumno"<<std::endl;
    std::cout<<"3. Eliminar Matricula"<<std::endl;
    std::cout<<"4. Imprimir Matricula"<<std::endl;
    std::cout<<"0. Salir "<<std::endl;
    std::cout<<"Ingresar opcion: "; std::cin>>opt;
    
    switch(opt){
      case '1':
      system("cls");
      nombre = new char[10];
      std::cout<<"Ingresar nombre: "; std::cin>>nombre;
      std::cout<<"Ingresar dni: "; std::cin>>dni;
       break;
      case '2':
      system("cls");
      std::cout<<"Ingresar Codigo Alumno: "; std::cin>>codigoAlumno;   
      std::cout<<"Ingresar numero de Cursos: "; std::cin>>capacidad;      
      ficha = new CFichaMatricula(codigoAlumno,capacidad);

      for(int i=0;i<capacidad;i++){
        char* nombre = new char[10];
        sala = new char[10];
        dia = new char[10];
        hora = new char[10];
        std::cout<<"Curso: "<<i+1<<std::endl;
        std::cout<<"Ingresar nombre Curso: "; std::cin>>nombre; 
        std::cout<<"Ingresar sala: "; std::cin>>sala;
        std::cout<<"Ingresar dia: "; std::cin>>dia;   
        std::cout<<"Ingresar hora: "; std::cin>>hora;
        std::cout<<"\n"; 
        ficha->registrarMatricula(new CCurso((char*)nombre,(char*)sala,(char*)dia,(char*)hora));
      }
        alumno = new CAlumno(ficha,(char*)nombre,dni);
      system("pause");
       break;
      case '3':
       break;
      case '4':
      system("cls");
      std::cout<<"Datos de Alumno: "<<std::endl;      
      std::cout<<"Nombre: "<<nombre<<std::endl;
      std::cout<<"DNI: "<<dni<<std::endl;
      std::cout<<"Codigo: "<<ficha->getcodigoAlumno()<<std::endl;
      
      ficha->imprimir();
      system("pause");
      break; 
    }
  }while(opt!='0');
  return 0;
}