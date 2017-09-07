#include "Carro.hpp"
Ccarro::Ccarro(char *marca,char*modelo,short placa,short anio){
		this->marca=marca;
		this->modelo=modelo;
		this->placa=placa;
		this->anio=anio;
	}
Ccarro::Ccarro(short placa,char *marca,char*modelo,short anio){
		this->marca=marca;
		this->modelo=modelo;
		this->placa=placa;
		this->anio=anio;
	}
Ccarro::Ccarro(){
		marca = new char[10];
		marca = (char*)("DEFECTO");
		modelo = new char[10];
		modelo= (char*)("DEFECTO");
		placa=258;
		anio=2010;
	}
//Ccarro::~Ccarro(){delete marca; delete modelo;}	
	char* Ccarro::getMarca(){return marca;}
	char* Ccarro::getModelo(){return modelo;}
	short Ccarro::getPlaca(){return placa;}
	short Ccarro::getAnio(){return anio;}
	
	void Ccarro::setMarca(char *marca){this->marca=marca;}
	void Ccarro::setModelo(char *modelo){this->modelo=modelo;}
	void Ccarro::setPlaca(short placa){this->placa=placa;}
	void Ccarro::setAnio(short anio){this->anio=anio;}	
	void Ccarro::getAll(){ std::cout<<marca<<" "<<modelo<<" "<<placa<<" "<<anio<<std::endl;}

