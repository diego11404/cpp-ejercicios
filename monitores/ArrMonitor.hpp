#include "Monitor.hpp"
#include <vector>
//#include <cstdlib>
#include <iostream>
#ifndef __ARR_MONITOR_HPP__
#define __ARR_MONITOR_HPP__
using namespace std;
class CarrMonitor{
	vector<CMonitor> lista;
	public:
		CarrMonitor();
		~CarrMonitor();
		void insertar(CMonitor obj);
		void eliminarTodo(char opt);
		bool buscarxPos(short pos);
		void mostrarTodo();
};
CarrMonitor::CarrMonitor(){}
CarrMonitor::~CarrMonitor(){}

void CarrMonitor::insertar(CMonitor obj){
	lista.push_back(obj);
}
void CarrMonitor::eliminarTodo(char opt){
	if(toupper(opt)=='S'){
		lista.clear();		
		cout<<"Eliminados"<<endl;
	}else{
		cout<<"Ningun cambio realizado"<<endl;
	}
	getch();
}
bool CarrMonitor::buscarxPos(short pos){
	if(pos>=lista.size()){
		return false;
	}else{
		lista.at(pos).getAll();
		return true;
	}

}
void CarrMonitor::mostrarTodo(){
	system("cls");
	cout<<"******Mostrar Todo*************"<<endl;
	for(int i=0;i<this->lista.size();++i){
		lista[i].getAll();
	}
}
#endif
