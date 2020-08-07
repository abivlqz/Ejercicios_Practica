//
//  Paso de parametros de tipo estructura.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Paso de parametros tipo struct

#include <stdio.h>
#include <iostream>

using namespace std;

struct persona {
    char nombre[30];
    int edad;
}p1;

void pedirDatos(){
    cout<<"ingresa tu nombre"<<endl;
    cin.getline(p1.nombre, 30);
    cout<<"Ingresa tu edad"<<endl;
    cin>>p1.edad;
    
}

void mostrarDatos(persona p){
    cout<<"Nombre : "<<p.nombre<<endl;
    cout<<"Edad :"<<p.edad<<endl;
    
}

int main(){
    pedirDatos();
    mostrarDatos(p1);
    
    return 0;
}
