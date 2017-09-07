#include "Carro.hpp"
#ifndef __ARRCARRO_H__
#define __ARRCARRO_H__
class CarrCarro{
	Ccarro** arr;
	short capacidad;
	short indice;
public:
	CarrCarro(short capacidad){
		this->capacidad=capacidad;
		arr = new Ccarro*[capacidad];
		indice=-1;	
	} 
	short getCapacidad(){return capacidad;}
	short getLongitud(){return indice+1;}	
	void getCarr(short i){ arr[i]->getAll();}
	void Insert(Ccarro* car){
		indice++;
		if(indice<capacidad){
			arr[indice]=car;
		}
	}
	Ccarro* recupear(short pos){
		if(pos>=0 && pos<=indice)
			return arr[pos];
		//else
		// return nullptr;	
	}
	short Buscar(int placa){
		for(int i=0;i<=indice;++i){
			if(placa==arr[i]->getPlaca())
				return i;
		}
	}
	bool EliminarxPosicion(short pos){
		if(pos>=0 && pos<=indice){
			for(;pos<=indice;++pos){
				arr[pos]=arr[pos+1];
			}
			indice--;
			return true;
		}else return false;
	}
	void EliminarTodo(){
		delete arr;
		indice=-1;
	}
};
#endif
