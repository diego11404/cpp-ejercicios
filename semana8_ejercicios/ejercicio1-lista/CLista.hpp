#ifndef __CLISTA_HPP__
#define __CLISTA_HPP__

#include "CNodo.hpp"
#include <iostream>
template<typename T> class CLista{
  CNodo<T>* inicio;
  CNodo<T>* fin;
  CNodo<T>* nuevo;
  int nElementos;
public:
  CLista();
  CNodo<T>* getinicio();
  CNodo<T>* getfin();
  void setinicio(CNodo<T>*);
  bool setfin(CNodo<T>*);
  void anteponer(T elemento);
  CNodo<T>* buscarXposSiguiente(int pos);
  CNodo<T>* buscarXposAnterior(int pos);
  T recuperar(int pos);
  void insertarFinal(T elemento);
  void eliminarxPos(int pos);
  void atender();
  int getnElementos();
  void buscarElemento(T);
};
template<typename T> void CLista<T>::anteponer(T elemento){
    nuevo = new CNodo<T>(elemento);
      this->inicio=(this->inicio==nullptr && this->setfin(nuevo),
      inicio!=nullptr && (this->inicio->setanterior(nuevo) && nuevo->setsiguiente(inicio)),nuevo);
      this->nElementos++;
} 
template<typename T> void CLista<T>::insertarFinal(T e){
  if(this->inicio==nullptr){
    CLista<T>::anteponer(e);
  }else{
    nuevo = new CNodo<T>(e);
    nuevo->setanterior(this->fin);
    this->fin->setsiguiente(nuevo);
    this->fin=nuevo;
    this->nElementos++;
  }
} 
template<typename T> CNodo<T>* CLista<T>::buscarXposSiguiente(int pos){
  CNodo<T>* tmp = inicio;
  if(pos >= 0 && pos < this->nElementos){
    for(int i=0;i < pos ;i++){
        tmp = tmp->getsiguiente();
    }
    return tmp;
  }else return nullptr;
}
template<typename T> CNodo<T>* CLista<T>::buscarXposAnterior(int pos){
  CNodo<T>* tmp = this->fin;
  if(pos >= 0 && pos < this->nElementos){
    for(int i=0;i < pos ;i++){
        tmp = tmp->getanterior();
    }
    return tmp;
  }else return nullptr;
}
template<typename T> T CLista<T>::recuperar(int pos){
   return buscarXposSiguiente(pos)->getElemento();
}
template<typename T> void CLista<T>::eliminarxPos(int pos){
  CNodo<T>* tmp= buscarXposSiguiente(pos);
  CNodo<T>* previus = tmp->getanterior();
  previus->setsiguiente(tmp->getsiguiente());
  delete tmp;
  this->nElementos--;
}
template<typename T> void CLista<T>::atender(){
  CNodo<T>* tmp= this->inicio;
  this->inicio= this->inicio->getsiguiente();
  delete tmp;
  this->nElementos--;
}
template<typename T> void CLista<T>::buscarElemento(T elemento){
  CNodo<T>* tmp = inicio;
  for(int i=0;tmp!=nullptr;i++){
    if(tmp->getElemento()==elemento){
      std::cout<<"Pos:="<<i<<".-.Valor="<<tmp->getElemento()<<std::endl;
    }
    tmp = tmp->getsiguiente();    
  }
}
template<typename T> CLista<T>::CLista(){
  this->inicio=nullptr;
  this->fin=nullptr;
  this->nElementos=0;
  this->nuevo=nullptr;
}
template<typename T> CNodo<T>* CLista<T>::getinicio(){
  return this->inicio;
}
template<typename T> CNodo<T>* CLista<T>::getfin(){
  return this->fin;
}
template<typename T> void CLista<T>::setinicio(CNodo<T>* obj){
  this->inicio=obj;
}
template<typename T> bool CLista<T>::setfin(CNodo<T>* obj){
  this->fin=obj,true;
}
template<typename T> int CLista<T>::getnElementos(){
  return this->nElementos;
}

#endif