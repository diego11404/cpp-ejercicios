#include "Comprobante.hpp"

int main(){
  char opt;
  short pos;  
  char* name;
  CarrProducto* listProducto= new CarrProducto();
  CProducto* producto;  
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
      case '1':{
        system("cls");
        name=new char[10];
        float precio;
        short cantidad;
        cout<<"*********Insertar************"<<endl;cin.ignore();
        cout<<"Ingrese Nombre: ";cin>>name;
        cout<<"Ingrese Precio: ";cin>>precio;
        cout<<"Ingrese Cantidad: ";cin>>cantidad;
        producto=new CProducto((char*)name,precio,cantidad);
        listProducto->insertar(producto); 
      }break;
      case '2':{ 
        system("cls");
        cout<<"********Recuperar************"<<endl;cin.ignore();
        cout<<"ingrese Posicion: ";cin>>pos;
        CProducto* tmp = listProducto->recuperar(pos);
        if(tmp!=nullptr) tmp->getAll();
        else cout<<"POSICION VACIA"<<endl;
        system("pause");
      }break;
      case '3':
        system("cls");
        cout<<"****Eliminar X Posicion*****"<<endl;cin.ignore(); 
        cout<<"Ingrese Posicion a eliminar: ";cin>>pos;
        cout<<"Seguro de Desea Eliminar (s/n) "<<endl;cin>>opt;
        listProducto->eliminarPorPosicion(opt,pos);
        system("pause");
      break;
      case '4': listProducto->verTodo();system("pause"); break;
      case '5':       
      boleta=new CComprobante(listProducto,(char*)"07/07/07");
      boleta->showBoleta();system("pause"); break;
    }
  }while(opt!='0');
  system("pause");

  return 0;
}
