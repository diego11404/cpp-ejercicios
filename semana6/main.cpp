//#include <iostream>
#include "Lista.hpp"
#include "CAlumno.hpp"
#include "Aula.hpp"
int main(){

  SLista<int>* enteros = new SLista<int>();
  SLista<float>* flotantes = new SLista<float>();
  SLista<SAula*>* aulas = new SLista<SAula*>();
  SLista<CAlumno*>* alumnos = new SLista<CAlumno*>();
  
  for(int i=0;i<10;++i){
    enteros->anteponer((i+1)*10);
    flotantes->anteponer((i+1)*0.3);
    aulas->anteponer(new SAula((i+1)*3,(i+1)*2,'A'+i,(i+1)*10));
    alumnos->anteponer(new CAlumno("Diego"+std::to_string(i),"Cesar"+std::to_string(i),i+10));    
  }
  for(int i=0;i<enteros->getNelementos();i++){
    std::cout<<"Entero: "<<enteros->recuperar(i)<<"\t";
    std::cout<<"Flotante: "<<flotantes->recuperar(i)<<"\t";
    std::cout<<"Aulas: "<<aulas->recuperar(i)->toString()<<"\t";
    std::cout<<"Alumnos: "<<alumnos->recuperar(i)->toString()<<std::endl;
  }

  system("pause");  
  return 0;
}