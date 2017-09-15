#include "ArrMonitor.hpp"
CarrMonitor::CarrMonitor(){}
CarrMonitor::~CarrMonitor(){}

void CarrMonitor::insertar(){
	char* marca=new char[10];
	short alto,ancho;
	system("cls");
	cout<<"*******Registrar Monitor********"<<endl;cin.ignore();
	cout<<"Ingrese Marca: "; cin>>(char*)marca;
	cout<<"Ingrese Alto: ";  cin>>alto;
	cout<<"Ingrese Ancho: "; cin>>ancho;
	CMonitor monitor(marca,alto,ancho);
	lista.push_back(monitor);
}
void CarrMonitor::eliminarTodo(){
	system("cls");
	char opt;
	cout<<"*****Eliminar Todo********"<<endl; 
	cout<<"Seguro de desea continuar (s/n) ";cin>>opt;
	if(toupper(opt)=='S'){
		cout<<"Eliminado"<<endl;
		lista.clear();
	}else{
		cout<<"Ningun cambio realizado"<<endl;
	}
	getch();
}
void CarrMonitor::buscarxPos(){
	system("cls");
	short pos;
	cout<<"*****Buscar por posicion********"<<endl; 
	cout<<"Ingrese Posicion: "; cin>>pos;
	CMonitor tmp = lista.at(pos);
	tmp.getAll();
}
void CarrMonitor::mostrarTodo(){
	system("cls");
	cout<<"******Mostrar Todo*************"<<endl;
	for(int i=0;i<this->lista.size();++i){
		lista[i].getAll();
	}
}
