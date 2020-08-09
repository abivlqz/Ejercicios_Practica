//
//  Ejercicio4.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int numeros[100],*dir_num,menor,n;
    cout<<"Ingrese el numero de elementos de su arreglo "<<endl;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        cout<<"Ingrese el elemento "<<i<<" de su arreglo "<<endl;
        cin>>numeros[i];
    }
    dir_num = numeros;
    menor = *dir_num;
    for (int i = 0 ; i<n; i++) {
        if (*dir_num<menor) {
            menor = *dir_num;
        }
        dir_num++;
    }
    cout<<" el numero menor del arreglo es "<<menor<<endl;
    
    return 0;
}
