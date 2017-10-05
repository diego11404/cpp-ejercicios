#include "CNodo.hpp"
#include <iostream>
#ifndef _LISTA_HPP_
#define _LISTA_HPP_
//SLISTA 
template<typename T> class CLista{
  CNodo<T>* inicio;
  std::size_t nElementos;
public:
  CLista();
  CNodo<T>* getInicio();
  std::size_t getNelementos();
  void anteponer(T e);  
  CNodo<T>* buscarXpos(short pos);
  T recuperar(short pos);
  void InsertarFinal(T e);
};
//Implementacion
template<typename T> CLista<T>::CLista(){
  this->inicio=nullptr;
  this->nElementos=0;
}
template<typename T>
CNodo<T>* CLista<T>::getInicio(){
  return this->inicio;
}
template<typename T> std::size_t CLista<T>::getNelementos(){
  return this->nElementos;
}
template<typename T> void CLista<T>::anteponer(T e){
  CNodo<T>* n= new CNodo<T>(e);
  if(inicio!=nullptr){
    n->setNodos(inicio);
  }
  this->inicio=n;
  nElementos++;
}
template<typename T>  CNodo<T>* CLista<T>::buscarXpos(short pos){
  CNodo<T>* tmp = inicio;
  if(pos >= 0 && pos< this->nElementos){
    for(int i=0;i<pos;++i){
        tmp = tmp->getNodos();
    }
    return tmp;
  }else return nullptr;
}
template<typename T> T CLista<T>::recuperar(short pos){
  return buscarXpos(pos)->getElemento();
}
template<typename T> void CLista<T>::InsertarFinal(T e){
  CNodo<T>* nuevo= new CNodo<T>(e);
  CNodo<T>* tmp= buscarXpos(this->nElementos-1);
  tmp->setNodos(nuevo);
  this->getNelementos++;
}
#endif