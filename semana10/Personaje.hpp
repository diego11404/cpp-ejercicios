#include "Items.hpp"
#include <list>
//#include <string>
//#include <cstring>
#include <iostream>
#include <fstream>

#ifndef __HEROE__
#define __HEROE__

class CPersonaje{
  short vida;
  short mana;
  short agilidad;
  short fuerza;
  short armadura;
  short inteligencia;
  char tipo; //heroe , crep
  std::string nombre;
  std::list<CItems*>* mochila;
  short money;
public:
  CPersonaje(std::string nombre,short vida,short mana,short armadura, short agilidad,short fuerza, short inteligencia,char tipo){
    this->vida=vida;
    this->mana=mana;
    this->armadura=armadura;
    this->nombre=nombre;
    this->agilidad=agilidad;
    this->fuerza=fuerza;
    this->inteligencia=fuerza;
    this->tipo=tipo;
    this->mochila = new std::list<CItems*>();
    this->money=625;
  }
  void comprar(CItems* obj){
    if(money-obj->getPrecio()>0){
      mochila->push_back(obj);
      money=money-obj->getPrecio();
    }else std::cout<<"there is not money "<<this->nombre<<std::endl;
  }
  void vender(int pos){
    std::list<CItems*>::iterator it = mochila->begin();
    auto nx = std::next(it,pos);
    money=money+(*(nx))->getPrecio();
    mochila->erase(nx);
  }
  void Guardar(){
    std::ofstream archivo(this->nombre+".csv");
    std::list<CItems*>::iterator it = mochila->begin();
    for(;it!=mochila->end();it++){
      archivo<<(*(it))->getPrecio()<<","<<(*(it))->getNombre()<<","<<((*it))->getdesc()<<","<<((*it))->getCantidad()<<std::endl;
    }
  }
  short getvida(){return this->vida;}
  short getmana(){return this->mana;}
  short getagilidad(){return this->agilidad;}
  short getfuerza(){return this->fuerza;}
  short getarmadura(){return this->armadura;}
  short getinteligencia(){return this->inteligencia;}
  char gettipo(){return this->tipo;}
  std::string getnombre(){return this->nombre;}
  short getMoney(){return this->money;}

  void setvida(short v){ this->vida=v;}
  void setmana(short m){ this->mana=m;}
  void setagilidad(short a){ this->agilidad=a;}
  void setfuerza(short f){ this->fuerza=f;}
  void setarmadura(short a){ this->armadura=a;}
  void setinteligencia(short i){ this->inteligencia=i;}
  void settipo(char t){ this->tipo=t;}
  void setnombre(std::string n){ this->nombre=n;}
  void setmoney(short m){ this->money=m;}
  
};



#endif 
