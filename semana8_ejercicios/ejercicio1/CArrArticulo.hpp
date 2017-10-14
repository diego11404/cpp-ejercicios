#ifndef _ARR_ARTICULO_
#define _ARR_ARTICULO_

#include "CArticulo.hpp"
#include "CCliente.hpp"
class CArrArticulo{
  CArticulo** articulo;
  int montoTotal;  
  int indice;
  int capacidad;
  CCliente* cliente;
public:
  CArrArticulo(CCliente* cliente,int capacidad);
  void Insertar(CArticulo* obj);
  int CalcularMontoTotal();
  void mostrarTodo();
  CCliente* getCliente();
};
CArrArticulo::CArrArticulo(CCliente* cliente,int capacidad){
  this->capacidad=capacidad;
  this->articulo= new CArticulo*[capacidad];
  this->cliente=cliente;
  this->indice=-1;
  for(int i=0;i<capacidad;i++){
    this->articulo[i]=nullptr;
  }
}
void CArrArticulo::Insertar(CArticulo* obj){
  this->indice++;
  if(this->indice < this->capacidad){
    articulo[indice]=obj;
  }
  CalcularMontoTotal();
}
int CArrArticulo::CalcularMontoTotal(){
  int monto=0;
  for(int i=0;i<=this->indice;i++){
    monto+=(articulo[i]->getPrecio()*articulo[i]->getCantidad());
  }
  montoTotal=monto;
  return monto;
}
void CArrArticulo::mostrarTodo(){
  std::cout<<"Nombre Cliente: "<<cliente->getName()<<"\n";
  std::cout<<"DNI Cliente: "<<cliente->getDni()<<"\n";
  for(int i=0;i<=this->indice;i++){
    std::cout<<i+1<<". "<<**(articulo+i)<<std::endl;
  }
  std::cout<<"TOTAL: "<<this->montoTotal<<std::endl;    
}
CCliente* CArrArticulo::getCliente(){
  return this->cliente;
}

#endif