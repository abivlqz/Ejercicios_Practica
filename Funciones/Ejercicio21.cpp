//
//  Ejercicio21.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
// x^y

#include <stdio.h>
#include <iostream>

using namespace std;

int potencia(int x, int y){
    int pot=0;
    if (y==1) {
        pot= x;
    }else if (y>1){
        
        pot= (x*potencia(x, y-1));
    }
    return pot;
    
}

int main(){
    int x,y;
    do {
        cout<<"Escribe x ="<<endl;
        cin>>x;
        cout<<"Escribe exponente"<<endl;
        cin>>y;
    } while ((x<=0) &&(y<=0));
    
    cout<<"La potencia es "<<endl;
    cout<<potencia(x, y)<<endl;
    
}

