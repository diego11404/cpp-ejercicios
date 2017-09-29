#include "Comprobante.hpp"

int main(){
  char opt;
  CarrProducto* listProducto= new CarrProducto();
  CComprobante* boleta;
  do{
    system("cls");
    cout<<"********************"<<endl;
    cout<<"*******Menu*********"<<endl;
    cout<<"1.Insertar"<<endl;
    cout<<"2.Recuperar"<<endl;
    cout<<"3.Eliminar por posicion"<<endl;
    cout<<"4.Ver Todo"<<endl; 
    cout<<"5.Boleta"<<endl;    
    cout<<"0.Salir"<<endl;
    cout<<"Ingrese opcion: ";cin>>opt;
    switch(opt){
      case '1': listProducto->insertar(); break;
      case '2': listProducto->recuperar();system("pause");  break;
      case '3': listProducto->eliminarPorPosicion();system("pause");  break;
      case '4': listProducto->verTodo();system("pause"); break;
      case '5':       
      boleta=new CComprobante(listProducto,(char*)"07/07/07");
      boleta->showBoleta();system("pause"); break;
    }
  }while(opt!='0');
  system("pause");

  return 0;
}
