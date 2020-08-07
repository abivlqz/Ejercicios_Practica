//
//  Binaria.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Busqueda Binaria

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int numero[]={1,2,3,4,5};
    int inferior, superior, mitad = 0, dato;
    bool existencia= false;
    
    dato=2;
    
    //Algoritmo de la busqueda binaria
    inferior = 0;
    superior = 5;
    
    while (inferior<=superior) {
        mitad = (inferior+superior)/2;
        if (numero[mitad] ==dato) {
            existencia = true;
            break;
        }
        if (numero[mitad]>dato) {
            superior=mitad;
            mitad = (inferior+superior)/2;
        }
        if (numero[mitad]<dato) {
            inferior = mitad;
            mitad =(inferior+superior)/2;
        }
    }
    if (existencia==true) {
        cout<<"El numero ha sido encontrado en la posicion "<<mitad<<endl;
    }else{
        cout<<"El numero NO ha sido encontrado en la posicion "<<endl;
    }
    
    
    return 0;
}

