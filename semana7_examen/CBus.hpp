#include "CConductor.hpp"
#ifndef __BUSS_HPP__
#define __BUSS_HPP__

class CBus{
private:
  CConductor* conductor;
  char* placa;
  char* kilometraje;
  int nPasajeros;
public:
  CBus(CConductor* conductor,char*,char*,int n=50);
  CBus();
  ~CBus();
  CConductor* getconductor();
  char* getPlaca();
  char* getKilometraje();
  int getNpasajeros();
  
  void setPlaca(char*);
  void setKilometraje(char*);
  void setNpasajeros(int);
};
CBus::CBus(CConductor* conductor,char* placa, char* kilometraje,int nPasajeros){
  this->conductor=conductor;
  this->placa=placa;
  this->kilometraje=kilometraje;
  this->nPasajeros=nPasajeros;
}
CBus::CBus(){
  this->conductor= new CConductor();
  this->placa=new char[20];
  this->kilometraje=new char[20];
  this->nPasajeros=50;
}
CBus::~CBus(){}
char* CBus::getPlaca(){return this->placa;}
char* CBus::getKilometraje(){return this->kilometraje;}
int CBus::getNpasajeros(){return this->nPasajeros;}

void CBus::setPlaca(char* placa){ this->placa=placa;}
void CBus::setKilometraje(char* kilometraje){this->kilometraje=kilometraje;}
void CBus::setNpasajeros(int nPsajeros){this->nPasajeros=nPasajeros;}

#endif 