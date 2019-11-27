//
// Created by uriel on 19/07/19.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(){
    int numeros[500],num,aux1; //variables

    // generacion de numeros aleatorios
    srand(time(NULL));
    for (int i = 0; i < 500 ; i++) {
        num = 100 + rand()%(5000-1);
        numeros[i] =num;
    }

    //llenado de array
    cout<<"Numeros desordenados"<<endl;
    for (int i = 0; i < 500 ; i++) {
        cout << numeros[i] << endl;
    }

    //metodo de ordenamiento
    for (int i= 0; i < 500; i++) {
        for (int j= 0; j < 500; j++) {
            if (numeros[j] > numeros[j+1]) {
                aux1 = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux1;
            }
        }
    }

    // salida a pantalla del resultado
    cout << "Numeros ordenados"<<endl;
    for (int i = 0; i < 500 ; i++) {
        cout << numeros[i]<<endl;
    }
    return 0;


}
