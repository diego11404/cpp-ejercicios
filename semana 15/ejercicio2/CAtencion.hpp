#ifndef atencion_hpp
#define atencion_hpp
#include "CServicio.hpp"
#include "CVehiculo.hpp"
#include <vector>
#include <iostream>
class CAtencion{
  CVehiculo * vehiculo;
  CServicio *servicio;
  char tipoVehiculo;
  int tipoServicio;
 
  double montoPago;
  double totalPago;
  public:
  CAtencion(CVehiculo*,CServicio*);
  CAtencion();
  void CalcularPago();
  double getMontoPago();
  int getTipoServicio();
  CVehiculo* getVehiculo();
  CServicio* getServicio();
};
CAtencion::CAtencion(){}
CAtencion::CAtencion(CVehiculo* vehiculo,CServicio* servicio){
  this->vehiculo=vehiculo;
  this->servicio=servicio;
  this->montoPago=servicio->getCosto();
  this->tipoServicio=servicio->getTipo();
  this->tipoVehiculo=vehiculo->getTipo();
}
CServicio* CAtencion::getServicio(){
  return this->servicio;
}
CVehiculo* CAtencion::getVehiculo(){
  return this->vehiculo;
}
int CAtencion::getTipoServicio(){
  return this->tipoServicio;
}
void CAtencion::CalcularPago(){
  if(toupper(this->tipoVehiculo)=='C'){
    this->totalPago= (this->montoPago*0.05)+ this->montoPago;
      this->servicio->setCosto(totalPago);
  }
}

#endif