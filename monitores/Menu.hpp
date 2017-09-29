#include "ArrMonitor.hpp"
void Menu(){
	char opt;
	char option;
	char* marca;

	short pos;
	CarrMonitor* monitores = new CarrMonitor();
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
			case '1': {
				system("cls");
				marca=new char[10];
				short alto;
				short ancho;
				cout<<"*******Registrar Monitor********"<<endl;cin.ignore();
				cout<<"Ingrese Marca: "; cin>>marca;
				cout<<"Ingrese Alto: ";  cin>>alto;
				cout<<"Ingrese Ancho: "; cin>>ancho;
				CMonitor moni((char*)marca,alto,ancho);
				monitores->insertar(moni);
				}	break;
			case '2': {
				system("cls");
				cout<<"*****Buscar por posicion********"<<endl; 
				cout<<"Ingrese Posicion: "; cin>>pos;
				bool tmp= monitores->buscarxPos(pos);
				if(!tmp) cout<<"VACIO"<<endl;
				system("pause");
			}break;
			case '3': 
				system("cls");
				cout<<"*****Eliminar Todo********"<<endl; 
				cout<<"Seguro de desea continuar (s/n) ";cin>>option;
				monitores->eliminarTodo(option);
				break;
			case '4': monitores->mostrarTodo(); system("pause");break;
		}
	}while(opt!='0');
	system("pause");	
}
