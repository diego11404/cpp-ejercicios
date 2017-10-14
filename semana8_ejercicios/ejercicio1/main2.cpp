#include <iostream>
#include "CArrArticulo.hpp"
#include "CLista.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main(){
  char opt;
  char *name;
  long dni;
  CCliente *cli;
  CArrArticulo *arrArt;
  CArticulo* art;
  CLista<CArrArticulo*>* listaArticulo= new CLista<CArrArticulo*>();
  CLista<CArticulo*>* articulo= new CLista<CArticulo*>();
  
  do{
    system("cls");
    
      std::cout<<"*****Menu****"<<std::endl;
      std::cout<<"1. Ingresar productos"<<std::endl;
      std::cout<<"2. Mostrar productos"<<std::endl;
      std::cout<<"0. Salir"<<std::endl;
      std::cout<<"Ingrese opcion: ";std::cin>>opt;
      switch(opt){
        case '1' :
        system("cls");
        name= new char[10];
        int cantidad;
        std::cout<<"Nombre Cliente: ";cin>>name;
        std::cout<<"DNI ";cin>>dni;
        std::cout<<"Cantidad ";cin>>cantidad;
        cli=new CCliente((char*)name,dni);
        arrArt = new CArrArticulo(cli,cantidad);
        for(int i=0;i<cantidad;i++){
            articulo->anteponer(new CArticulo((char*)"cama",2+i,34+i));
            //art= new CArticulo((char*)"cama",2+i,34+i);
            arrArt->Insertar(articulo->buscarXposAnterior(i)->getElemento());
        }
        listaArticulo->anteponer(arrArt);
        system("pause");
        break;
        case '2': 
        system("cls");
        for(int i=0;i<listaArticulo->getnElementos();i++){
          listaArticulo->buscarXposAnterior(i)->getElemento()->mostrarTodo();
        }
        system("pause");
        break;
      }

  }while(opt!='0'); 
  /*srand((int)time(NULL));
  char** arr = new char*[3];
  arr[0]= (char*)"Diego";
  arr[1]= (char*)"Cesar";
  arr[2]= (char*)"Julio";
  

  CArrArticulo* arrArt; 
  ////////////////////////////////////////////////////////
  for(int i=0;i <10;i++){
    arrArt= new CArrArticulo(new CCliente((char*)arr[rand()%3],rand()%44+7000),10+i);
    for(int j=0;j<3;j++)
      arrArt->Insertar(new CArticulo((char*)"cama",2+j,34+j));
    listaArticulo->anteponer(arrArt);
  }
  ////////////////////////////////////////////////////////////
  for(int i=0;i <listaArticulo->getnElementos();i++){
   listaArticulo->recuperar(i)->mostrarTodo();
   //std::cout<<listaArticulo->buscarXposSiguiente(i)->getElemento()->getCliente()->getName()<<"\n"; 
  }

  delete listaArticulo;
  */
  return 0;
}
