//
//  Ejercicio5.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

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
}alumno1;

void pedirDatos(){
    cout<<"Ingrese el nombre del alumno"<<endl;
    cin.getline(alumno1.nombre, 30);
    cout<<"Ingrese el genero del alumno"<<endl;
    cin.getline(alumno1.sexo, 10);
    cout<<"Ingrese la edad del alumno"<<endl;
    cin>>alumno1.edad;
    cout<<"Ingrese la nota 1 del alumno"<<endl;
    cin>>alumno1.promedio_alumno.nota1;
    cout<<"Ingrese la nota 2 del alumno"<<endl;
    cin>>alumno1.promedio_alumno.nota2;
    cout<<"Ingrese la nota 3 del alumno"<<endl;
    cin>>alumno1.promedio_alumno.nota3;
    
}

float calcularPromedio(){
    float promedio = (alumno1.promedio_alumno.nota1 + alumno1.promedio_alumno.nota2+alumno1.promedio_alumno.nota3)/3;
  return promedio;
}

void mostrarDatos(){
    cout<<"El nombre es "<<alumno1.nombre<<endl;
    cout<<"El genero es "<<alumno1.sexo<<endl;
    cout<<"La edad es "<<alumno1.edad<<endl;
    cout<<"El promedio del alumno es "<<calcularPromedio()<<endl;
}

int main(){
    pedirDatos();
    mostrarDatos();
    
    
}
