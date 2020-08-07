//
//  EstructuraAnidada.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 06/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct info_direccion {
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado {
    char nombre[30];
    struct info_direccion dir_empleado;
    double salario;
}empleado[2];


int main(){
    for (int i = 0; i<2; i++) {
        fflush(stdin); //Vacia el buffer y permite digitar los valores
        cout<<"Digite su nombre"<<endl;
        cin.getline(empleado[i].nombre, 20);
        cout<<"Digite su direccion"<<endl;
        cin.getline(empleado[i].dir_empleado.direccion, 30);
        cout<<"Digite su ciudad"<<endl;
        cin.getline(empleado[i].dir_empleado.ciudad, 20);
        cout<<"Digite su provincia"<<endl;
        cin.getline(empleado[i].dir_empleado.provincia, 20);
        cout<<"Digite el salario"<<endl;
        cin>>empleado[i].salario;
        cout<<" "<<endl;
        
    }
    
    //Impriendo los datos
    for (int i = 0; i<2; i++) {
        cout<<"Nombre "<<empleado[i].nombre<<endl;
        cout<<"Direccion "<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad "<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Ciudad "<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario "<<empleado[i].salario<<endl;
    }
    
}
