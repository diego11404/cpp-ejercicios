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
  void setfin(CNodo<T>*);
  void anteponer(T elemento);
  CNodo<T>* buscarXposSiguiente(int pos);
  CNodo<T>* buscarXposAnterior(int pos);
  T recuperar(int pos);
  void insertarFinal(T elemento);
  void eliminarxPos(int pos);
  int getnElementos();
  void buscarElemento(T);
};
template<typename T> void CLista<T>::anteponer(T elemento){
    nuevo = new CNodo<T>(elemento);
    if(this->inicio==nullptr){
      this->fin=nuevo;
    }
    //(this->inicio!=nullptr && this->inicio->setanterior(nuevo) && nuevo->setsiguiente(inicio));
    if(this->inicio!=nullptr){
      nuevo->setsiguiente(inicio);
      this->inicio->setanterior(nuevo);
    }
    this->inicio=nuevo;
  this->nElementos++;
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
template<typename T> void CLista<T>::insertarFinal(T e){
  nuevo = new CNodo<T>(e);
  nuevo->setanterior(this->fin);
  this->fin->setsiguiente(nuevo);
  this->fin=nuevo;
  this->nElementos++;
}
template<typename T> void CLista<T>::eliminarxPos(int pos){
  CNodo<T>* tmp= buscarXposSiguiente(pos);
  CNodo<T>* previus = tmp->getanterior();
  previus->setsiguiente(tmp->getsiguiente());
  delete tmp;
  this->nElementos--;
}
template<typename T> void CLista<T>::buscarElemento(T elemento){
  CNodo<T>* tmp = inicio;
  //for(int i=0;i < this->nElementos ;i++){
  //  if(tmp->getElemento()==elemento){
  //      return tmp->getElemento();  
  //      break;
  //  }
  //  tmp = tmp->getsiguiente();
  //}
  //return elemento-elemento;
  ////////////////////////////
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
template<typename T> void CLista<T>::setfin(CNodo<T>* obj){
  this->fin=obj;
}
template<typename T> int CLista<T>::getnElementos(){
  return this->nElementos;
}