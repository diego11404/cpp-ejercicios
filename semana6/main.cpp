//#include <iostream>
#include "Lista.hpp"
#include "CAlumno.hpp"
#include "Aula.hpp"
int main(){
  CLista<int> *enteros = new CLista<int>();
  CLista<float> *flotantes = new CLista<float>();
  CLista<SAula *> *aulas = new CLista<SAula *>();
  CLista<CAlumno *> *alumnos = new CLista<CAlumno *>();
  CLista<char> *characteres = new CLista<char>();

  for(int i=0;i<10;++i){
    enteros->anteponer((i+1)*10);
    flotantes->anteponer((i+1)*0.3);
    aulas->anteponer(new SAula((i+1)*3,(i+1)*2,'A'+i,(i+1)*10));
    alumnos->anteponer(new CAlumno("Diego"+std::to_string(i),"Cesar"+std::to_string(i),i+10));
    characteres->anteponer(65+i);   
  }
  flotantes->InsertarFinal((99+1)*0.3*10);
  alumnos->InsertarFinal(new CAlumno("lQ"+std::to_string(98),"Cesar"+std::to_string(96),8+10));    
  
  for(int i=0;i<enteros->getNelementos();i++){
    std::cout<<"Entero: "<<enteros->recuperar(i)<<"\t";
    std::cout<<"Flotante: "<<flotantes->recuperar(i)<<"\t";
    std::cout<<"Aulas: "<<aulas->recuperar(i)->toString()<<"\t";
    std::cout<<"Alumnos: "<<alumnos->recuperar(i)->toString()<<std::endl;
    std::cout<<"Characteres: "<<characteres->recuperar(i)<<std::endl;
  }
  
  std::cout<<"FIN flotantes: "<<flotantes->getFin()->getElemento()<<std::endl;  
  std::cout<<"FIN ALUMNOS: "<<alumnos->getFin()->getElemento()->toString()<<std::endl;
  std::cout<<"Anterior Alumnos: "<<alumnos->buscarXpos(5)->getAnterior()->getElemento()->toString()<<std::endl;
  std::cout<<"Actual Alumnos: "<<alumnos->buscarXpos(5)->getElemento()->toString()<<std::endl;
  std::cout<<"Siguiente Alumnos: "<<alumnos->buscarXpos(5)->getSiguiente()->getElemento()->toString()<<std::endl;
  
  std::cout<<"Anterior al Final Alumnos: "<<alumnos->getFin()->getAnterior()->getElemento()->toString()<<std::endl;
  
  std::cout<<"Characteres anterior Fin: "<<characteres->getFin()->getAnterior()->getElemento()<<std::endl;
  
  
  
  
  system("pause");  
  return 0;
}