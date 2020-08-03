//
//  Ejercicio7.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 03/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Intercambiar el valor de dos variables utilizando el paso de parametros por referencia

#include <stdio.h>
#include <iostream>
using namespace std;

//Prototipos de funcion
void intercambiar(int&, int&);

int main(){
    int n1= 10;
    int n2 = 15;
    cout<<"el valor de n1 es = "<<n1<<endl;
    cout<<"el valor de n2 es = "<<n2<<endl;
    
    intercambiar(n1, n2);
    cout<<"el nuevo valor de n1 es = "<<n1<<endl;
    cout<<"el nuevo valor de n2 es = "<<n2<<endl;
    
    return 0;
}


void intercambiar(int& num1, int& num2){
    int aux;
    aux = num1;
    num1= num2;
    num2 = aux;
}
