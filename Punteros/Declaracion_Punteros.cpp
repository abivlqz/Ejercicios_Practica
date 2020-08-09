//
//  Declaracion_Punteros.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Declaracion de punteros
// &n= la direccion de n
// *n= la variable cuya direccion esta almacenada en n;

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int num,*dir_num;
    
    num =20;
    dir_num = &num;
    cout<<"Numero: "<<*dir_num<<endl;
    cout<<"Direccion de memoria "<<dir_num<<endl;
    
    
    
    return 0;
}
