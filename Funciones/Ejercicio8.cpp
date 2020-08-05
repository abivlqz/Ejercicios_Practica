//
//  Ejercicio8.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 03/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//  Escriba una función nombrada cambio() quw tenga un parametro en numero entero y seis parametros de referencia en numero entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La función tiene que considerar el valor entero trasmitido como una cantidad en dlls y convertir el valor en el numero menor de billetes equivalentes.

#include <stdio.h>
#include <iostream>

using namespace std;
//Prototipos de funcion
void pedirDatos(int& v);
void cambio(int, int&, int&,int&, int&,int&, int&);

int main(){
    int valor=0, cien, cincuenta, veinte, diez, cinco, uno;
    pedirDatos(valor);
    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
    
    cout<<"Cantidad de billetes a entregar como cambio "<<endl;
    cout<<"cien :"<<cien<<endl;
    cout<<"cincuenta :"<<cincuenta<<endl;
    cout<<"veinte :"<<veinte<<endl;
    cout<<"diez :"<<diez<<endl;
    cout<<"cinco :"<<cinco<<endl;
    cout<<"uno :"<<uno<<endl;
    
    return 0;
}

void cambio(int valor, int& cien, int& cincuenta ,int& veinte , int& diez ,int& cinco, int& uno){
    
    cien = valor/100;
    valor %= 100;
    cincuenta = valor/50;
    valor %= 50;
    veinte = valor/20;
    valor %= 20;
    diez = valor/10;
    valor %= 10;
    cinco = valor/5;
    uno = valor%5;
    
}

void pedirDatos(int& valor){
    cout<<"ingrese su cantidad en dlls "<<endl;
    cin>>valor;
    
}
