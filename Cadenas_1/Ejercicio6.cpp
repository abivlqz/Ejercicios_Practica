//
//  Ejercicio6.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 27/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
// Programa que le dice al usuario cuantas vocales hay en la palabra que escribio

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    
    char cad[30];
    char vocales[]="aeiou";
    
    int aContadores[] = {0,0,0,0,0};
    
    cout<<"Digita una palabra"<<endl;
    cin.getline(cad, 30);
    cout<<sizeof(cad)<<endl;
    for (int i = 0; i<sizeof(cad); i++) {
        if (cad[i]=='a') {
            aContadores[0]++;
        }
        else if (cad[i]=='e') {
            aContadores[1]++;
        }
        else if (cad[i]=='i') {
            aContadores[2]++;
        }
        else if (cad[i]=='o') {
            aContadores[3]++;
        }
        else if (cad[i]=='u') {
            aContadores[4]++;
        }
    }
    
    
    for (int i = 0; i<5; i++) {
        cout<<"Numero de Ocurrencias de la vocal "<<vocales[i]<< " = "<<aContadores[i]<<endl;
    }
    
    
    
    
    return 0;
}
