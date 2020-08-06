//
//  Paso de parametros tipo matriz.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Elevar al cuadrado todos los elementos de una matriz

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void mostrarMatriz(int m[][3], int, int);
void elevarCuadrados(int m[][3], int, int);


int main(){
    const int NFILAS = 2;
    const int NCOL =3;
    
    int m[NFILAS][NCOL] = {{1,2,3},{4,5,6}};
    
    elevarCuadrados(m, NFILAS, NCOL);
    mostrarMatriz(m, NFILAS, NCOL);
}

void mostrarMatriz(int m[][3], int nfilas , int ncolumnas){
    for (int i = 0; i<nfilas; i++) {
        for (int j = 0; j<ncolumnas; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
}

void elevarCuadrados(int m[][3], int nfilas , int ncolumnas){
    
    for (int i = 0; i<nfilas; i++) {
        for (int j = 0; j<ncolumnas; j++) {
            m[i][j]*=m[i][j];
        }
        
    }
    
    
}
