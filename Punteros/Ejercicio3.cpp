//
//  Ejercicio3.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Rellenar un array de 10 numeros, posteriormente utilizando punteros, indicar cuales son numeros pares y su posicion de memoria

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int numeros[10],*dir_num;
    
    
    for (int i = 0; i<10; i++) {
        cout<<"ingrese el elemento "<<i<<endl;
        cin>>numeros[i];
    }
    dir_num = numeros;//Posicion de memoria comienza numeros
    for (int i = 0; i<10; i++) {
        if (*dir_num%2==0) {
            cout<<"El numero "<<*dir_num<<" es par y su posicion de memoria es  "<<dir_num<<endl;
           
        }
         dir_num++;
        
    }
   
    return 0;
}
