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
  std::list<CPersonaje*>* listPerso = new std::list<CPersonaje*>();
  CTienda* tienda;
public:
  CController(){
    srand((int)time(NULL));
    std::vector<CItems*>* listItem = new std::vector<CItems*>();
    //items
    for(int i=0;i<100;i++){
      listItem->push_back(new CItems(rand()%50+1,"Balsamo"+std::to_string(i),"12"+std::to_string(i),rand()%10+1));
    }
    //tienda
    tienda = new CTienda();
    for(int i=0;i<10;i++){
      tienda->Insert(listItem->at(rand()%100));
    }
    //heries
    for(int i=0;i<10;i++){
      CPersonaje* per = new CPersonaje("Heroe"+std::to_string(i),rand()%50+1,rand()%10+1,rand()%100+1,rand()%58+1,rand()%88+1,rand()%66+1,'h'); 
      //simulando
      for(int i=0;i<5;i++){
        per->comprar(listItem->at(rand()%100));
        listPerso->push_back(per);
      }
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