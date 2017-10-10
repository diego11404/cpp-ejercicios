//
//  AgenteSeguridad.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef AgenteSeguridad_hpp
#define AgenteSeguridad_hpp
#include <iostream>
#include <stdio.h>
#include "CRegistroSalida.hpp"
#include "CConductor.hpp"
class CAgenteSeguridad {
    CRegistroSalida ** registros;
    int cantidad;
    
public:
    CAgenteSeguridad();
    void registrarSalida(short, short, std::string, CConductor, short, std::string, std::string, short);
};
#endif /* AgenteSeguridad_hpp */
