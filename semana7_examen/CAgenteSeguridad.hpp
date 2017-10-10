#include "CSede.hpp"
#include <iostream>
#ifndef __AGENTE_HPP__
#define __AGENTE_HPP__

class CAgenteSeguridad{
private:
  CSede sede;
  char* nombreCompleto;
  int dni;

  char* fecha;
  char* horaSalida;
  char* nPlaca;
  char* nombreCoductor;
  int nPasajeros;
  char* campusOrigen;
  char* campusLlegada;
  char* kilometraje;
public:
  CAgenteSeguridad(char* nombreCompleto,int dni,char* fecha,char* horaSalida,char* placa,char* nombreCoductor,int nPasajeros, 
    char* campusOrigen, char* campusLlegada, char* kilometraje);
  CAgenteSeguridad();
  ~CAgenteSeguridad();  
  char* getNombreCompleto();
  int getDni();
  char* getfecha();
  char* gethoraSalida();
  int getnPasajeros();
  void setNombreCompleto(char*);
  void setDni(int);
  void getAll();

};
CAgenteSeguridad::CAgenteSeguridad(char*nombreCompleto,int dni,char* fecha,char* horaSalida,char* nPlaca,char* nombreCoductor,int nPasajeros, 
  char* campusOrigen, char* campusLlegada, char* kilometraje){
  this->nombreCompleto=nombreCompleto;
  this->dni=dni;
  this->fecha=fecha;
  this->horaSalida=horaSalida;
  this->nPlaca=nPlaca;
  this->nombreCoductor=nombreCoductor;
  this->nPasajeros=nPasajeros;
  this->campusOrigen=campusOrigen;
  this->campusLlegada=campusLlegada;
  this->kilometraje=kilometraje;

}
CAgenteSeguridad::CAgenteSeguridad(){
  this->nombreCompleto=new char[20];
  this->dni=0;
  this->fecha=new char[20];
  this->horaSalida=new char[20];
  this->nPlaca=new char[20];
  this->nombreCoductor=new char[20];
  this->nPasajeros=50;
  this->campusOrigen=new char[20];
  this->campusLlegada=new char[20];
  this->kilometraje=new char[20];
}
void CAgenteSeguridad::getAll(){
  std::cout<<this->nombreCompleto<<" "<<this->dni<<" "<<this->fecha<<" "<<this->horaSalida<<" "
  <<this->nPlaca<<" "<<this->nombreCoductor<<" "<<this->nPasajeros<<" "<<this->campusOrigen<<" "<<this->campusLlegada<<" "
  <<this->kilometraje<<"\n";
}
CAgenteSeguridad::~CAgenteSeguridad(){}
char* CAgenteSeguridad::getNombreCompleto(){return this->nombreCompleto;}
int CAgenteSeguridad::getDni(){return this->dni;}
char* CAgenteSeguridad::getfecha(){return this->fecha;}
char* CAgenteSeguridad::gethoraSalida(){return this->horaSalida;}
void CAgenteSeguridad::setNombreCompleto(char* nombreCompleto){this->nombreCompleto=nombreCompleto;}
int CAgenteSeguridad::getnPasajeros(){return this->nPasajeros;}
void CAgenteSeguridad::setDni(int dni){this->dni=dni;}

#endif 