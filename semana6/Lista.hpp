#include <iostream>
#ifndef _LISTA_HPP_
#define _LISTA_HPP_
template<typename T> struct SNodo{
  SNodo<T>* nodos;
  T elemento;
  SNodo(T elemento);
};
template<typename T> SNodo<T>::SNodo(T element){
  this->elemento=element;
  this->nodos=nullptr;
}
//SLISTA 
template<typename T> struct SLista{
  SNodo<T>* inicio;
  std::size_t nElementos;  
  
  SLista();
  void anteponer(T e);
  std::size_t getNelementos();
  SNodo<T>* buscarXpos(short pos);
  T recuperar(short pos);
  void InsertarFinal(T e);
};
//Implementacion
template<typename T> void SLista<T>::anteponer(T e){
  SNodo<T>* n= new SNodo<T>(e);
  if(inicio!=nullptr){
    n->nodos=inicio;
  }
  inicio=n;
  nElementos++;
}
template<typename T> SLista<T>::SLista(){
  this->inicio=nullptr;
  this->nElementos=0;
}
template<typename T> std::size_t SLista<T>::getNelementos(){
  return this->nElementos;
}
template<typename T>  SNodo<T>* SLista<T>::buscarXpos(short pos){
  SNodo<T>* tmp = inicio;
  if(pos >= 0 && pos< this->nElementos){
    for(int i=0;i<pos;++i){
        tmp = tmp->nodos;
    }
    return tmp;
  }else return nullptr;
}
template<typename T> T SLista<T>::recuperar(short pos){
  return buscarXpos(pos)->elemento;
}
template<typename T> void SLista<T>::InsertarFinal(T e){
  SNodo<T>* nuevo= new SNodo<T>(e);
  SNodo<T>* tmp= buscarXpos(this->nElementos-1);
  tmp->nodos = nuevo;
  this->getNelementos++;
}
#endif