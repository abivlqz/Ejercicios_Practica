//
//  Ejercicio17.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Suma de numeros complejos
//  z1 = 5-3i    ,    z2= -4 +2i
//  z1+z2= (5-3i) +(-4+2i)
//       = 1-i

#include <stdio.h>
#include <iostream>

using namespace std;
struct Complejo {
    float real;
    float i;
}z1,z2;

void pedirDatos(){
    cout<<"Digite los datos para el primer numero Complejo"<<endl;
    cout<<"Parte real"<<endl;
    cin>>z1.real;
    cout<<"Parte imaginaria"<<endl;
    cin>>z1.i;
    fflush(stdin);
    cout<<"Digite los datos para el segundo numero Complejo"<<endl;
    cout<<"Parte real"<<endl;
    cin>>z2.real;
    cout<<"Parte imaginaria"<<endl;
    cin>>z2.i;
}

Complejo suma(Complejo z1,Complejo z2){
    z1.real += z2.real;
    z1.i += z2.i;
    return z1;
}

void mostrarDatos(Complejo x){
    cout<<"Resultado de la suma de complejos = "<<endl;
    cout<<"("<<x.real<<")+("<<x.i<<")i"<<endl;
}


int main(){
    
    pedirDatos();
    Complejo x= suma(z1, z2);
    mostrarDatos(x);
    return 0;
}
