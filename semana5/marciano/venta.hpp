#include "marciano.hpp"
#include <vector>
using namespace std;
struct SVenta{
  vector<SMarciano> lista;
  void insertar(SMarciano m){
    lista.push_back(m);
  }
  void eliminar(short pos){
    lista.erase(lista.begin()+pos);
  }
  SMarciano obtener(short pos){
    return lista.at(pos);
  }
  void  guardar(){
	  ofstream archivo;
	  ofstream.open("marcianos.txt");
	  for(size_t i=0;i<lista.size();++i){
	archivo<<lista.at(i).sabor<<","<<lista.at(i).precio<<endl;
	  }
  }
};