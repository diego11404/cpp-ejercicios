#ifndef _CARTICULO_
#define _CARTICULO_

#include <iostream>
class CArticulo{
  char *nombre;
  int precio;
  int cantidad;
public:
  CArticulo(char *nombre, int precio, int cantidad){
    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cantidad;
  }
  char *getNombre() { return this->nombre; }
  int getPrecio() { return this->precio; }
  int getCantidad() { return this->cantidad; }
  friend std::ostream& operator<<(std::ostream& strm,const CArticulo &art);
};
std::ostream& operator<<(std::ostream& strm,const CArticulo &art){
  return strm<<art.nombre<<" "<<art.precio<<" "<<art.cantidad;
}
#endif