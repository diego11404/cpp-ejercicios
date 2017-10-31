#include "Tienda.hpp"
#include "Controller.hpp"

int main(){
 
  CTienda *tienda = new CTienda();
  for(int i=0;i<5;i++){
    tienda->Insert(new CItems(12+1,"Balsamo"+std::to_string(i),"12"+std::to_string(i),5+1));
  }
  tienda->Save();

  CController* contr = new CController();
  contr->guardarTodo();
  
  return 0;
}