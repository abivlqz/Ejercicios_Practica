//
//  Ejercicio20.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Realice una funcion recursiva para la serie Fibonacci
//  Nota : la serie fibonacci esta formada por la secuencia de numeros:
//  0,1,1,2,3,5,8,13,21,34...

#include <stdio.h>
#include <iostream>

using namespace std;
//Funcion Fibonacci
int Fibonacci(int n){
    if (n<2) {
        return n;
    }else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
    
    
}

int main(){
    int nElementos;
    do {
        cout<<"Digite el numero de elementos"<<endl;
        cin>>nElementos;
    } while (nElementos<=0);
    
    cout<<"Serie Fibonacci"<<endl;
    for (int i = 0; i<nElementos; i++) {
        cout<<Fibonacci(i)<<" ";
    }
    
    
}
