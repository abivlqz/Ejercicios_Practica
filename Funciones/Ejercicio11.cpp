//
//  Ejercicio11.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 05/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Ejercicio 11 Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos.

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion

void pedirDatos();
int calc_suma(int vec[], int);
//Variables globales
int vec[100],tam;

int main(){
    
    pedirDatos();
    cout<<"la suma total de elementos de tu arreglo es de "<<calc_suma(vec, tam)<<endl;
    
    
    
    return 0;
}

void pedirDatos(){
    cout<<"Digita el numero de elementos del vector"<<endl;
    cin>>tam;
    for (int i = 0; i<tam; i++) {
        cout<<"Ingresa el elemento "<<i+1<<endl;
        cin>>vec[i];
    }
    
}

int calc_suma(int vec[], int tam){
    int suma=0;
    
    for (int i =0; i<tam; i++) {
        suma+=vec[i];
    }
    return suma;
    
}
