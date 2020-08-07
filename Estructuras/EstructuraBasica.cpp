//
//  EstructuraBasica.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}persona1 = {"Abigail",20},
persona2 = {"Alejandro",20};

int main(){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;
    
    cout<<"Nombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;
    return 0;
}
