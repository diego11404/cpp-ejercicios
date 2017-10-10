//
//  CRegistroSalida.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//
#include <iostream>
#include "CRegistroSalida.hpp"
CRegistroSalida::CRegistroSalida(){
    
}
CRegistroSalida::CRegistroSalida(short fecha, short hora, std::string placa, CConductor conductor, short cantidad, std::string campusorigen, std::string campusfinal, short km) {
    fechaSalida = fecha;
    horaSalida = hora;
    this->placa = placa;
    nombreConductor = conductor.getNombre();
    cantidadPasajeros = cantidad;
    campusOrigin = campusorigen;
    campusLlegada = campusfinal;
    kilometraje = km;
}
