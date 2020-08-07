//
//  Ejercicio2.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: nombre, edad, promedio
//  Pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno

#include <stdio.h>
#include <iostream>

using namespace std;

struct alumno {
    char nombre[30];
    int edad;
    float promedio;
}alumno[3];

void pedirDatos(){
    for (int i = 0; i<3; i++) {
        fflush(stdin);
        cout<<"Ingresa el nombre del alumno "<<i<<endl;
        cin.getline(alumno[i].nombre, 30);
        cout<<"Ingresa la edad del alumno "<<i<<endl;
        cin>>alumno[i].edad;
        cout<<"Ingresa el promedio del alumno "<<i<<endl;
        cin>>alumno[i].promedio;
    }
    
}

int comprobarPromedios(){
    int mayor = 0;
    for (int i = 1; i<3; i++) {
        if (alumno[i].promedio>=alumno[i-1].promedio) {
            mayor=i;
        }
    }
    return mayor;
}

void mostrarMejor(int m){
    cout<<"/////"<<endl;
    cout<<"Mejor promedio "<<endl;
    cout<<" Nombre: "<<alumno[m].nombre<<endl;
    cout<<" Edad: "<<alumno[m].edad<<endl;
    cout<<" Promedio: "<<alumno[m].promedio<<endl;
}

int main(){
    pedirDatos();
    int mayor1 = comprobarPromedios();
    mostrarMejor(mayor1);
    
    return 0;
}
