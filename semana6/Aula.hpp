#include <cstring>
#include <string>
#ifndef _AULA_HPP_
#define _AULA_HPP_
struct SAula{
  short nro;
  short piso;
  char pabellon;
  short capacidad;
  SAula(short nro,short piso,char pabellon,short capacidad);
  std::string toString(){
    return std::to_string(nro)+" "+std::to_string(piso)+" "+pabellon+" "+std::to_string(capacidad);
  }
};
SAula::SAula(short nro,short piso,char pabellon, short capacidad): nro(nro),piso(piso),pabellon(pabellon),capacidad(capacidad) {}

#endif