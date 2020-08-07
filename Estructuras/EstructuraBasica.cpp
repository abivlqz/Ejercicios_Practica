//
//  EstructuraBasica.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}persona1;

int main(){
    cout<<"Digita  nombre1: "<<endl;
    cin.getline(persona1.nombre,20);
    
    cout<<"Edad1: "<<endl;
    cin>>persona1.edad;
    
    
    cout<<"Imprimiendo datos"<<endl;
    cout<<"Nombre "<<persona1.nombre<<endl;
     cout<<"edad "<<persona1.edad<<endl;
    return 0;
}
