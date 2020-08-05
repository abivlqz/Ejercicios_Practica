//
//  Ejercicio9.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 04/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Ejercicio 9, escriba una funcion llamada tiempo(), que tenga un parametro de numero entero llamado totalSeg y tres parametros de referencia enteros nombrados horas, min y seg. La función es convertir el numero de segundos transmitidos en un numero equivalente a hrs, minutos y segundos.

#include <stdio.h>
#include <iostream>
using namespace std;

//Prototipos de función
void pedirDatos(int&);
void tiempo(int, int&,int&,int&);

int main(){
    int totalSeg=0, horas, min, seg;
    
    pedirDatos(totalSeg);
    tiempo(totalSeg, horas, min, seg);
    cout<<"Cantidad de tiempo transcurrido "<<endl;
    cout<<"horas :"<<horas<<endl;
    cout<<"minutos :"<<min<<endl;
    cout<<"segundos :"<<seg<<endl;
    
    return 0;
}
void pedirDatos(int& TotalSegundos){
    cout<<"ingrese el numero total de segundos transcurridos : " <<endl;
    cin>> TotalSegundos;
    
}

void tiempo(int totalSeg, int& horas ,int& min,int& seg){
    horas = totalSeg/3600;
    totalSeg %=3600;
    min = totalSeg/60;
    seg = totalSeg%60;
    
}
