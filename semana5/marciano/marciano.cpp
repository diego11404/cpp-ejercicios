#include <iostream>
#include "venta.hpp"

int main(){
  SVenta v;
 // SMarciano m;
  char opt;
  char* sabor;
  float precio;
  short pos;
  do{
    system("cls");
    cout<<"******Menu*******"<<endl;
    cout<<"1. registrar"<<endl;
    cout<<"2. Eliminar"<<endl;
    cout<<"3. Obtener"<<endl;
    cout<<"0.Salir"<<endl;
    cout<<"Ingrese Opcion: ";cin>>opt;
    switch(opt){
      case '1':{
        sabor= new char[10];
        cout<<"Ingrese Sabor: ";cin>>sabor;
        cout<<"Ingrese Precio: ";cin>>precio;
        SMarciano m((char*)sabor,precio);
        v.insertar(m);
        system("pause");
      }break;
      case '2':
        cout<<" Ingrese la posicion a Eliminar: ";
        cin>>pos;
        v.eliminar(pos);
        system("pause");
      break;
      case '3':
      cout<<" Ingrese la posicion a Obtner: ";cin>>pos;
      SMarciano tmp= v.obtener(pos);      
      cout<<tmp.sabor<<" - "<<tmp.precio<<endl;
      system("pause"); 
      break; 
          
    }
  }while(opt!='0');

  
  
  
 return 0;
}