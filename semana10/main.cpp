#include "Tienda.hpp"
#include "Controller.hpp"

int main(){
 
  //CTienda *tienda = new CTienda();
  //for(int i=0;i<5;i++){
  //  tienda->Insert(new CItems(12+1,"Balsamo"+std::to_string(i),"12"+std::to_string(i),5+1));
  //}
  //tienda->Save();
  CController* contr = new CController();
  contr->crearItems();
  contr->crearTienda();
  contr->crearPersonajes();
  contr->guardarTodo();

  /*std::list<int>* lista = new std::list<int>();

  int c=10;
  lista:
  lista->push_back(c--);
  if(c>0) goto lista;

  lista->sort();
  std::list<int>::iterator it = lista->begin();
  auto ux = next(lista->begin(),0);
  while(it!=lista->end()){
    std::cout<<*(it++)<<std::endl;
  }*/

  
  return 0;
}