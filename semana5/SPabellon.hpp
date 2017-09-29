#include <iostream>
struct SPabellon{
  char* nombre;
  SPabellon(char* nombre);
  void getAll();
};
SPabellon::SPabellon(char* nombre){
  this->nombre=nombre;
}
void SPabellon::getAll(){
  std::cout<<this->nombre<<std::endl;
}