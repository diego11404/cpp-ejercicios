#include <iostream>
struct STecnico{
  char* nombre;
  char* apellido;
  short dni;
  STecnico(char* nombre, char*apellido, short dni);
  void getAll();
};
STecnico::STecnico(char* nombre, char*apellido, short dni){
  this->nombre=nombre;
  this->apellido=apellido;
  this->dni=dni;
}
void STecnico::getAll(){
  std::cout<<this->nombre<<" "<<this->apellido<<" "<<this->dni<<std::endl;
}