#include "Items.hpp"
#include <string>
#include <fstream>
#include <list>

#ifndef _TIENDA_HPP__
#define _TIENDA_HPP__

class CTienda{
  std::list<CItems*>* listItems;
  std::string nombre;
public:
  CTienda(){
    listItems = new std::list<CItems*>();
    this->nombre="General";
  }
  void Insert(CItems* obj){
    listItems->push_back(obj);
  }
  void Save(){
    std::ofstream archivo("Productos.csv");
    std::list<CItems*>::iterator it= listItems->begin();
    for(;it!=listItems->end();it++){
      archivo<<(*(it))->getPrecio()<<","<<(*(it))->getNombre()<<","<<(*(it))->getdesc()<<","<<(*(it))->getCantidad()<<std::endl;
    }
    archivo.close();
  }
};
#endif
