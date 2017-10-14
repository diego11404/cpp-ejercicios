#include "CFichaMatricula.hpp"
#ifndef _CALUMNO_
#define _CALUMNO_
class CAlumno{
  char* nombre;
  long dni;
  CFichaMatricula* ficha;
public:
  CAlumno(CFichaMatricula* ficha,char* nombre,long dni);
};
CAlumno::CAlumno(CFichaMatricula* ficha,char* nombre,long dni){
  this->ficha=ficha;
  this->nombre=nombre;
  this->dni=dni;
}
#endif

