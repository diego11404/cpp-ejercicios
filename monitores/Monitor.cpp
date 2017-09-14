#include "Monitor.hpp"
using namespace std;
CMonitor::CMonitor(){
	this->marca=new char[10];
	this->alto=20;
	this->ancho=40;
}
CMonitor::CMonitor(char *marca,short alto,short ancho){
	this->marca=marca;
	this->alto=alto;
	this->ancho=ancho;
}
CMonitor::~CMonitor(){
}
char* CMonitor::getMarca(){	return this->marca; }
short CMonitor::getAlto(){return this->alto;}
short CMonitor::getAncho(){return this->ancho;}

void CMonitor::setMarca(char *marca){this->marca=marca; }
void CMonitor::setAlto(short alto){this->alto=alto;}
void CMonitor::setAncho(short ancho){this->ancho=ancho;}
short CMonitor::getArea(){
	return this->alto*this->ancho;
}
void CMonitor::getAll(){
	cout<<this->getMarca()<<" "<<this->getAncho()<<" "<<this->getAlto()<<endl;
	getch();
}
