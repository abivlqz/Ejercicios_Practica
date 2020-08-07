//
//  Ejercicio8.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
int n;
int j = 0;
int k = 0;
struct persona {
    char nombre[30];
    bool discapacidad;
    
}personas[100], perSinD[100],perConD[100];
// perSinD = personas sin discapacidad
// perConD = personas con discapacidad

void pedirDatos(){
    cout<<"Ingrese el numero de personas "<<endl;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        fflush(stdin);
        cout<<"Ingrese el nombre"<<i<<endl;
        cin.getline(personas[i].nombre, 30);
        cout<<"Tiene discapacidad?"<<endl;
        cin>>personas[i].discapacidad;
        
    }
    
}

void clasificarPersonasD(){
   
    for (int i = 0; i<n; i++) {
        if (personas[i].discapacidad==true) {
            strcpy(perConD[j].nombre, personas[i].nombre);
            perConD[j].discapacidad = personas[i].discapacidad;
            j++;
        }
        if (personas[i].discapacidad==false) {
            strcpy(perSinD[k].nombre, personas[i].nombre);
            perSinD[k].discapacidad = personas[i].discapacidad;
            k++;
        }
    }
    
}

void mostrarPerSinD(){
     cout<<"Personas sin discapacidad"<<endl;
    for (int i=0; i<k; i++) {
       
        cout<<perSinD[i].nombre<<endl;
    }

}

void mostrarPerConD(){
     cout<<"Personas con discapacidad"<<endl;
    for (int i=0; i<j; i++) {
        cout<<perConD[i].nombre<<endl;
    }
}
int main(){
    pedirDatos();
    clasificarPersonasD();
    
    mostrarPerSinD();
    mostrarPerConD();
    
}
