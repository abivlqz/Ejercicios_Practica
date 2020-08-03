//
//  Ejercicio4.cpp
//  Pruebas consola
//
//  Created by Aby Velazquez on 03/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba un programa en c++ que devuelva la parte fraccionaria de cualquier numero introducido por el usuario. Por ejemplo, si el usario introduce el numero 256.879, y debe desplegarse 0.879

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void pedirDatos();
float dFraccionar(float n);

//Defincion de funciones globales
float numero;

int main(){
    
    pedirDatos();
    
    cout<<"La parte fraccionaria del numero es = "<<dFraccionar(numero)<<endl;
    
    
    return 0;
}



//Definicion de funciones
void pedirDatos(){
    cout<<"Introduzca un numero"<<endl;
    cin>>numero;
}

float dFraccionar(float n){
    int entero = n;
    
    float resultado = n-entero;
    
    return resultado;
}
