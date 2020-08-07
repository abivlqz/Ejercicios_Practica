//
//  Ejercicio1.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos: Nombre, edad, sexo, club, pedir datos del usuario para un solo corredor y asignarle una categoria de competicion:
// -Juvenil <=18años
// -Señor <=40 años
// -Veterano > 40 años
// Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct corredor {
    char nombre[30];
    int edad;
    char sexo[10];
    char club[20];
}c1;

int main(){
    char categoria[20];
    cout<<"Ingrese los datos "<<endl;
    cout<<" Digite el nombre "<<endl;
    cin.getline(c1.nombre, 30);
    cout<<"digite la edad"<<endl;
    cin>>c1.edad;
    fflush(stdin);
    cout<<" Digite el sexo "<<endl;
    cin.getline(c1.sexo, 10);
    cout<<" Digite el club "<<endl;
    cin.getline(c1.club, 20);
    
    if (c1.edad<=18) {
        strcpy(categoria, "Juvenil");
    }else if (c1.edad<=40 &&c1.edad>18){
        strcpy(categoria, "Senor");
    }else{
        strcpy(categoria, "Veterano");
    }
    cout<<"///////"<<endl;
    cout<<"Nombre "<<c1.nombre<<endl;
    cout<<"edad "<<c1.edad<<endl;
    cout<<"sexo "<<c1.sexo<<endl;
    cout<<"club "<<c1.club<<endl;
    cout<<" Categoria "<<categoria<<endl;
    
}
