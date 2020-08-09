//
//  Ejercicio3.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Arrays&Pointers

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int numeros[] = {1,2,3,4,5};
    int *dir_num;
    
    dir_num= numeros;
    //Cada posicion de memoria equivale a 4bytes
    for (int i = 0; i<5; i++) {
        cout<<"Posiciones del memoria "<<numeros[i]<<": "<<dir_num++<<endl;
        
    }
    
    return 0;
}
