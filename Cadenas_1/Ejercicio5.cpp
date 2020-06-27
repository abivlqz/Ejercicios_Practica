//
//  Ejercicio5.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Funcion strrev() no existe, programa que dice si una palabra es un palindromo

#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

int main(){
                    
    char palabra[]="reconocer";
    
    int lenght= sizeof(palabra)-1;
    char palabraNueva[lenght+1];
    
    bool band = true;
   
   
    for (int i = 0; i<9; i++) {
        
        palabraNueva[8-i]=palabra[i];
        
    }
     
    for (int i = 0; i<9; i++) {
        
        
        if (palabraNueva[i]!=palabra[i]) {
            band = false;
        }
    }
    
    
       
    band==true?cout<<"es un palindromo"<<endl:cout<<"no es un palindromo"<<endl;


    return 0;
}
