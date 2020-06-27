//
//  Ejercicio4.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Funcion strcat() añadir o concatenar una cadena a otra

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
    
    char cad1[]="Esto es una cadena";
    char cad2[]= "de ejemplo";
    char cadUnida[50];
    
    strcpy(cadUnida, cad1);// cadUnida "Esto es una cadena"
    strcat(cadUnida, cad2);// cadUnida "Esto es una cadena de ejemplo"
    
    cout<<cadUnida<<endl;
    
    
    
    
    return 0;
}
