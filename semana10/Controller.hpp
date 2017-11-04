#include "Personaje.hpp"
#include "Tienda.hpp"
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

#ifndef __CONTROLL_HPP
#define __CONTROLL_HPP

class CController{
  
  std::list<CPersonaje*>* listPerso;
  std::vector<CItems*>* listItem;
  CTienda* tienda;
public:
  CController(){
    this->listPerso= new std::list<CPersonaje*>();
    this->listItem= new std::vector<CItems*>();
    this->tienda=new CTienda();
  }
  //items
  void crearItems(){
    srand((int)time(NULL));
    std::string nombres[]={"Balsamo","cura","pastilla","escudo"};
    
    for(int i=0;i<100;i++){
      listItem->push_back(new CItems(rand()%50+1,nombres[rand()%4],std::to_string(rand()%20),rand()%10+1));
    }
  }
  //tienda
  void crearTienda(){
    for(int i=0;i<100;i++){
      tienda->Insert(listItem->at(i));
    }
  }
  //heroes
  void crearPersonajes(){
    srand((int)time(NULL));
    
    char personajes[]={'H','C'};

   // auto aut = listItem->begin();
    //std::list<CItems*>::iterator it = listItem->begin();
    for(int i=0;i<10;i++){
      CPersonaje* per = new CPersonaje("Personaje"+std::to_string(i),rand()%100+1,rand()%10+1,rand()%100+1,rand()%58+1,rand()%88+1,rand()%66+1,personajes[rand()%2]); 
      for(int i=0;i<20;i++){
        //aut= next(listItem->begin(),i);
        per->comprar(listItem->at(rand()%100));
        //per->comprar(*(it++));
      }
      listPerso->push_back(per);
    }
  }
  void guardarTodo(){
    std::list<CPersonaje*>::iterator it = listPerso->begin();
    for(;it!=listPerso->end();it++){
      ((*it))->Guardar();
    }
    tienda->Save();
  }
  
};
#endif