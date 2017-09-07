#include <iostream>
#include "ArrCarro.hpp"
using namespace std;
int main (){
	
	CarrCarro* arrCarr= new CarrCarro(10);
	Ccarro carr;
	arrCarr->Insert(&carr);
	Ccarro* carrd1= new Ccarro((char*)"Lamborguini",(char*)"Aventador",2478,2019);
	arrCarr->Insert(carrd1);
	Ccarro* carrd2=new Ccarro((char*)"AstonMartin",(char*)"VBR",6958,2011);
	arrCarr->Insert(carrd2);
	Ccarro *carrd3 = new Ccarro((char*)"Alfa Romero",(char*)"sort",9630,2012);
	arrCarr->Insert(carrd3);
	
	cout<<"La posicion del carro buscado es: "<<arrCarr->Buscar(9630)<<endl;
	cout<<"La longitud es:  "<<arrCarr->getLongitud()<<endl;
	arrCarr->EliminarxPosicion(3);	
	for(int i=0;i<arrCarr->getLongitud();++i){
		//arrCarr->getCarr(i);
		arrCarr->recupear(i)->getAll();
	}
	cout<<"La longitud es:  "<<arrCarr->getLongitud()<<endl;
	arrCarr->EliminarTodo();
	cout<<"La longitud es:  "<<arrCarr->getLongitud()<<endl;
	/*
	// estatica - implicita
	Ccarro carr;
	Ccarro carr2((char*)"mercedes",(char*)"TX5",2501,2009);
	// dinamica 
	Ccarro* carrd1= new Ccarro((char*)"Lamborguini",(char*)"Aventador",5075,2008);
	Ccarro* carrd2= new Ccarro();
	///Arrays
	Ccarro** arrCcarr= new Ccarro*[10];
	arrCcarr[0]=&carr;
	arrCcarr[1]=&carr2;
	arrCcarr[2]=carrd1;
	arrCcarr[3]=carrd2;
	arrCcarr[4]=new Ccarro((char*)"AstonMartin",(char*)"VBR",6958,2011);
	arrCcarr[5]=new Ccarro((char*)"Alfa Romero",(char*)"sort",9630,2012);
	
	for(int i=0;i<6;++i){
		(*(arrCcarr+i))->getAll();
	}
	*/
	return 0;
}
