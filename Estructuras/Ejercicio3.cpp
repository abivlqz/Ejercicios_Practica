//
//  Ejercicio3.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realizar un programa que lea un arreglo de estructuras, los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario.

#include <stdio.h>
#include <iostream>
using namespace std;

struct empleado {
    char nombre[30];
    float salario;
}emp[100];


int main(){
    int n, mayor = 0, menor = 0;
    cout<<"Ingrese el numero de empleados de la empresa"<<endl;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        fflush(stdin);
        cout<<"Ingrese el nombre del empleado "<<i<<endl;
        cin.getline(emp[i].nombre, 30);
        cout<<"Ingrese el salario del empleado "<<i<<endl;
        cin>>emp[i].salario;
    }
    
    for (int i = 1 ; i<n; i++) {
        if (emp[i].salario>=emp[i-1].salario) {
            mayor=i;
        }
        if (emp[i].salario<=emp[i-1].salario) {
            menor=i;
        }
    }
    
    cout<<"////////"<<endl;
    cout<<"El usuario con mayor salario es "<<endl;
    cout<<emp[mayor].nombre<<" con un salario de "<<emp[mayor].salario<<endl;
    cout<<"El usuario con menor salario es "<<endl;
    cout<<emp[menor].nombre<<" con un salario de "<<emp[menor].salario<<endl;
    
    return 0;
}
