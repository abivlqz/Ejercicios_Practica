//
//  Ejercicio1.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 14/07/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una funcion llamada mult()que acepte dos numeros en punto
//  flotante con parametros, multiplique estos dos numeros y despliegue el
//  resultado

#include <stdio.h>
#include <iostream>

using namespace std;

// Prototipo de funcion
void pedirDatos();
void mult(float x, float y);

// variables globales
float num1,num2;


int main (){
    
    pedirDatos();
    mult(num1, num2);
    
    
    return 0;
}

//Definicion de funciones

//usa las variables globales
void pedirDatos(){
    cout<<"Digite un numero"<<endl;
    cin>>num1;
    cout<<"Digite otro numero"<<endl;
    cin>>num2;
    
}

void mult(float x, float y){
    float multiplicacion;
    
    multiplicacion= x*y;
    //es el despliegue, porque no es un retorno de valores
    cout<<"La multiplicacion es "<<multiplicacion<<endl;
    
    
}
