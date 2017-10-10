//
//  CConductor.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include "CConductor.hpp"
#include <iostream>

CConductor::CConductor() { 
    nombre = "";
    dni = "";
}

CConductor::CConductor(std::string nombre) {
    this->nombre = nombre;
    dni = "";
}

std::string CConductor::getNombre() { 
    return this->nombre;
}


