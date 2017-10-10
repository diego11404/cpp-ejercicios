//
//  CRegistroSalida.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef CRegistroSalida_hpp
#define CRegistroSalida_hpp
#include <iostream>
#include <stdio.h>
#include "CConductor.hpp"

class CRegistroSalida {
    short fechaSalida;
    short horaSalida;
    std::string placa;
    std::string nombreConductor;
    short cantidadPasajeros;
    std::string campusOrigin;
    std::string campusLlegada;
    short kilometraje;
public:
    CRegistroSalida();
    CRegistroSalida(short, short, std::string, CConductor, short, std::string, std::string, short);
};

#endif /* CRegistroSalida_hpp */
