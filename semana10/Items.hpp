#ifndef _ITEMS_HPP_
#define _ITEMS_HPP_

#include <string>
#include <cstring>

class CItems{
  short precio;
  std::string nombre;
  std::string desc;
  short cantidad;
public:
  CItems(){}
  CItems(short precio, std::string nombre,std::string desc,short cantidad){
    this->precio= precio;
    this->nombre= nombre;
    this->desc= desc;
    this->cantidad=cantidad;
  }
  short getPrecio(){return this->precio;}
  std::string getNombre(){return this->nombre;}
  std::string getdesc(){return this->desc;}
  short getCantidad(){return this->cantidad;}
  
  void setPrecio(short p){ this->precio=p;}
  void setNombre(std::string n){ this->nombre=n;}
  void setDesc(std::string n){ this->desc=n;}
  void setCantidad(short c){ this->cantidad=c;}
};

#endif
