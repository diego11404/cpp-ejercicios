#include <iostream>
struct Sdispositivo{
  char* nombre;
  char* marca;
  char* codigo;
  char* color;
  Sdispositivo();
  Sdispositivo(char* nombre,char* marca,char*codigo,char*color);
  void getAll();
  
};
Sdispositivo::Sdispositivo(){
    this->nombre=(char*)"nada";
    this->marca=new char[10];
    this->codigo=new char[10];
    this->color=new char[10];
}
Sdispositivo::Sdispositivo(char* nombre,char* marca,char*codigo,char*color){
  this->nombre=nombre;
  this->marca=marca;
  this->codigo=codigo;
  this->color=color;
}
void Sdispositivo::getAll(){
  std::cout<<this->nombre<<" "<<this->marca<<" "<<this->codigo<<" "<<this->color<<std::endl;
}