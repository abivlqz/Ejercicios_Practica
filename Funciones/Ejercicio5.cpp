//
//  Ejercicio5.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 03/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una plantilla de función llamada despliegue() que despliegue el valor del argumento unico que se le transmite cuando es invocada la función

#include <stdio.h>
#include <iostream>

using namespace std;

//Prototipos de funcion
template <class TIPOD>
void despligue(TIPOD dato);

int main(){
    
    int dato1= 4;
    double dato2 = 15.67;
    float dato3 = 567.7890;
    char dato4 = 'a';
    string dato5 = "Hola soy yo";
    
    despligue(dato1);
    despligue(dato2);
    despligue(dato3);
    despligue(dato4);
    despligue(dato5);
    
    
    
    return 0;
}


template <class TIPOD>
void despligue(TIPOD dato){
    cout<<"el dato es "<<dato<<endl;
    
    
}
