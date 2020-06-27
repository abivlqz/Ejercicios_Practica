//
//  Ejercicio3.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
// Funcion strcomp() compara cadenas de caracteres y para buscar la mayor
// alfabeticamente

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
    
    char palabra1[]="avion";
    char palabra2[]="becerro";
    //avion- becerro(cual es mayor alfabeticamente
    if (strcmp(palabra1, palabra2)<0) {
        cout<<palabra2<<" esta despues alfabeticamente"<<endl;
    }else{
         cout<<"Ambas cadenas son diferentes"<<endl;
    }
    
//    char palabra1[]="hola";
//    char palabra2[]="hola";
//
//    if (strcmp(palabra1, palabra2)==0) {
//        cout<<" Ambas cadenas son iguales"<<endl;
//    }else{
//         cout<<"Ambas cadenas son diferentes"<<endl;
//    }
    
    return 0;
}
