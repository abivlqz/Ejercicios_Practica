//
//  Selection.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 28/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Selection es de on^2 , para arreglar n elementos

#include <stdio.h>
#include <iostream>

using namespace std;

int main (){
    int numeros[]={3,2,1,5,4};
    
    int i,j,temp,min;
    //algoritmo de Insertion Sort
    for (i=0; i<5; i++) {
        min=i;
        for (j=(i+1); j<5; j++) {
            if (numeros[j]<numeros[min]) {
                min=j;
            }
        }
        temp= numeros[i];
        numeros[i]= numeros[min];
        numeros[min]= temp;
    }
    
    cout<<"Orden ascendiente"<<endl;
    for (int k = 0; k<5; k++) {
        cout<<numeros[k]<<" ";
    }
    cout<<endl;
    cout<<"Orden descendiente"<<endl;
    for (int k = 4; k>=0; k--) {
        cout<<numeros[k]<<" ";
    }
    
    return 0;
}
