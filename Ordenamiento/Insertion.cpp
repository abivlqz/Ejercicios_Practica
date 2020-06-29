//
//  Insertion.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 28/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
// Insertion sort
// Requiere de n^2 operaciones para ordenar n elementos
// para ordenar elementos muy aleatorios

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int numeros[]={4,2,3,1,5};
    
    
    int i, pos, temp;
    //algoritmo de ordenamiento por insercion
    for ( i =0; i<5; i++) {
        pos = i;
        temp = numeros[i];
        while ((pos>0)&&(numeros[pos-1]>temp)) {
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos]=temp;
    }
    
    cout<<"Orden ascendente "<<endl;
    for (int k = 0; k<5; k++) {
        cout<<numeros[k]<<" ";
    }
    
    cout<<"Orden descendente "<<endl;
    for (int k = 4; k>=0; k--) {
        cout<<numeros[k]<<" ";
    }
    
    
    return 0;
}
