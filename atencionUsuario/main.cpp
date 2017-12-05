#include "CColaUsuario.hpp"
#include <cstdlib>
int main(){
  char opt;
  bool flag;
  char* name;
  char* lastName;
  char typeUser;
  short userCode;
  short ticker=0;
  CColaUsuario* cola= new CColaUsuario(5);
  do{
    system("clear");
    std::cout<<"*****Menu*******"<<std::endl;
    std::cout<<"1.Insertar"<<std::endl;
    std::cout<<"2.Atender"<<std::endl;
    std::cout<<"3.Atender X Tipo"<<std::endl;
    std::cout<<"4.Mostrar Todos"<<std::endl;
    std::cout<<"5.Mostrar Atendidos"<<std::endl;    
    std::cout<<"0.Salir"<<std::endl;        
    std::cout<<"Ingresa Opcion: "; std::cin>>opt;
    switch(opt){
      case '1':
        system("clear");
        name = new char[10];
        lastName= new char[10];
        std::cout<<"*****Insertar*******"<<std::endl;
        std::cout<<"Ingrese nombre: "; std::cin>>name;
        std::cout<<"Ingrese apellido: ";std::cin>>lastName;
        std::cout<<"Ingrese Tipo Usuario: ";std::cin>>typeUser;
        std::cout<<"Ingrese Codigo usuario: ";std::cin>>userCode;
        flag=cola->insertar(new CUsuario((char*)name,(char*)lastName,typeUser,userCode,++ticker));
        if(flag) std::cout<<"Insertado"<<std::endl;
        else  std::cout<<"Error"<<std::endl;
        std::cin.get();
        std::cin.get();
      break;
      case '2': 
        system("clear");      
        std::cout<<"******Atender*****"<<std::endl;
        cola->atender();
        std::cin.get();
      break;
      case '3': 
        system("clear");      
        std::cout<<"******Atender X Tipo*****"<<std::endl;
        std::cout<<"Ingrese Tipo: "; std::cin>>opt;
        cola->atenderXtipo(opt);
        std::cin.get();
        std::cin.get();
      break;
      case '4': 
        system("clear");
        std::cout<<"******Cola*****"<<std::endl;
        cola->mostrarCola();
        std::cin.get();
        std::cin.get();
        break;
      case '5': 
        system("clear");
        std::cout<<"******Atendidos*****"<<std::endl;
        cola->mostrarAtendidos();std::cin.get();
        std::cin.get();
        std::cin.get();
        break;
    }

  }while(opt!='0');

}