//
//  AgenteSeguridad.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "AgenteSeguridad.hpp"
#include <iostream>
void CAgenteSeguridad::registrarSalida(short fecha, short hora, std::string placa, CConductor conductor, short cantidad, std::string campusorigen, std::string campusfinal, short km) {
    
    //this->registros = new CRegistroSalida*[100];
    
    this->registros[cantidad] = new CRegistroSalida(fecha, hora, placa, conductor, cantidad, campusorigen, campusfinal, km);
    cantidad++;
    
}

CAgenteSeguridad::CAgenteSeguridad() { 
    this->registros = new CRegistroSalida*[100];
    cantidad = 0;
}

