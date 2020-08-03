//
//  Ejercicio6.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 03/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se transmiten a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos.

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de función
template<class T>
T maximo(T d1, T d2, T d3);


int main(){
    
    char d1='o';
    char d2 = 'b';
    char d3 = 'c';
    
    cout<<"el maximo valor es : "<<maximo(d1, d2, d3)<<endl;
    return 0;
}


template<class T>
T maximo(T d1, T d2, T d3){
    T max;
    if (d1>=d2 & d1>=d3) {
        max = d1;
    }else if (d2>=d1 & d2>=d3){
        max = d2;
        
    }else{
        max = d3;
    }
    return max;
    
}
