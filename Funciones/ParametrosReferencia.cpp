//
//  Ejercicio7.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 03/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Paso de parametros por referencia, no el valor pero la direccion de memoria donde esta dicho valor

#include <stdio.h>
#include <iostream>


using namespace std;

//Prototipos de funcion

void valNuevo(int&, int&);
int main(){
    int num1,num2;
    cout<<"Digite 2 numeros:"<<endl;
    cin>>num1>>num2;
    
    valNuevo(num1,num2);
    cout<<"el nuevo valor del primer numero es "<<num1<<endl;
    cout<<" el nuevo valor del segundo numero es "<<num2<<endl;
    
    return 0;
}

void valNuevo(int& xnum, int& ynum){
    cout<<"el valor del primer numero es "<<xnum<<endl;
    cout<<" el valor del segundo numero es "<<ynum<<endl;
    xnum = 89;
    ynum= 46;
    
}

