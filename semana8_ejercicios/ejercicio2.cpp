#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
class CCuenta{
  std::string tipoCuenta;
  long fondo;  
public:
  CCuenta(std::string tipoCuenta,long fondo){
    this->tipoCuenta = tipoCuenta;
    this->fondo = fondo;
  }
  long getFondo(){return this->fondo;}
  friend std::ostream& operator<<(std::ostream& str, const CCuenta &cu){
    return str<<cu.tipoCuenta<<"  -  "<<"SALDO: "<<cu.fondo;
  }
};
/////////////////////////////////
class CCliente{
  long dni;
  CCuenta* cuenta;
public:
  CCliente(CCuenta* cuenta,long dni){
    this->cuenta=cuenta;
    this->dni=dni;
  }
  CCuenta* getCuenta(){return this->cuenta;}
  long getDni(){return this->dni;}
};
int main(){

  srand((int)time(NULL));

  std::string array[]={"Cuenta Corriente","Cuenta Saldo","Cuenta ahorro"};

  CCliente** listaClientes = new CCliente*[50];
  //CCuenta* cuenta = new CCuenta("Corriente",10) ;
  for(int i=0;i<50;i++){
    CCuenta* cuenta = new CCuenta(array[rand()%3],rand()%10000+30000) ;
    listaClientes[i]= new CCliente(cuenta,rand()%20000000+7000000);
  }
  int sumita=0;
  for(int i=0;i<50;i++){
    sumita+=listaClientes[i]->getCuenta()->getFondo();
    std::cout<<"Cliente DNI: "<<(*(listaClientes+i))->getDni()<<"\t"<<*listaClientes[i]->getCuenta()<<std::endl;
  }
  std::cout<<"sumita: "<<sumita<<std::endl;
  return 0;
}