//
//  Burbuja.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 28/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (){
    
    int array[]={3,3,5,1,2};
    
    int i,j,aux;
    //algoritmo del metodo burbuja
    for (i = 0; i <4; i++) {
        for (j=0; j<(4-i); j++) {
            if (array[j]>array[j+1]) {
                aux = array[j];
                array[j]= array[j+1];
                array[j+1]=aux;
            }
        }
    }
    cout<<"orden ascendente"<<endl;
    for (int k = 0; k<5; k++) {
        cout<<array[k]<<" ";
    }
    cout<<endl;
    cout<<"orden descendente"<<endl;
    for (int k = 4; k>=0; k--) {
        cout<<array[k]<<" ";
    }
    
    return 0;
}
