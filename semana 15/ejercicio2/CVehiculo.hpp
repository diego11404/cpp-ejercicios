#ifndef vehiculo_hpp
#define vehiculo_hpp
#include <string>
class CVehiculo{
  char tipo;
  std::string nombre;
  public:
  CVehiculo(char,std::string);
  char getTipo();
  std::string getNombre();
};
CVehiculo::CVehiculo(char tipo,std::string nombre){
  this->tipo=tipo;
  this->nombre=nombre;
}
std::string CVehiculo::getNombre(){ 
  return this->nombre;
}
char CVehiculo::getTipo(){ 
  return this->tipo;
}
#endif