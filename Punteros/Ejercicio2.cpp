//
//  Ejercicio2.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Determinar si un numero es primo o no; con punteros y además indicar que posicion de memoria se guardo el numero.

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int numero, *dir_num,cont=0;
    dir_num = &numero;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    for (int i = 1; i<*dir_num; i++) {
        if (*dir_num%i==0) {
            cont++;
        }
    }
    
    if (cont>2) {
        cout<<"El numero no es primo"<<endl;
        cout<<"La posicion de memoria donde esta guardada el numero "<<dir_num<<endl;
    }else{
        cout<<"El numero ES primo"<<endl;
        cout<<"La posicion de memoria donde esta guardada el numero "<<dir_num<<endl;
    }
    
    return 0;
}
