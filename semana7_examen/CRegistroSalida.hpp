#ifndef __Registro_HPP__
#define __Registro_HPP__
#include "CAgenteSeguridad.hpp"
class CRegistroSalida{
  CAgenteSeguridad** agente;
  int capacidad;
  int index;
public:
  CRegistroSalida(int capacidad){
    this->capacidad=capacidad;
    this->agente=new CAgenteSeguridad*[capacidad];
    this->index=-1;
    for(int i=0;i<capacidad;i++){
      this->agente[i]=nullptr;
    }
  }
  bool Insertar(CAgenteSeguridad* obj){
    index++;
    if(index<capacidad){
      agente[index]=obj;
      return true;
    }else return false;
  }
  void Mostrar(){
    for(int i=0;i<capacidad;i++){
      this->agente[i]->getAll();
    }
  }
  int NpasajerosDiarios(){
    int pas=0;
    for(int i=0;i<capacidad;i++){
      pas+=agente[i]->getnPasajeros();
      std::cout<<"Dia: "<<i+1<<" --- "<<"Pasajeros: ";
        std::cout<<agente[i]->getnPasajeros()<<std::endl;;
    }
    std::cout<<"Total: "<<pas<<std::endl;;
    return pas;
  }
  int RecaudacionMES(){
    long r=0;
    for(int i=0;i<capacidad;i++){
      r=r+2;
    }
    return r;
  }
};

#endif 