#ifndef listaServicio_hpp
#define listaServicio_hpp
#include "CAtencion.hpp"
#include <algorithm>  
#include <vector>
class ListaServicio{
  std::vector<CAtencion*>* listaAtencion;
  int nLavados;
  int nEncerados;
  int nSiliconas;
  public:
  ListaServicio();
  std::vector<CAtencion*>* getLista();
  void InsertarAtencion(CAtencion*);
  void calcularAtenciones();
  CAtencion* obtener(int);
  void CantidadServicios(int tipo);
  void mostrarServicios();
  void MostrarTodo();
  int calcularMenor(int a,int b);
  void CalcularMenorDemanda();
  void MontoPromedioXLavado();

  int geTnLavados(){return this->nLavados;}
  int geTnEncerados(){return this->nEncerados;}
  int geTnSiliconas(){return this->nSiliconas;}
};
  ListaServicio::ListaServicio(){
    this->listaAtencion= new std::vector<CAtencion*>();
    this->nLavados=0;
    this->nEncerados=0;
    this->nSiliconas=0;
}
void ListaServicio::MontoPromedioXLavado(){
  double monto=0;
  int numLavado=0;
  for(int i=0;i<listaAtencion->size();i++){
    if(this->obtener(i)->getTipoServicio()==1){
        monto+=this->obtener(i)->getServicio()->getCosto();
        numLavado++;
    }
  }
  std::cout<<"El Monto promedio por el servicio de lavado es: "<<monto/numLavado<<"\n";
}
void ListaServicio::CalcularMenorDemanda(){
  if(this->nLavados < this->nEncerados && this->nLavados < this->nSiliconas){
      std::cout<<"El servicio con menor demanda es Lavados, con "<<this->nLavados<<"\n";
  }else{
    if(this->nEncerados < this->nLavados && this->nEncerados < this->nSiliconas)
      std::cout<<"El servicio con menor demanda es Encerados, con "<<this->nEncerados<<"\n";
    else
      std::cout<<"El servicio con menor demanda es Siliconas, con "<<this->nSiliconas<<"\n";
  }    
   //return std::min(std::min(this->nLavados,this->nEncerados),this->nSiliconas);
}
void ListaServicio::InsertarAtencion(CAtencion* obj){
    this->listaAtencion->push_back(obj);
}
CAtencion* ListaServicio::obtener(int pos){
  return this->listaAtencion->at(pos);
}
 void ListaServicio::CantidadServicios(int tipo){
  switch(tipo){
    case 1: this->nLavados++;
      break;
     case 2: this->nEncerados++;
      break;
      case 3: this->nSiliconas++;
      break;  
  }
 }
 void ListaServicio::calcularAtenciones(){
    this->nLavados=0;
    this->nEncerados=0;
    this->nSiliconas=0;
   for(int i=0;i<this->listaAtencion->size();i++){
     this->listaAtencion->at(i)->CalcularPago();
     CantidadServicios(this->listaAtencion->at(i)->getTipoServicio());
   }
 }
 void ListaServicio::mostrarServicios(){
   std::cout<<"Lavados: "<<this->nLavados<<"\n";
   std::cout<<"Encerados: "<<this->nEncerados<<"\n";
   std::cout<<"nSiliconas: "<<this->nSiliconas<<"\n";
 }
 std::vector<CAtencion*>* ListaServicio::getLista(){
   return this->listaAtencion;
 }
 void ListaServicio::MostrarTodo(){
   CVehiculo* vehiculo;
   CServicio* servicio;

   for(int i=0;i<this->listaAtencion->size();i++){
     vehiculo = this->listaAtencion->at(i)->getVehiculo();
     servicio = this->listaAtencion->at(i)->getServicio();
     std::cout<<i<<". "<<vehiculo->getNombre()<<"\t"<<vehiculo->getTipo()<<"\t "<<servicio->getTipo()<<"\t"
     <<servicio->getCosto()<<"\t"<<servicio->getNombreServicio()<<"\n";
   }
 }
#endif