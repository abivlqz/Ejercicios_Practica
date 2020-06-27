//
//  Ejercicio1.cpp
//  Pruebas consola
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    
    char palabra[30]=" ";
    
    
    cout<<"Digita una cadena de caracteres"<<endl;
    cin.getline(palabra, 30);
    
    
    if (strlen(palabra)>10) {
        cout<<"Esta palabra tiene mas de 10 caracteres "<<palabra<<endl;
    }
    
    return 0;
}
