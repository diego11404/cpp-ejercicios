#ifndef servicio_hpp
#define servicio_hpp
#include <string>

class CServicio{
  int tipo;
  std::string nombreServicio;
  double costo;
  public:
    CServicio(int tipo, std::string nombreServicio,double costo);
    int getTipo();
    void setCosto(double costo);
    double getCosto();
    std::string getNombreServicio();
};
CServicio::CServicio(int tipo, std::string nombreServicio,double costo){
  this->costo=costo;
  this->tipo=tipo;
  this->nombreServicio=nombreServicio;
}
std::string CServicio::getNombreServicio(){
  return this->nombreServicio;
}
int CServicio::getTipo(){ return this->tipo;}
double CServicio::getCosto(){ return this->costo;}
void CServicio::setCosto(double costo){ this->costo=costo;}
#endif