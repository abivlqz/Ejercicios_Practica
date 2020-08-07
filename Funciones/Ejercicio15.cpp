//
//  Ejercicio15.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Desarrollar una funcion que determine si una matriz es simetrica o no, una matriz es simetrica si A = A^t

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void pedirDatos();
void comprobarSimetria(int m[][100],int,int);


//Variables globales
int m[100][100],nfilas, ncol;

int main(){
    pedirDatos();
    comprobarSimetria(m, nfilas, ncol);
    
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de filas de su matriz"<<endl;
    cin>>nfilas;
    cout<<"Ingrese el numero de columnas de su matriz"<<endl;
    cin>>ncol;
   
    for (int i = 0; i<nfilas; i++) {
        for (int j = 0; j<ncol; j++) {
            cout<<"Digite el numero de la posicion ["<<i<<"],["<<j<<"] de su matriz"<<endl;
            cin>>m[i][j];
        }
    }
}


void comprobarSimetria(int m[][100],int nfilas,int ncol){
    bool simetria = true;
    if (nfilas==ncol){
        for (int i =0; i<nfilas; i++) {
                for (int j = 0; j<ncol; j++) {
                    if (m[i][j]!=m[j][i]) {
                        simetria = false;
                    }
                }
            }
            
    }else{simetria = false;}
    if (simetria==true) {
        cout<<"La matriz es simetrica"<<endl;
        
    }else{cout<<"La matriz no es simetrica"<<endl;
        
    }
    
}

   
