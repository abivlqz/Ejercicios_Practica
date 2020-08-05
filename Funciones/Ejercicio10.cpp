//
//  Ejercicio10.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 04/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una funcion nombrada calc_años() que tenga un parametro entero que represente el numero total de dias desde la fecha 1/1/2000 y parametros de referencia nombrados año,mes y día. La función es calcular el año, mes y día actual para el numero dado de días que se le transmitan. Para este problema supnga que cada año tiene 365 días y cada mes tiene 30 dias.

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void calc_años(int, int&, int&, int&);
void pedirDatos(int&);

int main(){
    int diasTrans, año = 2000 , mes= 1, dia=1;
    pedirDatos(diasTrans);
    calc_años(diasTrans, año, mes, dia);
    cout<<"Ahora la fecha actual es: "<<endl;
    cout<<dia<<" / "<<mes<<" / "<<año<<endl;
    return 0;
}

void pedirDatos(int& n){
    cout<<"ingrese el numero de días transcurridos desde 1/1/2000"<<endl;
    cin>>n;
    
}

void calc_años(int n, int& año , int& mes , int& dia){
    año += n/365;
    n %= 365;
    mes += n/30;
    dia += n%30;
    
}
