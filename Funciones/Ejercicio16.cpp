//
//  Ejercicio16.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realice una funcion que dada una matriz y un numero de fila de la matriz, devuelva el menor de los elementos almacenados en dicha fila

#include <stdio.h>
#include <iostream>

using namespace std;

//Prototipos de funcion
void pedirDatos();
int encontrarMenor(int m[][100],int, int);

//Variables globales
int m[100][100], nfilas, ncolumnas, numFila;

int main(){
    pedirDatos();
    cout<<"el numero menor de la fila "<<numFila<<" es = ";
    cout<<encontrarMenor(m, ncolumnas, numFila)<<endl;
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de filas de su matriz"<<endl;
    cin>>nfilas;
    cout<<"Ingrese el numero de columnas de su matriz"<<endl;
    cin>>ncolumnas;
    for (int i=0; i<nfilas; i++) {
        for (int j =0; j<ncolumnas; j++) {
            cout<<"Ingrese el numero en la posicion ["<<i<<"],["<<j<<"]"<<endl;
            cin>>m[i][j];
        }
    }
    
    cout<<"ingrese un numero de fila de esta matriz para encontrar el menor"<<endl;
    cin>>numFila;
    
}

int encontrarMenor(int m[][100],int col, int numFila){
    numFila+=-1;
    int menor = m[numFila][0];
    for (int i = 0; i<col; i++) {
        if (m[numFila][i]<=menor) {
            menor=m[numFila][i];
        }
    }
    return menor;
    
}
