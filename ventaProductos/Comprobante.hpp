#include "ArrProducto.hpp"
#ifndef _COMPROBANTE_HPP_
#define _COMPROBANTE_HPP_
class CComprobante{
  CarrProducto* listProductos;
  char* fecha; 
public:
  CComprobante(CarrProducto* listProductos,char* fecha);
  CComprobante();
  ~CComprobante();
  char* getFecha();
  CarrProducto* getListaProductos();
  void showBoleta();
};
CComprobante::CComprobante(CarrProducto* listProductos,char* fecha){
  this->listProductos=listProductos;
  this->fecha=fecha;
}
CComprobante::CComprobante(){
  this->listProductos=new CarrProducto();
  this->fecha=new char[10];
}
CComprobante::~CComprobante(){}
char* CComprobante::getFecha(){return this->fecha;}
CarrProducto* CComprobante::getListaProductos(){return this->listProductos;}
void CComprobante::showBoleta(){
  system("cls");
  for(int i=0;i<listProductos->getSize();++i){
      cout<<i+1<<". ";
      listProductos->getLista()[i]->getAll();
  }
}
#endif