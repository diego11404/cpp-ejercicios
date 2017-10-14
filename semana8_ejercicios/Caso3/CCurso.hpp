#include <iostream>

#ifndef _CCURSO_
#define _CCURSO_

class CCurso{
  char* nombre;  
  char* sala;
  char* dia;
  char* hora;
public:
  CCurso(char* nombre,char* sala ,char* dia,char* hora);
  inline char* getsala();
  inline char* getnombre();
  inline char* getdia();
  inline char* gethora();
  friend std::ostream& operator<<(std::ostream& strm, const CCurso& c);
};
std::ostream& operator<<(std::ostream& strm, const CCurso& c){
  return strm<<c.nombre<<" "<<c.sala<<" "<<c.dia<<" "<<c.hora;
}
CCurso::CCurso(char* nombre,char*sala ,char* dia,char* hora){
  this->sala=sala;
  this->nombre=nombre;
  this->dia=dia;
  this->hora=hora;
}
char* CCurso::getsala(){return this->sala;}
char* CCurso::getnombre(){return this->nombre;}
char* CCurso::getdia(){return this->dia;}
char* CCurso::gethora(){return this->hora;}
#endif