#ifndef CLista_hpp
#define CLista_hpp
#include "CNodo.hpp"
#include <iostream>
template<class T> class CLista{
  CNodo<T>* start;
  CNodo<T>* end;
  CNodo<T>* newNodo;
  short quantity;
  public:
    CLista();
    CNodo<T>* getStart();
    CNodo<T>* getEnd();
    void setStart(CNodo<T>*);
    void setEnd(CNodo<T>*);
    void insertStart(T);
    void insertEnd(T);
    void eraseNext(short pos);
    CNodo<T>* searchPrevius(short pos);
    CNodo<T>* searchNext(short pos);
    void getAll();
    short getQuantity();
};
template<class T> CLista<T>::CLista(){
  this->start=nullptr;
  this->end=nullptr;
  this->newNodo=nullptr;
  this->quantity=0;
}
template<typename T> short CLista<T>::getQuantity(){
  return this->quantity;
}
template<typename T> void CLista<T>::getAll(){
  if(0 < this->quantity){
    CNodo<T> * tmp = this->start;
    for(int i=0;tmp!=nullptr;i++){
      std::cout<<i<<". "<<tmp->getElement()<<"\n";
      tmp=tmp->getNext();
    }
  }
}
template<typename T> void CLista<T>::insertStart(T element){
  newNodo= new CNodo<T>(element);
  if(this->start==nullptr){
    this->end=newNodo;
  }else{
    this->start->setPrevius(this->newNodo);
    this->newNodo->setNext(this->start);
  }
  this->start=newNodo;
  this->quantity++;
}
template<typename T> void CLista<T>::insertEnd(T element){
  if(this->end!=nullptr){
    newNodo = new CNodo<T>(element);
    this->end->setNext(this->newNodo);
    this->newNodo->setPrevius(this->end);
    this->end=newNodo;
    this->quantity++;
  }else if(this->end==nullptr){
    CLista<T>::insertStart(element);
  }
}
template<typename T> CNodo<T>* CLista<T>::searchNext(short pos){
    if(pos >= 0  && pos<this->quantity){
      CNodo<T> * tmp = this->start;
      int count=0;
      while(count < pos && count!=pos){
        tmp=tmp->getNext();
        count++;
      }
    return tmp;
  }else return nullptr;
}
template<typename T> CNodo<T>* CLista<T>::searchPrevius(short pos){
  if(pos >=0 && pos < this->quantity){
    CNodo<T> * tmp = this->end;
    for(int i=0;i < pos; i++){
      tmp=tmp->getPrevius();
    }
    return tmp;
  }else return nullptr;
}
template<typename T> void CLista<T>::eraseNext(short pos){
    CNodo<T> * tmp = CLista<T>::searchNext(pos);
    if(pos){
      tmp->getPrevius()->setNext(tmp->getNext());
      tmp->getNext()->setPrevius(tmp->getPrevius());
    }else if(!pos){ 
      this->start=CLista<T>::searchNext(1);
    }
    delete tmp;
    this->quantity--;
}
template<typename T> CNodo<T>* CLista<T>::getStart(){return this->start;}
template<typename T> CNodo<T>* CLista<T>::getEnd(){return this->end;}
template<typename T> void CLista<T>::setStart(CNodo<T>* nodo){ this->start=nodo;}
template<typename T> void CLista<T>::setEnd(CNodo<T>* nodo){ this->end=nodo;}

#endif