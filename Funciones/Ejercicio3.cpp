//
//  Ejercicio3.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 14/07/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una funcion llamada funpot() que eleve un numero entero que se le transmita a una potencia en un numero entero positivo y despliegue el resultado.
//    El numero entero positivo deberá ser el segundo valor transmitido a la funcion.

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

//Prototipos de funcion
void PedirDatos();
void funpot(int x, int y);

// Variables globales
int num1;
int num2= 0;

int main(){
    
    PedirDatos();
    funpot(num1, num2);
    
    
    return 0;
}


// Defincion de funciones
void PedirDatos(){
    cout<<"Ingrese una potencia (y)"<<endl;
    cin>>num1;
    while (num2<1) {
         cout<<"Ingrese un numero positivo (x) "<<endl;
            cin>>num2;
    }
}


void funpot(int x, int y){
    
    int resultado;
    
    resultado = pow(y, x);
    
    cout<<"el resultado de x^y es "<<resultado<<endl;
    
}
