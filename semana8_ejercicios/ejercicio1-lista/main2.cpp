#include <iostream>
#include "CArrArticulo.hpp"
#include "CLista.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main(){
  srand((int)time(NULL));
  string nombres[]={"Diego","juan","Rafa","tm","fast","color","jaja","breik","loc","afraid"};
  int precio[]={1,2,3,4,5,6,7,8,9,10};
  char opt;
  char *name;
  long dni;
  CLista<CArrArticulo*>* compras= new CLista<CArrArticulo*>();
  CCliente *cli;
  CArrArticulo *arrArt;
  CArticulo* art;
  do{
    system("cls");
      std::cout<<"*****Menu****"<<std::endl;
      std::cout<<"1. Ingresar compra"<<std::endl;
      std::cout<<"2. Mostrar compra"<<std::endl;
      std::cout<<"3. Eliminar compra"<<std::endl;
      std::cout<<"0. Salir"<<std::endl;
      std::cout<<"Ingrese opcion: ";std::cin>>opt;
      switch(opt){
        case '1' :
        system("cls");
        name= new char[10];
        std::cout<<"Nombre Cliente: ";cin>>name;
        std::cout<<"DNI ";cin>>dni;
        cli=new CCliente((char*)name,dni);
        arrArt = new CArrArticulo(cli);
        for(int i=0;i< 5;i++){
            //art= new CArticulo((char*)"cama",2+i,34+i);
            arrArt->Insertar(new CArticulo(nombres[rand()%10],precio[rand()%10],precio[rand()%10]));
        }
        compras->insertarFinal(arrArt);
        system("pause");
        break;
        case '2': 
        system("cls");
        for(int i=0;i<compras->getnElementos();i++){
          cout<<"Compra: "<<i+1<<"\n";
          compras->buscarXposSiguiente(i)->getElemento()->mostrarTodo();
          cout<<"\n";
        }
        cout<<"\n";
        system("pause");
        break;
        case '3':
        system("cls");
        compras->atender();
        system("pause");
        
        break;
      }
  }while(opt!='0'); 
  //delete compras;
  //delete cli;
  //delete art;
  //delete arrArt;
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
