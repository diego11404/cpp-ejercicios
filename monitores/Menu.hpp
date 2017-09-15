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
		cout<<"	4.Mostrar Todo "<<endl;
		cout<<"	0.Salir  "<<endl;
		cout<<"Ingrese Opcion: ";cin>>opt;
		switch(opt){
			case '1': monitores.insertar();break;
			case '2': monitores.buscarxPos();system("pause");break;
			case '3': monitores.eliminarTodo();break;
			case '4': monitores.mostrarTodo(); system("pause");break;
		}
	}while(opt!='0');
	system("pause");	
}
