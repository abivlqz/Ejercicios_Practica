//
//  Ejercicio4_1.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
    
    char mensaje[]="Hola que tal ";
    char nombre[20];
    char mensajeListo[50];
    
    cout<<"Ingresa tu nombre"<<endl;
    cin.getline(nombre, 20);
    strcpy(mensajeListo, mensaje);
    strcat(mensajeListo, nombre);
    
    cout<<mensajeListo<<endl;
    
    
    return 0;
}
