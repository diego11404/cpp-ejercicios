#ifndef __CONDUCTOR_HPP__
#define __CONDUCTOR_HPP__
class CConductor{
private:
  char* nombre;
  char* apellido;
public:
  CConductor(char*,char*);
  CConductor();
  ~CConductor();  
  char* getNombre();
  char* getApellido();
  void setNombre(char*);
  void setApellido(char*);
};
CConductor::CConductor(char* nombre, char* apellido){
  this->nombre=nombre;
  this->apellido=apellido;
}
CConductor::CConductor(){
  this->nombre=new char[20];
  this->apellido=new char[20];
}
CConductor::~CConductor(){}
char* CConductor::getNombre(){return this->nombre;}
char* CConductor::getApellido(){return this->apellido;}

void CConductor::setNombre(char* nombre){ this->nombre=nombre;}
void CConductor::setApellido(char* apellido){this->apellido=apellido;}
#endif