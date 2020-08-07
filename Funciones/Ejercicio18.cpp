//
//  Ejercicio18.cpp
//  Cadenas_1
//
//  Created by Aby Velazquez on 07/08/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
int n;
struct fecha {
    int dia;
    int mes;
    int año;
    
}f1,f2;

void pedirDatos(){
    
       
        cout<<"Para la fecha 1 "<<endl;
        cout<<"Ingrese el dia "<<endl;
        cin>>f1.dia;
        cout<<"Ingrese el mes "<<endl;
        cin>>f1.mes;
        cout<<"Ingrese el año "<<endl;
        cin>>f1.año;
     fflush(stdin);
        cout<<"Para la fecha 2 "<<endl;
        cout<<"Ingrese el dia "<<endl;
        cin>>f2.dia;
        cout<<"Ingrese el mes "<<endl;
        cin>>f2.mes;
        cout<<"Ingrese el año "<<endl;
        cin>>f2.año;
    
   
}

fecha calcular_reciente(fecha f1,fecha f2){
    fecha mayor;
   
    if (f1.año>f2.año){
        mayor= f1;
         
    }if (f1.año<f2.año){
        mayor= f2;
        
    }else if(f1.año==f2.año){
        
        if (f1.mes>f2.mes) {
            mayor= f1;
            
        }if (f1.mes<f2.mes) {
            mayor= f2;
        } else if (f1.mes==f2.mes){
            
            if (f1.dia>f2.dia) {
                mayor= f1;
            }if (f1.dia<f2.dia) {
                mayor= f2;
            } else {
                cout<<"las dos fechas son iguales"<<endl;
                mayor.dia=0;
                mayor.mes=0;
                mayor.año=0;
            }
        }
    }
 return mayor;
    
}

void mostrarDatos(fecha fmayor){
    cout<<"La fecha ms reciente es "<<endl;
    cout<<fmayor.dia<<"/"<<fmayor.mes<<"/"<<fmayor.año<<endl;
}


int main(){
    
    pedirDatos();
    fecha mayor= calcular_reciente(f1, f2);
    mostrarDatos(mayor);
    return 0;
}
