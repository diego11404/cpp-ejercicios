#include "CUsuario.hpp"
#ifndef _CCOLA_USER__
#define _CCOLA_USER__
class CColaUsuario{
  CUsuario** listaUsuario;
  short capacidad;
  short indice;
  short nAlumnos;
  short nDocentes;
  short nPadres;
public:
  CColaUsuario(short capacidad);
  short getCapacidad();
  short getIndice();
  short getnAlumnos();
  short getnDocentes();
  short getnPadres();
  bool insertar(CUsuario* obj);
  void atender();
  void atenderXtipo(char tipo);
  void mostrarCola();
  void mostrarAtendidos();
};
CColaUsuario::CColaUsuario(short capacidad){
  this->capacidad=capacidad;
  this->indice=-1;
  this->listaUsuario= new CUsuario*[capacidad];
  this->nAlumnos=0;
  this->nDocentes=0;
  this->nPadres=0;
  for(size_t i = 0;i<capacidad;i++){
    listaUsuario[i]=nullptr;
  }
}
short CColaUsuario::getCapacidad(){return this->capacidad;}
short CColaUsuario::getIndice(){return this->indice+1;}
short CColaUsuario::getnAlumnos(){return this->nAlumnos;}
short CColaUsuario::getnDocentes(){return this->nDocentes;}
short CColaUsuario::getnPadres(){return this->nPadres;}
bool CColaUsuario::insertar(CUsuario* obj){
  if(++indice<this->capacidad){
    listaUsuario[indice]=obj;
    return true;
  }else {
    --indice;
    return false;
  }

}
void CColaUsuario::atender(){
  if(this->indice>=0){
    switch(toupper(listaUsuario[0]->gettypeUser())){
      case 'A':this->nAlumnos++; break;
      case 'D':this->nDocentes++; break;
      case 'P':this->nPadres++; break;
    }
    for(size_t i=0;i<=this->indice;i++){
      if(listaUsuario[i+1]!=nullptr){
        listaUsuario[i]=listaUsuario[i+1];
      }else{
        listaUsuario[i]=nullptr;
      }
    }
    indice--;
    std::cout<<"Atendido"<<std::endl;
  }else std::cout<<"Cola Vacia"<<std::endl;;
}
void CColaUsuario::atenderXtipo(char tipo){
  short pos;
  bool flag=false;
  if(this->indice>=0){
    for(size_t i=0;i<=this->indice;++i){
      if(listaUsuario[i]->gettypeUser()==tipo){
        pos=i;
        switch(toupper(tipo)){
          case 'A':this->nAlumnos++; break;
          case 'D':this->nDocentes++; break;
          case 'P':this->nPadres++; break;
        }
        goto ir;
      }else{
        std::cout<<"No encontrado"<<std::endl;
        goto salir;
      } 
    }
    ir:
    for(int i=pos;i<this->indice;++i){
      if(i>=this->indice){
        listaUsuario[i]=nullptr;   
      }else listaUsuario[i]=listaUsuario[i+1];
    }
    indice--;
    std::cout<<"Atendido"<<std::endl;
  }else std::cout<<"Cola vacia"<<std::endl;
  salir:;
  //listaUsuario[pos+1]=nullptr;
}
void CColaUsuario::mostrarCola(){
  for(int i=0;i<=this->indice;++i){
      std::cout<<i<<". "<<**(listaUsuario+i)<<std::endl;
  }
}
void CColaUsuario::mostrarAtendidos(){
  std::cout<<"ALUMNOS: "<<this->nAlumnos<<" "<<std::endl;
  std::cout<<"DOCENTES: "<<this->nDocentes<<" "<<std::endl;
  std::cout<<"PADRES: "<<this->nPadres<<" "<<std::endl;
}

#endif