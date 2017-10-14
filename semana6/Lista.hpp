#include "CNodo.hpp"
#include <iostream>
#ifndef _LISTA_HPP_
#define _LISTA_HPP_
//SLISTA 
template<typename T> class CLista{
  CNodo<T>* inicio;
  CNodo<T>* fin;  
  std::size_t nElementos;
public:
  CLista();
  std::size_t getNelementos();
  void anteponer(T e);  
  CNodo<T>* buscarXpos(short pos);
  T recuperar(short pos);
  void InsertarFinal(T e);
  CNodo<T>* getInicio();
  CNodo<T>* getFin();

  bool setFin(CNodo<T>*);  
  
};
//Implementacion
template<typename T> CLista<T>::CLista(){
  this->inicio=nullptr;
  this->fin=nullptr;
  this->nElementos=0;
}
template<typename T>
CNodo<T>* CLista<T>::getInicio(){
  return this->inicio;
}
template<typename T> CNodo<T>* CLista<T>::getFin(){
  return this->fin;
}
template<typename T> bool CLista<T>::setFin(CNodo<T>* obj){
  return this->fin=obj,true;
}
template<typename T> std::size_t CLista<T>::getNelementos(){
  return this->nElementos;
}
template<typename T> void CLista<T>::anteponer(T e){
  CNodo<T>* n= new CNodo<T>(e);
  //inicio!=nullptr && n->setSiguiente(inicio);
  //this->inicio= (inicio!=nullptr && n->setSiguiente(inicio), n);
  //(this->inicio!=nullptr) ? this->inicio->setAnterior(n) : false;
  /*this->inicio=(inicio==nullptr && this->setFin(n),n->setSiguiente(inicio!=nullptr ? inicio : nullptr),
  inicio!=nullptr && this->inicio->setAnterior(n),n );*/
  //////////////////////////////////////////////////////////////
  (inicio==nullptr && this->setFin(n));
  if(this->inicio!=nullptr){ 
    this->inicio->setAnterior(n);
    n->setSiguiente(inicio);
  }
  this->inicio=n;
  nElementos++;
}
template<typename T>  CNodo<T>* CLista<T>::buscarXpos(short pos){
  CNodo<T>* tmp = inicio;
  if(pos >= 0 && pos < this->nElementos){
    for(int i=0;i<pos;++i){
        tmp = tmp->getSiguiente();
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
  nuevo->setAnterior(tmp);
  tmp->setSiguiente(nuevo);
  this->setFin(nuevo);
  this->nElementos++;
  //nuevo->setAnterior(buscarXpos(this->nElementos-1));
  //buscarXpos(this->nElementos-1)->setSiguiente(nuevo);
  //this->setFin(nuevo);
}
#endif