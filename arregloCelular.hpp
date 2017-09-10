#include "SCelular.hpp"
#ifndef __CELULAR_HPP__
#define __CELULAR_HPP__
struct SArregloCelular{
    SCelular** lista;
    short indice;
    short capacidad;
    SArregloCelular(){
        capacidad=10;
        lista= new SCelular*[capacidad];
        indice=-1;
     
    }
    void insertar(SCelular* cel){
        indice++;
        if(indice<=capacidad){
            lista[indice]=cel;
        }
    }
    short getlongitud(){
        return indice+1;
    }
    SCelular* recuperar(short pos){
        if(pos>=0 && pos<=indice){
            return lista[pos];
        }
    }
    void reportar(short i){
        lista[i]->getAll();
    }
};
#endif
