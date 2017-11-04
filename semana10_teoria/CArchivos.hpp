#ifndef _ARC_
#define _ARC_

#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <queue>
#include "Cola.hpp"

class CArchivos{
public:
  CArchivos(){};
  void escArchivos(std::string s){
    srand((int)time(NULL));
    long n=100000;
    std::ofstream file("UPAO2.txt");
    for(int i=0;i<n;++i){
        file<<s<<","<<rand()%7+18<<"\n";
    }
    file.close();
}
void leerArchivo(SCola<int>& cola){
  std::ifstream file("UPAO.txt");
  std::string cadena;
    while(getline(file,cadena)){
        cola.insertar(atoi(cadena.c_str()));
    }
    file.close();
} 
void leerArchivoXQueue(std::queue<int>& cola){
    std::ifstream file("UPAO.txt");
    std::string cadena;
    while(getline(file,cadena)){
        cola.push(atoi(cadena.c_str()));
    }
    file.close();
}
};

#endif