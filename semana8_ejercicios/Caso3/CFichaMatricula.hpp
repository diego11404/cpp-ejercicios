#include "CCurso.hpp"
#ifndef _CFICHA_
#define _CFICHA_

class CFichaMatricula{
  CCurso** listaCursos;
  long codigoAlumno;
  int indice;
  int capacidad;
public:
  CFichaMatricula(long codigoAlumno,int capacidad);
  long getcodigoAlumno();
  void setcodigoAlumno(long);
  void registrarMatricula(CCurso*);
  void imprimir();
};
CFichaMatricula::CFichaMatricula(long codigoAlumno,int capacidad){
    this->capacidad=capacidad;  
    this->listaCursos= new CCurso*[capacidad];
    this->codigoAlumno=codigoAlumno;
    this->indice=-1;
}
void CFichaMatricula::registrarMatricula(CCurso* obj){
  if(++this->indice < this->capacidad){
    listaCursos[indice]=obj;
  }
}
void CFichaMatricula::imprimir(){
  for(int i=0; i <= this->indice;i++){
    std::cout<<*listaCursos[i]<<std::endl;
  }
}
long CFichaMatricula::getcodigoAlumno(){return this->codigoAlumno;}
#endif