#include <vector>
#include "Producto.hpp"
#ifndef _ARR_PRODUCTO_HPP_
#define _ARR_PRODUCTO_HPP_
class CarrProducto{
  vector<CProducto*> lista;
  CProducto* producto;
public:
  CarrProducto();
  ~CarrProducto();
  short getSize();
  vector<CProducto*> getLista();
  void insertar();
  void recuperar();
  void eliminarPorPosicion();
  void verTodo();
};
CarrProducto::CarrProducto(){}
CarrProducto::~CarrProducto(){}

void CarrProducto::insertar(){
  system("cls");
  char* name=new char[10];
  float precio;
  short cantidad;
  cout<<"*********Insertar************"<<endl;cin.ignore();
  cout<<"Ingrese Nombre: ";cin>>name;
  cout<<"Ingrese Precio: ";cin>>precio;
  cout<<"Ingrese Cantidad: ";cin>>cantidad;
  producto=new CProducto((char*)name,precio,cantidad);
  lista.push_back(producto);
  
}
void CarrProducto::recuperar(){
  system("cls");
  short pos;
  cout<<"********Recuperar************"<<endl;cin.ignore();
  cout<<"ingrese Posicion: ";cin>>pos;
  CProducto* tmp=lista.at(pos);
  tmp->getAll();
}
void CarrProducto::eliminarPorPosicion(){
  system("cls");
  short pos;
  char opt;
  cout<<"****Eliminar X Posicion*****"<<endl;cin.ignore(); 
  cout<<"Ingrese Posicion a eliminar: ";cin>>pos;
  cout<<"Seguro de Desea Eliminar (s/n) "<<endl;cin>>opt;
  if(toupper(opt)=='S'){  
    lista.erase(lista.begin()+pos);
    cout<<"Eliminado "<<endl;
  }else 
    cout<<"Ningun Cambio realizado"<<endl;
}
short CarrProducto::getSize(){
  return lista.size();
}
vector<CProducto*> CarrProducto::getLista(){
  return lista;
}
void CarrProducto::verTodo(){
  system("cls");
  for(int i=0;i<lista.size();++i){
    cout<<i+1<<". ";
    lista[i]->getAll();
  }
}
#endif
