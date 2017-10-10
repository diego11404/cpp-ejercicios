//
//  CSede.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef CSede_hpp
#define CSede_hpp
#include <iostream>
#include <stdio.h>
#include "CBus.hpp"
#include "AgenteSeguridad.hpp"

class CSede{
    CBus * buses;
    std::string nombre;
    CAgenteSeguridad * agente;
    
public:
    CSede();
    CSede(std::string nombre);
    std::string getNombre();
    CAgenteSeguridad * getAgente();
    
    void agregarBus();
};

#endif /* CSede_hpp */
