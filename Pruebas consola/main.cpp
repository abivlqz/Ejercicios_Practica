//
//  main.cpp
//  Pruebas consola
//
//  Created by Aby Velazquez on 22/06/20.
//  Copyright © 2020 Aby Velazquez. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    
    int matrizA[3][3]={{1,2,1},{2,1,1},{2,1,2}};
    int matrizB[3][3]={{3,2,1},{2,3,1},{1,1,3}};
    
    
    int matrizProducto[3][3];
    
    for (int i = 0; i<3; i++) {
        
        for (int j =0; j<3; j++) {
            matrizProducto[i][j]=0;
            for (int k = 0; k<3; k++) {
                matrizProducto[i][j]+= (matrizA[i][k]*matrizB[k][j]);
                
            }
            
           
            
        }
       
        
        
    }
    
    for (int i = 0; i<3; i++) {
       
        for (int j =0; j<3; j++) {
            cout<<matrizProducto[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
