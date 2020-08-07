//
//  Ejercicio7.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
int n;
struct tiempoEtapa {
    int horas;
    int minutos;
    int segundos;
}Etapas[100];

void pedirDatos(){
    cout<<"Cuantas etapas tiene el ciclista?"<<endl;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        fflush(stdin);
        cout<<"Para la etapa "<<i+1<<" ingrese :"<<endl;
        cout<<"Hora transcurrida: "<<endl;
        cin>>Etapas[i].horas;
        cout<<"Min transcurrida: "<<endl;
        cin>>Etapas[i].minutos;
        cout<<"Seg transcurrida: "<<endl;
        cin>>Etapas[i].segundos;
        
    }
    
    
}
void tiempoTotal(){
    int horasT=0, minT=0, segT=0;
    for (int i = 0; i<n; i++) {
        horasT+= Etapas[i].horas;
        minT+= Etapas[i].minutos;
        segT+= Etapas[i].segundos;
        if (minT>=60) {
            minT-=60;
            horasT++;
        }
        if (segT>=60) {
            segT-=60;
            minT++;
        }
    }
    cout<<"El tiempo total empleado en toda la carrera"<<endl;
    cout<< horasT<<" : "<<minT<<" : "<<segT<<endl;
}



int main(){
    
    pedirDatos();
    tiempoTotal();
    return 0;
}
