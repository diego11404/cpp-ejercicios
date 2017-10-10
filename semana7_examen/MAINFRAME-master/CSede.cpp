//
//  CSede.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "CSede.hpp"
#include "AgenteSeguridad.hpp"
#include <iostream>
CSede::CSede(std::string  nombre){
    this->agente = new CAgenteSeguridad();
    this->nombre = nombre;
}

std::string  CSede::getNombre() {
    return this->nombre;
}

CAgenteSeguridad * CSede::getAgente() {
    return this->agente;
}



 
