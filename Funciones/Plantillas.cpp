//
//  Plantillas.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 14/07/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//   Plantillas de funcion, sacar el absoluto de un numero
//  Hacer un tipo de dato general
#include <stdio.h>
#include <iostream>

using namespace std;

// Prototipo de funcion
template<class TIPOD>//prefijo de la plantilla, float, int, double
void mostrarAbs(TIPOD numero);

int main(){
    
     int num1= -3;
    float num2= -3.14;
    double num3= -56.39503;
    
    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
    
    
    return 0;
}

template<class TIPOD>//la funcion de abajo va a usar un tipo de dato tipod
void mostrarAbs(TIPOD numero){
    if (numero<0) {
        numero*=-1;
    }
    cout<<"el valor absoluto del numero es: "<<numero<<endl;
}
