//
//  main.cpp
//  EXAMEN01
//
//  Created by Alex Paredes on 7/10/17.
//  Copyright © 2017 Alex Paredes. All rights reserved.
//

#include <iostream>
#include "CSede.hpp"
#include <ctime>
#include <stdlib.h>
#include "CConductor.hpp"

std::string randomText(){
    std::string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    std::string cad = "";
    for (int i = 0; i< 5; i++) {
        cad += abc[rand()%60];
    }
    return  cad;
};

int main(int argc, const char * argv[]) {
    srand((int)time(NULL));
    
    CSede ** sedes = new CSede*[3];
    sedes[0] = new CSede("Campus1");
    sedes[1] = new CSede("Campus2");
    sedes[2] = new CSede("Capiña");
    
    // generar salidas aleatorias.
    for (int i = 0, fecha, hora; i < 100; i++) {
        fecha =rand() % 100;
        hora = rand() % 100;
        sedes[rand() % 3]->getAgente()->registrarSalida(fecha, hora, randomText(), * new CConductor(randomText()), 10, sedes[rand() % 3]->getNombre(),sedes[rand() % 3]->getNombre(), rand() % 100);
        
        //std::cout<< "Aleatorio " << randomText() << std::endl;
    }
    
    
    //sedes[0]->getAgente()->registrarSalida(10, 20, (char*)"a25", (char*)"Juanito", 10, (char*)"Campus1",(char*)"Campus2", 60);
    
    //sedes[1]->getAgente()->registrarSalida(10, 20, (char*)"a25", (char*)"Juanito", 10, (char*)"Campus1",(char*)"Campus2", 60);
    
    //std::cout << sedes[2]->getNombre() <<std::endl;
    
    
    
    
    return 0;
}
