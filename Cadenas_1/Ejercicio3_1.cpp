//
//  Ejercicio3_1.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 26/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    char palabra1[30];
    char palabra2[30];
    
    cout<<"Ingrese una palabra"<<endl;
    cin.getline(palabra1, 30);
    cout<<"Ingrese otra palabra"<<endl;
    cin.getline(palabra2, 30);
    
    
    if (strcmp(palabra1, palabra2)==0) {
        cout<<"Las palabras son iguales"<<endl;
    }else if (strcmp(palabra1, palabra2)>0){
        cout<<palabra1<<" es mayor alfabeticamente"<<endl;
        
    }else{
        cout<<palabra2<<" es mayor alfabeticamente"<<endl;
    }
    
    return 0;
}
