//
//  Recursividad.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Funcion que se llama asi misma
//  Factorial de un numero 3!=3*2*1
//                           = 3*2!
//     0!= 1
//      factorial(n) = 1               , si n=0
//                     n*factorial(n-1), si n>0
#include <stdio.h>
#include <iostream>

using namespace std;
int factorial(int);



int factorial(int n){
    if (n==0) {//Caso base
        n=1;
    } else {//Caso general
        n = n*factorial(n-1);
    }
    
    return n;
}

int main(){
    int n;
    cout<<"Ingrese el numero que quieres del factorial"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
