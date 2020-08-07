//
//  Ejercicio4.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, pais, numero_medallas.
//  Y devuelva los datos (Nombre, pais) del atlta que ha ganado el mayor numero de medallas

#include <stdio.h>
#include <iostream>

using namespace std;
//Variable global
int n ;

struct atleta {
    char nombre[30];
    char pais[15];
    int numero_medallas;
}atl[100];

void pedirDatos(){
    
    cout<<"Ingresa el numero de atletas"<<endl;
    cin>>n;
    for (int i = 0; i<n; i++) {
        fflush(stdin);
        cout<<"Ingrese el nombre "<<endl;
        cin.getline(atl[i].nombre, 30);
        cout<<"Ingrese el pais "<<endl;
        cin.getline(atl[i].pais, 15);
        cout<<"Ingrese el num de medallas"<<endl;
        cin>>atl[i].numero_medallas;
    }
    
}
int masMedallas(){
    int mayor = 0;
    for (int i = 1; i<n; i++) {
        if (atl[i].numero_medallas>atl[i-1].numero_medallas) {
            mayor =i;
        }
    }
    return mayor;
}

void mostrarAtleta(int mayor){
    cout<<"El atleta con mas medallas es "<<atl[mayor].nombre<<" del pais "<<atl[mayor].pais<<endl;
}

int main(){
    pedirDatos();
    mostrarAtleta(masMedallas());
   
    
    return 0;
}
