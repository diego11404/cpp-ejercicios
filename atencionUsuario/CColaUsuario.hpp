#ifndef _CCOLA_USER__
#define _CCOLA_USER__
#include "CLista.hpp"
#include "CUsuario.hpp"
#include <fstream>
#include <vector>
class CColaUsuario{
  CUsuario** listaUsuario;
  CLista<CUsuario*> *userList;
  short capacidad;
  short indice;
  short nAlumnos;
  short nDocentes;
  short nPadres;
public:
  CColaUsuario(short capacidad);
  CColaUsuario();
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

  bool insertToList(CUsuario*);
  bool attend();
  void showQueue();
  void showAttended();
  void type(char);
  CLista<CUsuario*>* getCola();
  void Save();
  void Read();
};
CColaUsuario::CColaUsuario(){
    this->userList = new CLista<CUsuario*>();
    this->capacidad=20;
    this->indice=0;
    this->nAlumnos=0;
    this->nDocentes=0;
    this->nPadres=0;
}
void CColaUsuario::Read(){
  std::string linea;
  std::ifstream read("datos.txt");
  for(int i=0;i<this->capacidad;i++){
    std::getline(read,linea);
    std::cout<<linea<<"\n";
  }
  read.close();
}
void CColaUsuario::Save(){
  std::ofstream archivo("datos.txt", std::ios::out);
  for(int i=0;i<this->indice;i++){
    auto aux = this->userList->searchNext(i)->getElement();
    archivo<<i<<". "<<aux->getname()<<","<<aux->gettypeUser()<<","<<aux->getuserCode()<<","<<aux->getticker()<<"\n";  
  }
  archivo.close();
}
CLista<CUsuario*>* CColaUsuario::getCola(){
  return this->userList;
}
void CColaUsuario::type(char type){
  switch(std::toupper(type)){
    case 'A': this->nAlumnos++;
    break;
    case 'D': this->nDocentes++;
    break;
    case 'P': this->nPadres++;
    break;
  }
}
bool CColaUsuario::insertToList(CUsuario* obj){
  if(this->indice < this->capacidad){
   this->indice++;
   this->userList->insertEnd(obj);
   return true;
  }return false;
}
bool CColaUsuario::attend(){
  if(0 < this->indice){
    CColaUsuario::type(this->userList->getStart()->getElement()->gettypeUser());
    this->userList->eraseNext(0);
    this->indice--;
  }else return false; 
}
void CColaUsuario::showQueue(){
  for(int i=0;i < this->indice;i++){
    std::cout<<i<<". "<<*this->userList->searchNext(i)->getElement()<<std::endl;
    //this->userList->searchNext(i)->getElement()->getAll();
  }
}
void CColaUsuario::showAttended(){
  std::cout<<"N Alumnos "<<this->nAlumnos<<std::endl;
  std::cout<<"N Docentes "<<this->nDocentes<<std::endl;
  std::cout<<"N Padres "<<this->nPadres<<std::endl;
}
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
    return listaUsuario[indice]=obj, true;
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