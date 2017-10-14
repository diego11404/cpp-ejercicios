#include <iostream>
#include "CLista.hpp"
int main(){
  CLista<int>* enteros = new CLista<int>();
  for(int i=0;i<10;i++){
    enteros->anteponer(i);
  }
  for(int i=0;i<enteros->getnElementos();i++){
    std::cout<<enteros->recuperar(i)<<std::endl;
  }
  std::cout<<"Eliminador el Elemento 2: "<<std::endl;
  enteros->eliminarxPos(2); 
  
  for(int i=0;i< enteros->getnElementos();i++){
    std::cout<<enteros->recuperar(i)<<std::endl;
  }
  std::cout<<"Actual: "<<enteros->recuperar(1)<<std::endl;  
  std::cout<<"Anterior: "<<enteros->buscarXposSiguiente(1)->getanterior()->getElemento()<<std::endl;  
  std::cout<<"siguiente: "<<enteros->buscarXposSiguiente(1)->getsiguiente()->getElemento()<<std::endl;
  std::cout<<"Buscar por el final : "<<enteros->buscarXposAnterior(1)->getsiguiente()->getElemento()<<std::endl;
  
  std::cout<<"Buscar: \n";
  enteros->buscarElemento(8);
  
  
  
  
  return 0;
}