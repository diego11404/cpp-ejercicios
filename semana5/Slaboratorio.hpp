#include "Sdispositivo.hpp"
#include <vector>
//#include <stdexcept>
using namespace std;
struct SLaboratorio{
  std::vector<Sdispositivo*> lista;
  //std::vector<Sdispositivo*> *lista;
  short aula;
  short capacidad;
  SLaboratorio(short aula,short capacidad);
  void Agregar(Sdispositivo* obj);
  void Eliminar(short pos);
  Sdispositivo* obtener(short pos);
  void showDispositivo();
};
SLaboratorio::SLaboratorio(short aula,short capacidad){
  this->aula=aula;
  this->capacidad=capacidad;
}
void SLaboratorio::Agregar(Sdispositivo* obj){
  lista.push_back(obj);
  cout<<"Lista: "<<lista.size()<<endl;
}
void SLaboratorio::Eliminar(short pos){
  if(pos>lista.size()){
    cout<<"Posicion incorrecta "<<endl;
  }else{
    lista.erase(lista.begin()+pos);
    cout<<"Eliminado"<<endl;
  } 
}
Sdispositivo* SLaboratorio::obtener(short pos){
  return pos>lista.size() ? nullptr : lista.at(pos); 
  
  /*try {
    return lista.at(pos);    // vector::at throws an out-of-range
  }
  catch (const out_of_range& oor) {
  cout<<"Numero Fuera de Rango: "<<oor.what()<<endl;
  }
  return new Sdispositivo;
  */
}
void SLaboratorio::showDispositivo(){
  for(size_t i=0;i<lista.size();++i){
     lista[i]->getAll();
  }
}
