//
//  Ejercicio14.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realiza una funcion que toma como parametros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido.

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void pedirDatos();
void datosImpares(int vec[],int);
void mostrarDatos(int vec[],int);

//Variables globales
int vec[100], vecImpar[100], tam, j=0;

int main(){
    pedirDatos();
    datosImpares(vec, tam);
    mostrarDatos(vecImpar, j);
    
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el tamaño del arreglo"<<endl;
    cin>>tam;
    for (int i = 0; i<tam; i++) {
        cout<<" ingrese el elemento "<<i<<" de su arreglo"<<endl;
        cin>>vec[i];
    }
    
}

void datosImpares(int vec[],int n){
    
    for (int i = 0; i<n; i++) {
        if (vec[i]%2!=0) {
            vecImpar[j]= vec[i];
            j++;
        }
    }
    
}

void mostrarDatos(int vec[],int n){
    for (int i = 0; i<n; i++) {
        cout<<vec[i]<<" ";
    }
}
