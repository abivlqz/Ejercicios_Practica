//
//  Shell.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 29/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
// Shell Insertion: mejora del ordenamiento por inserción
// metodo de insercion con incrementos decrecientes

#include <stdio.h>
#include <iostream>

using namespace std;
//funcion
void intercambio(float &x, float&y){
    float aux;
    aux = x;
    x=y;
    y=aux;
}


void ordenacionShell(float a[],int n){
    int salto,i,j,k;
    salto = n/2;
    
    while (salto>0) {
        for (i=salto; i<n; i++) {
            j = i-salto;
            while (j>=0) {
                k = j+salto;
                if (a[j]<=a[k]){//Par de elementos estan ordenados
                    j = -1;
                }else{//Par de elementos estan desordenados
                    intercambio(a[j],a[k]);
                    j -= salto;
                }
            }
        }
        salto= salto/2;
    }
    
    
}

int main(){
    float arreglo[]={4,6,1,9,5,10,2,11,19,7};
    ordenacionShell(arreglo, 10);
    
    cout<<"////////////"<<endl;
    cout<<"Arreglo ordenado creciente"<<endl;
    for (int i =0; i<10; i++) {
        cout<<arreglo[i]<<" ";
        
    }
    cout<<"Arreglo ordenado decreciente"<<endl;
    for (int i =9; i>-1; i--) {
        cout<<arreglo[i]<<" ";
        
    }
    return 0;
}
