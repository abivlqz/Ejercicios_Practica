//
//  Ejercicio1.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Comprobar si un numero es par o impar, y señalar la posición de memoria donde se esta guardando el numero. Con punteros

#include <stdio.h>
#include <iostream>

using namespace std;




int main(){
    
    int numero,*dir_num;
    
    cout<<"Digite un numero"<<endl;
    cin>>numero;
    
    dir_num = &numero;//Guardando la posicion de memoria de numero dentro del puntero
    
    if (*dir_num%2==0) {
        cout<<"El numero es par"<<endl;
        cout<<"La posicion de memoria es "<<dir_num<<endl;
    }else{
         cout<<"El numero es impar"<<endl;
         cout<<"La posicion de memoria es "<<dir_num<<endl;
    }
    
    return 0;
}
