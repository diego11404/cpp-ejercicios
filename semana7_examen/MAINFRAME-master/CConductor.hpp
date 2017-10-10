//
//  CConductor.hpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#ifndef CConductor_hpp
#define CConductor_hpp
#include <iostream>
#include <stdio.h>

class CConductor {
    std::string nombre;
    std::string dni;
public:
    CConductor();
    CConductor(std::string);
    std::string getNombre();
};

#endif /* CConductor_hpp */
