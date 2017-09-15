#include <iostream>
#ifndef _PRODUCTO_HPP_
#define _PRODUCTO_HPP_
using namespace std;
class CProducto{
  char* name;
  float precio;
  short cantidad;
public:
  CProducto();
  CProducto(char* name,float precio,short cantidad);
  ~CProducto();

  char* getName();
  float getPrecio();
  short getCantidad();
  void setName(char* name);
  void setPrecio(float precio);
  void setCantidad(short cantidad);
  void getAll();
};
CProducto::CProducto(){
  this->name=new char[10];
  this->precio=0;
  this->cantidad=0;
}
CProducto::CProducto(char* name,float precio,short cantidad){
  this->name=name;
  this->precio=precio;
  this->cantidad=cantidad;
}
char* CProducto::getName(){return this->name;}
float CProducto::getPrecio(){return this->precio;}
short CProducto::getCantidad(){return this->cantidad;}

void CProducto::setName(char* name){this->name=name;}
void CProducto::setPrecio(float precio){this->precio=precio;}
void CProducto::setCantidad(short cantidad){this->cantidad=cantidad;}
void CProducto::getAll(){
  cout<<this->getName()<<" "<<this->getPrecio()<<" "<<this->getCantidad()<<endl;
}
#endif