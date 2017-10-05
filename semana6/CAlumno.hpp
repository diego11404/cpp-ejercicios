#include <string>
#ifndef _ALUMNO_HPP_
#define _ALUMNO_HPP_
using namespace std;
class CAlumno{
  string nombre;
  string apellido;
  short ciclo;
public:
  CAlumno(string nombre,string apellido,short ciclo);
  string getnombre();
  string getapellido(){return this->apellido;}
  void setnombre(string nombre){ this->nombre=nombre;}
  void setapellido(string apellido){ this->apellido=apellido;}
  string toString(){
    return this->nombre+ " " + this->apellido+" "+ to_string(this->ciclo);}
};
CAlumno::CAlumno(string nombre,string apellido,short ciclo){
  this->nombre=nombre;
  this->apellido=apellido;
  this->ciclo=ciclo;
}
string CAlumno::getnombre(){return this->nombre;}
#endif