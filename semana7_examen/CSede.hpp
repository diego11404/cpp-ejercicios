#include "CBus.hpp"
#ifndef __SEDE_HPP__
#define __SEDE_HPP__

class CSede{
private:
  char* nombre;
  char* ubicacion;
  CBus* bus;
public:
  CSede(CBus* bus,char*,char*);
  CSede();
  ~CSede();
  char* getnombre();
  char* getubicacion();
  CBus* getBus();

  void setnombre(char*);
  void setubicacion(char*);
};
CSede::CSede(CBus* bus,char* nombre, char* ubicacion){
  this->bus=bus;
  this->nombre=nombre;
  this->ubicacion=ubicacion;
}
CSede::CSede(){
  this->bus= new CBus();
  this->nombre=new char[20];
  this->ubicacion=new char[20];
}
CSede::~CSede(){}
char* CSede::getnombre(){return this->nombre;}
char* CSede::getubicacion(){return this->ubicacion;}
CBus* CSede::getBus(){return this->bus;}
void CSede::setnombre(char* nombre){ this->nombre=nombre;}
void CSede::setubicacion(char* ubicacion){this->ubicacion=ubicacion;}

#endif 