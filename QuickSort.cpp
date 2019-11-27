//
// Created by uriel on 26/7/19.
//
#include <iostream>

using namespace std;

void intercambio (float &x, float&y);
void quickSort (float a [],int primero,int ultimo);

int main(){
float arreglo[11]={0,10,45,35,67,78,21,5,2,3,};
quickSort(arreglo,0,9);
cout << "arreglo ordenado"<<'\n';
    for (int i = 0; i <10 ; ++i) {
        cout << arreglo[i]<<"|";
    }
}

//Metodo de ordenamiento

void quickSort(float *a, int primero, int ultimo) {
    int i, j, centro;
    float pivote;
    centro = (primero + ultimo) / 2;
    pivote=a[centro];
    i=primero;
    j=ultimo;
    do{
        while (a[i]<pivote )i++;

        while (a[j]>pivote )j--;
        if (i <= j){
            intercambio (a[i],a[j]);
            i++;
            j--;
        }
    }while (i<=j);

    if (j > primero){
        quickSort(a,primero,j);
    }
    if (i < ultimo ) {
        quickSort(a, i, ultimo);
    }
}

// Valores de intercambio
void intercambio(float &x, float &y) {
    float aux;
    aux=x;
    x=y;
    y=aux;
}
