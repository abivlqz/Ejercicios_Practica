//
//  Ejercicio5.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Asignación dinamica de arreglos
//  new: reserva el numero de bytes solicitado por la declaracion
//  delete: libera un bloque de bytes reservado con anterioridad
//  Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
//
//
#include <stdio.h>
#include <iostream>
#include <stdlib.h>// Funciona new y delete

using namespace std;
int numCalif,*calif;
void pedirNotas(){
    cout<<"Ingresa el numero de calificaciones "<<endl;
    cin>>numCalif;
    
    calif = new int[numCalif];//Crear arreglo
    for (int i = 0; i<numCalif; i++) {
        cout<<"Ingrese una nota "<<endl;
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"mostrando notas del usuario"<<endl;
    for (int i = 0; i<numCalif; i++) {
        cout<<"La nota es "<<calif[i]<<endl;
    }
    
}




int main(){
    pedirNotas();
    mostrarNotas();
    
    delete[] calif; //liberand el espacio en bytes utulizados en el arreglo dinamico
    return 0;
}
