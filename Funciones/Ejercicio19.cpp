//
//  Ejercicio19.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realice una funcion recursiva que sume los primeros n enteros positivos Nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrencia:
//      suma (n) = 1           , si n=1
//                n+suma(n-1)  , si n>1

#include <stdio.h>
#include <iostream>

using namespace std;

int sumaNumeros(int n){
    
    if (n==1) {
        n=1;
    } else if (n>1){
        n+=sumaNumeros(n-1);
    }
    return n;
}

int main(){
    int n=0;
    do {
         cout<<"Digite un numero "<<endl;
           cin>>n;
           cout<<sumaNumeros(n)<<endl;
    } while (n<=0);
   
    
}
