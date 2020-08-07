//
//  Arreglo.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Busqueda Secuencial
//  a[5] = {1,2,3,4,5}; dato =4;
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char a[] = {'a','e','i','o','u'};
    int i, dato;
    bool existencia = false;
    
    //Busqueda Secuencial
    i=0;
    dato='p';
    while ((existencia==false)&&(i<5)){
        if (a[i]==dato) {
            existencia=true;
        }
         i++;
    }
    
    if (existencia==false) {
        cout<<"Dato no ha sido encontrado en el arreglo"<<endl;
    
    }else{ cout<<"El numero ha sido encontrado en la posicion del arreglo "<<i-1<<endl;
        
    }
    
    
    return 0;
}
