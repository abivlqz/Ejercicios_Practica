//
//  Ejercicio6.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  

#include <stdio.h>
#include <iostream>

using namespace std;
int n;

float Promedios[100];

struct promedio {
    float nota1;
    float nota2;
    float nota3;
    
};

struct alumno {
    char nombre[30];
    char sexo[10];
    int edad;
    struct promedio promedio_alumno;
}alumno[100];

void pedirDatos(){
    
    cout<<"Cuantos alumnos deseas ingresar al sistema"<<endl;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        fflush(stdin);
        cout<<"Ingrese el nombre del alumno"<<endl;
        cin.getline(alumno[i].nombre, 30);
        cout<<"Ingrese el genero del alumno"<<endl;
        cin.getline(alumno[i].sexo, 10);
        cout<<"Ingrese la edad del alumno"<<endl;
        cin>>alumno[i].edad;
        cout<<"Ingrese la nota 1 del alumno"<<endl;
        cin>>alumno[i].promedio_alumno.nota1;
        cout<<"Ingrese la nota 2 del alumno"<<endl;
        cin>>alumno[i].promedio_alumno.nota2;
        cout<<"Ingrese la nota 3 del alumno"<<endl;
        cin>>alumno[i].promedio_alumno.nota3;
        
    }
   
    
}


void calcularPromedio(struct alumno[]){
    
    for (int i =0; i<n; i++) {
        Promedios[i] = (alumno[i].promedio_alumno.nota1 + alumno[i].promedio_alumno.nota2+alumno[i].promedio_alumno.nota3)/3;
    }
    
  
}
int mejorPromedio(float promedios[],int n1){
    n1=n;
    
    int lugar=0;
    int mayor =promedios[0];
    for ( int i = 0; i<n1; i++) {
        if (promedios[i]>=mayor) {
            mayor = promedios[i];
            lugar = i;
        }
    }
    return lugar;
    
}

void mostrarDatos(int mayor){
    cout<<"El nombre del alumno con mejor promedio es "<<alumno[mayor].nombre<<endl;
    cout<<"El genero es "<<alumno[mayor].sexo<<endl;
    cout<<"La edad es "<<alumno[mayor].edad<<endl;
    cout<<"El promedio del alumno es "<<Promedios[mayor]<<endl;
    
}




int main(){
    
    pedirDatos();
    calcularPromedio(alumno);
    mostrarDatos( mejorPromedio(Promedios, n));
    
    
}
