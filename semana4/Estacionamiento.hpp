#include <conio.h>
#include <cstring>
#include "Vehiculo.hpp"
#ifndef __ESTACIONAMIENTO_HPP_
#define __ESTACIONAMIENTO_HPP_
class CEstacionamiento {
private:
	CVehiculo** arrVehiculo;
	size_t aforo;
	size_t cantidad;
public:
	CEstacionamiento(size_t aforo);
	~CEstacionamiento();
	size_t getaforo();
	size_t getcantidad();
	void insertar(CVehiculo* obj);
	void insertarXPosicion(CVehiculo* obj,short pos);
	void Retirar(short pos);
	void buscarXPlaca(char* placa);
	void ObtenerDisponible(bool flag=false);
	void ordenarXAnio();
	void verTodo();
	CVehiculo* verXPosicion(short pos);
};
CEstacionamiento::CEstacionamiento(size_t aforo){
	this->aforo=aforo;
	this->arrVehiculo = new CVehiculo*[aforo];
	this->cantidad=-1;
	for (size_t i = 0; i < aforo; i++) {
		arrVehiculo[i] = nullptr;
	}
}
CEstacionamiento::~CEstacionamiento() {}
size_t CEstacionamiento::getaforo() { return this->aforo; }
size_t CEstacionamiento::getcantidad() { return this->cantidad; }
void CEstacionamiento::insertar(CVehiculo* obj){
	cantidad++;
	if(cantidad>=0 && cantidad<aforo){
		if(arrVehiculo[cantidad]!=nullptr){
			cantidad++;
		}
		arrVehiculo[cantidad]=obj;		
		cout<<"Vehiculo "<<cantidad+1<<" Insertado"<<endl;
	}else cout<<"Establecimiento lleno "<<endl;
}
void CEstacionamiento::insertarXPosicion(CVehiculo* obj,short pos) {
	if(pos >= 0 && pos < this->aforo){
		if(arrVehiculo[pos]!=nullptr){
			cout<<"Espacio Ocupado"<<endl;
		}else {
			arrVehiculo[pos]=obj;
			cout<<"Insertado"<<endl;
		}
	}else cout<<"Posicion Incorrecta"<<endl;
}
void CEstacionamiento::Retirar(short pos){
	if(pos >= 0 && pos < this->aforo){
			if(arrVehiculo[pos]!=nullptr){
				if(pos+1>=this->aforo){
					arrVehiculo[pos]=nullptr;
				}else{
					arrVehiculo[pos]=arrVehiculo[pos+1];
					arrVehiculo[pos+1]=nullptr;
				}	
				cout<<"Vehiculo retirado posicion: "<<pos<<endl;
			}else cout<<"No hay vehiculo en la posicion:"<< pos<<endl;

			if(pos<=cantidad){
				cantidad--;
			}
	}else cout<<"Ingrese una posicion valida "<<endl;
}
void CEstacionamiento::buscarXPlaca(char* placa) {
	for (size_t i = 0; i < this->aforo; ++i) {
		if(arrVehiculo[i]!=nullptr){
			if(strcmp(arrVehiculo[i]->getplaca(),placa)==0){
				 arrVehiculo[i]->getAll();
			}
		}
	}
}

void CEstacionamiento::ObtenerDisponible(bool flag) {
	for (int i = 0; i < aforo; ++i) {
		if(flag){
			if(arrVehiculo[i]!=nullptr){
				cout<<i<<" ";
			}
		}else if(arrVehiculo[i]==nullptr){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
void CEstacionamiento::ordenarXAnio() {
	for(int i=0,j;i< this->aforo-1;++i){
		j=i+1;
		while(j<this->aforo){
			if(arrVehiculo[j]!=nullptr&& arrVehiculo[i]!=nullptr){
					if(arrVehiculo[i]->getanio()>arrVehiculo[j]->getanio()){
						CVehiculo* tmp=arrVehiculo[i];
						arrVehiculo[i]=arrVehiculo[j];
						arrVehiculo[j]=tmp;
					}
				}
				j++;
		}
	}
	/*for(int i=1,j;i< this->aforo;++i){
		j=i;
		if(arrVehiculo[j-1]!=nullptr&& arrVehiculo[j]!=nullptr){
			while(j>0 && arrVehiculo[j-1]->getanio()>arrVehiculo[j]->getanio()){
				CVehiculo* tmp=arrVehiculo[j];
				arrVehiculo[j]=arrVehiculo[j-1];
				arrVehiculo[j-1]=tmp;
				j--;
			}
		}
	}*/
	CEstacionamiento::verTodo();
}
void CEstacionamiento::verTodo() {
	for(int i=0;i < this->aforo;++i){
		if(arrVehiculo[i]!=nullptr){
			cout<<i<<". ";
			arrVehiculo[i]->getAll();
		}
	}
}
CVehiculo* CEstacionamiento::verXPosicion(short pos){
	return (pos >= 0 && pos < this->aforo) ? (arrVehiculo[pos] != nullptr) ? arrVehiculo[pos] : nullptr
																				 : nullptr;
}
#endif // !__ESTACIONAMIENTO_HPP_

