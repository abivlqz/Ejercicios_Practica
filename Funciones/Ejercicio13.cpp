//
//  Ejercicio13.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realice una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector.

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarDatos(int vec[],int);

//Variables globales
int vec[100],tam;

int main(){
    
    pedirDatos();
    cambiarSigno(vec, tam);
    cout<<"///////////////////"<<endl;
    mostrarDatos(vec,tam);
    
    
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el tamaño del arreglo"<<endl;
    cin>>tam;
    for (int i = 0 ; i<tam; i++) {
        cout<<"Ingrese el elemento "<<i<<" de tu arreglo"<<endl;
        cin>>vec[i];
    }
   
}


void cambiarSigno(int vec[], int n){
    for (int i = 0; i<tam; i++) {
        vec[i]*=-1;
    }
    
}

void mostrarDatos(int vec[],int n){
    for (int i = 0; i<n; i++) {
        cout<<vec[i]<<" "<<endl;
    }
    
}
