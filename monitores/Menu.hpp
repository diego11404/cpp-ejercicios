#include "ArrMonitor.hpp"
void Menu(){
	char opt;
	CarrMonitor monitores;
	do{
		system("cls");
		cout<<"********Menu*********"<<endl;
		cout<<"	1.Insertar "<<endl;
		cout<<"	2.Buscar por Posicion "<<endl;;
		cout<<"	3.Eliminar Todo "<<endl;
		cout<<"	0.Salir  "<<endl;
		cout<<"Ingrese Opcion: ";cin>>opt;
		switch(opt){
			case '1': monitores.insertar();break;
			case '2': monitores.buscarxPos();break;
			case '3': monitores.eliminarTodo();break;
		}
	}while(opt!='0');
	cin.ignore();
	cin.get();
	
}
