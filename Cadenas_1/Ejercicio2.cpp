//
//  Ejercicio2.cpp
//  Pruebas consola
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    
    char nombre1[30];
    char nombre2[30];
    
    cout<<"Digita una palabra"<<endl;
    cin.getline(nombre1, 30);
    
    strcpy(nombre2, nombre1);
    
    cout<<"Se ha copiado a otro arreglo "<<nombre2<<endl;
    return 0;
}
