#include <vector>
#include "Producto.hpp"
#ifndef _ARR_PRODUCTO_HPP_
#define _ARR_PRODUCTO_HPP_

class CarrProducto{
  vector<CProducto*> lista;
public:
  CarrProducto();
  ~CarrProducto();
  short getSize();
  vector<CProducto*> getLista();
  void insertar(CProducto* obj);
  CProducto* recuperar(short pos);
  void eliminarPorPosicion(char opt,short pos);
  void verTodo();
};
CarrProducto::CarrProducto(){}
CarrProducto::~CarrProducto(){}

void CarrProducto::insertar(CProducto* obj){
  lista.push_back(obj);
}
CProducto* CarrProducto::recuperar(short pos){
  if(pos<this->lista.size())
    return lista.at(pos);
  else return nullptr;
}
void CarrProducto::eliminarPorPosicion(char opt,short pos){
  if(toupper(opt)=='S'){  
    lista.erase(lista.begin()+pos);
    cout<<"Eliminado "<<endl;
  }else  cout<<"Ningun Cambio realizado"<<endl;
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
