//
//  Parametros de vector.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 05/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//   void nombredeFuncion (tipo NombreArreglo[], int tamañoArreglo)

#include <stdio.h>
#include <iostream>

using namespace std;

//Prototipos de funcion
void cuadrado(int vec[], int);
void mostrarDatos(int vec[], int);
int main(){
    const int TAM =5;
    int vec[TAM]= {1,2,3,4,5};
    cuadrado(vec, TAM);
    mostrarDatos(vec, TAM);
    
    
    return 0;
}

void cuadrado(int vec[], int tam){
    for (int i =0; i<tam; i++) {
        vec[i]*= vec[i];
    }
}

void mostrarDatos(int vec[], int tam){
    for (int i =0; i<tam; i++) {
        cout<<vec[i]<<" ";
    }
}
    

