//
//  Ejercicio12.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 05/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector esta ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual al elemento que le procede en el vector

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void pedirDatos();

bool comprobarOrdenado(int vec[], int);
//Variables globales
int vec[100],tam;
int main(){
    
    pedirDatos();
    if (comprobarOrdenado(vec, tam)==true) {
        cout<<"El arreglo esta ordenado"<<endl;
    }else{
        cout<<"El arreglo esta desordenado"<<endl;
    }
   
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el tamaño de su arreglo"<<endl;
    cin>>tam;
    for (int i = 0; i<tam; i++) {
        cout<<"ingrese el elemento "<<i<<" de su arreglo"<<endl;
        cin>>vec[i];
    }
    
}

bool comprobarOrdenado(int vec[], int n){
    bool ordenado = true;
    for (int i = 1; i<n; i++) {
        if (vec[i-1]>vec[i]) {
            ordenado = false;
        }
    }
    return ordenado;
}

