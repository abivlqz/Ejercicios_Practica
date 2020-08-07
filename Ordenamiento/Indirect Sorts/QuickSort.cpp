//
//  QuickSort.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  "divide y venceras"

#include <stdio.h>
#include <iostream>

using namespace std;
//funcion
void intercambio(float&x,float&y){
    float aux;
    aux=x;
    x=y;
    y=aux;
    
}



void quickSort(float a[], int primero, int ultimo){
    int i,j,central;
    float pivote;
    
    central = (primero+ultimo)/2;
    pivote = a[central];
    i= primero;
    j=ultimo;
    do {
        while (a[i]<pivote) {
            i++;
        }
        while (a[j]>pivote) {
            j--;
        }
        if (i<=j) {
            intercambio(a[i],a[j]);
            i++;
            j--;
        }
    } while (i<=j);
    if (primero<j) {
        quickSort(a, primero, j);//Ordenamos sublista izquierda
        
    }
    if (ultimo>i) {
        quickSort(a, i, ultimo);//Ordenamos sublista derecha
        
    }
}

int main(){
    float arreglo[]={4,7,1,8,2,10,5,9,3};
    
    quickSort(arreglo, 0, 8);
    
    cout<<"arreglo ordenado de forma ascendente"<<endl;
    for (int i = 0; i<9; i++) {
        cout<<arreglo[i]<<" ";
    }
    cout<<"arreglo ordenado de forma descendente"<<endl;
       for (int i = 8; i>-1; i--) {
           cout<<arreglo[i]<<" ";
       }
    
    return 0;
}
