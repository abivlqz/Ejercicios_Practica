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
int exponente= 0;
int numero;

int main(){
    
    PedirDatos();
    funpot(numero, exponente);
    
    
    return 0;
}


// Defincion de funciones
void PedirDatos(){
    cout<<"Ingrese un numero positivo (x) "<<endl;
    cin>>numero;
    while (exponente<1) {
         cout<<"Ingrese la potencia a la cual lo quiere elevar "<<endl;
            cin>>exponente;
    }
}


void funpot(int x, int y){
    
    long resultado; //por si el exponente hace al resultado muy alto
    
    resultado = pow(x, y);
    
    cout<<"el resultado de x^y es "<<resultado<<endl;
    
}
