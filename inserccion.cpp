//
// Created by uriel on 19/07/19.
//
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;
int main (){
    int numeros[500],pos,aux,num;

    // generacion de numeros aleatorios
    srand(time(NULL));
    for (int i = 0; i < 500 ; i++) {
        num = 100 + rand()%(500,700);
        numeros[i] =num;
    }

    //llenado de array
    cout<<"Numeros desordenados"<<endl;
    for (int i = 0; i < 500 ; i++) {
        cout << numeros[i] << endl;
    }
      cout <<endl;
    // metodo de ordenamiento inserccion
    for (int i = 0; i <500 ; i++) {
        pos=i;
        aux=numeros[i];
        while ((pos>0) && (numeros[pos-1] > aux) ){
            numeros[pos]=numeros[pos-1];
            pos--;
        }
        numeros [pos]=aux;
    }

    // salida de datos en forma de arrays
    cout << endl;
    cout <<"numeros ordenados"<< endl;
    for (int j = 0; j <500 ; ++j) {
       cout << numeros [j]<< endl;
    }
    return 0;

}