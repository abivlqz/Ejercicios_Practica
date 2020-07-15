//
//  Funciones1.cpp
//  Pruebas consola
//
//  Created by Aby Velazquez on 14/07/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realiza una sola tarea concreta, puede ser diseñada, implementada y depurada de manera independiente del resto del codigo
// si tenemos una funcion de tipo flotante, regresa un float, si es una funcion de tipo void, no regresa nada

    // ejemplo encontrar el mayor de 2 numeros
#include <stdio.h>
#include <iostream>

using namespace std;

//prototipo de funcion

int encontrarMaximo(int x, int y);

int main(){
    
    int n1, n2;

    
    cout<<"digite dos numeros"<<endl;
    cin>>n1>>n2;
    
     encontrarMaximo(n1, n2);// int =5 por ejemplo
    
    cout<<"El mayor de los dos numeros es:"<<encontrarMaximo(n1, n2)<<endl;
    
    return 0;
}


//definicion de funcion

int encontrarMaximo(int x, int y){
    
    int numMax=0;
    if (x>y) {
        numMax=x;
    }else{numMax=y; }
    
    return numMax;
}
