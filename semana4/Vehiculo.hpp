#include <iostream>
#ifndef _VEHICULO_HPP__
#define _VEHICULO_HPP__
using namespace std;
class CVehiculo{
private:
	char* marca;
	char* modelo;
	char* placa;
	char* color;
	short anio;	
public:						
	CVehiculo(char* marca, char* modelo, char* placa, char* color, short anio);
	~CVehiculo();// liberar memoria .-destructor
	CVehiculo(); ///constructor vacio;
	char* getmarca();
	char* getmodelo();
	char* getplaca();
	char* getcolor();
	short getanio();
/////////////////////////////////////
	void setmarca(char* marca);
	void setmodelo(char* modelo);
	void setplaca(char* placa);
	void setcolor(char* color);
	void setanio(short anio);

	friend std::ostream& operator<<(std::ostream& str,const CVehiculo& v);
	friend void fFriend(CVehiculo&);	
};
std::ostream& operator<<(std::ostream& str,const CVehiculo& v){
	return str<<v.marca<<" "<<v.modelo<<" "<<v.placa<<" "<<v.color<<" "<<v.anio;
}
void fFriend(CVehiculo& v){
	v.anio=888;
}
CVehiculo::CVehiculo(char* marca, char* modelo, char* placa, char* color, short anio):
	marca(marca), modelo(modelo), placa(placa), color(color), anio(anio){}
CVehiculo::CVehiculo() {
	marca = new char[10];
	modelo = new char[10];
	placa =  new char[10];
	color =  new char[10];
	anio = 0;
}
CVehiculo::~CVehiculo() {}	
char* CVehiculo::getmarca() { return this->marca; }
char* CVehiculo::getmodelo() { return this->modelo; }
char* CVehiculo::getplaca() { return this->placa; }
char* CVehiculo::getcolor() { return this->color; }
short CVehiculo::getanio() { return this->anio; }
//////////////////////////////////////////////
void CVehiculo::setmarca(char* marca)  {  this->marca=marca; }
void CVehiculo::setmodelo(char* modelo) { this->modelo=modelo; }
void CVehiculo::setplaca(char* placa)  {  this->placa=placa; }
void CVehiculo::setcolor(char* color)  {  this->color=color; }
void CVehiculo::setanio(short anio)   { this->anio=anio; }
//string CVehiculo::toString(){
//	return this->marca+" "+this->modelo+" "+this->placa+" "+this->color+" "+this->anio;
//}
#endif						
							
							