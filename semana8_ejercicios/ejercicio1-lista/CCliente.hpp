#ifndef _CLIENTE_
#define _CLIENTE_

#include <iostream>
class CCliente{
  char *name;
  long dni;
public:
  CCliente(char *name, long dni){
    this->name = name;
    this->dni = dni;
  }
  char *getName(); 
  long getDni();
  inline friend std::ostream& operator<<(std::ostream& str, const CCliente &cli);
};
std::ostream& operator<<(std::ostream& str, const CCliente &cli){
  return str<<cli.name<<" "<<cli.dni;
}
char* CCliente::getName() { return this->name; }
long  CCliente::getDni() { return this->dni; }
#endif