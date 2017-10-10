//
//  CBus.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//
#include <iostream>
#include "CBus.hpp"
CBus::CBus() {
    capacidadMaxima = 50;
    placa = "0"; // generar Placa.
    cantidadPasajeros = 0;
    conductor = nullptr; // aginar un conductor aleatorio
}

short CBus::getCantidadPasajeros() { 
    return cantidadPasajeros;
}

std::string CBus::getPlaca() {
    return placa;
}



