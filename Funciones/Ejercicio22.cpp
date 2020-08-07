//
//  Ejercicio22.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int escribeNumeros(int ini, int fin){
    if (ini==fin) {
        return ini;
    }else{
        return escribeNumeros(ini, fin-1);
    }
}


int main(){
    int ini, fin;
    cout<<"Ingresa ini"<<endl;
    cin>>ini;
    cout<<"ingresa fin"<<endl;
    cin>>fin;
    for (int i = ini; i<=fin; i++) {
        cout<<escribeNumeros(i, fin)<<" ";
    }
    
    
    
    
    return 0;
}
