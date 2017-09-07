#include <iostream>
#ifndef __CARRO_H__
#define __CARRO_H__
class Ccarro{
	char *marca;
	char *modelo;
	short placa;
	short anio;
public:
	Ccarro(char *marca,char*modelo,short placa,short anio);
	Ccarro(short placa,char *marca,char*modelo,short anio);
	Ccarro();
//	~Ccarro();
	char* getMarca();
	char* getModelo();
	short getPlaca();
	short getAnio();
	
	void setMarca(char *marca);
	void setModelo(char *modelo);
	void setPlaca(short placa);
	void setAnio(short anio);
	void getAll();
};


#endif
