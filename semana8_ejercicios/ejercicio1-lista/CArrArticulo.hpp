#ifndef _ARR_ARTICULO_
#define _ARR_ARTICULO_

#include "CLista.hpp"
#include "CArticulo.hpp"
#include "CCliente.hpp"
class CArrArticulo{
  CLista<CArticulo*>* listaArticulos;
  int montoTotal;  
  int indice;
  int capacidad;
  CCliente* cliente;
public:
  CArrArticulo(CCliente* cliente);
  ~CArrArticulo(){
    delete this->listaArticulos;
    delete this->cliente;
  }
  void Insertar(CArticulo* obj);
  int CalcularMontoTotal();
  void mostrarTodo();
  CCliente* getCliente();
  int getCapacidad();
  CLista<CArticulo*>* getListaArticulos();
};
CArrArticulo::CArrArticulo(CCliente* cliente){
  this->listaArticulos= new CLista<CArticulo*>();
  this->capacidad=100;
  this->cliente=cliente;
  this->indice=-1;
}
void CArrArticulo::Insertar(CArticulo* obj){
  this->indice++;
  if(this->indice < this->capacidad){
    this->listaArticulos->insertarFinal(obj);
  }
  CalcularMontoTotal();
}
int CArrArticulo::CalcularMontoTotal(){
  int monto=0;
  for(int i=0;i<=this->indice;i++){
    monto+=(this->listaArticulos->buscarXposSiguiente(i)->getElemento()->getPrecio()*
    this->listaArticulos->buscarXposSiguiente(i)->getElemento()->getCantidad());
  }
  montoTotal=monto;
  return monto;
}
void CArrArticulo::mostrarTodo(){
  std::cout<<"Nombre Cliente: "<<this->cliente->getName()<<"\n";
  std::cout<<"DNI Cliente: "<<this->cliente->getDni()<<"\n";
  for(int i=0;i<=this->indice;i++){
    std::cout<<i+1<<". "<<*(listaArticulos->buscarXposSiguiente(i)->getElemento())<<std::endl;
  }
  std::cout<<"TOTAL: "<<this->montoTotal<<std::endl;    
}
CCliente* CArrArticulo::getCliente(){
  return this->cliente;
}
int CArrArticulo::getCapacidad(){
  return this->capacidad;
}
CLista<CArticulo*>* CArrArticulo::getListaArticulos(){
  return this->listaArticulos;
}
#endif