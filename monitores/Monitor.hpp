#include <iostream>
#include <conio.h>
#ifndef __MONITOR_HPP__
#define __MONITOR_HPP__
class CMonitor{
	char* marca;
	short alto;
	short ancho;
public:
	CMonitor();
	CMonitor(char *marca,short alto,short ancho);
	~CMonitor();
	char* getMarca();
	short getAlto();
	short getAncho();
	
	void setMarca(char *marca);
	void setAlto(short alto);
	void setAncho(short ancho);
	short getArea();
	void getAll();
};
#endif
