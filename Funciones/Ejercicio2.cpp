//
//  Ejercicio2.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 14/07/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. La función deberá de ser capaz de elevar al cuadrado numeros flotantes.

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

// Prototipos de función

void PedirDatos();
void al_cuadrado(float x);

// Variables globales
float num1;

int main(){
    
    PedirDatos();
    al_cuadrado(num1);
    
    
    return 0;
}

// Defincion de funciones
void PedirDatos(){
    cout<<"Digite el numero que quiere elevar al cuadrado"<<endl;
    cin>>num1;
}

void al_cuadrado(float x){
    float elevado;
    elevado = pow(x, 2);
    cout<<"El numero elevado al cuadrado es "<<elevado<<endl;
}
