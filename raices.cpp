//
// Created by uriel on 17/07/19.
//

#include <iostream>
#include <math.h>
using namespace std;

float real (float a, float b);
float imaginaria (float a, float det);    //ejemplos de prototipos de funciones
float raiz1(float b, float det,float a);
float raiz2(float b, float det,float a);

int main () {
    float a = 0, b = 0, c = 0, det = 0 , re=0 , img=0 , x1=0 ,x2=0 ; // solo son conocidas dentro de esta variable
    while (a == 0) {
        cout << "Dame el valor de a";
        cin >> a;
        cout << "Dame el valor de b";
        cin >> b;
        cout << "Dame el valor de c";
        cin >> c;
        if (a == 0) {
            cout << "Error: el coeficiente a tiene que ser diferente de 0" << endl;
        }
    }
    det = (b * b) - (4 * a * c);
    if (det == 0) {
        cout << "Raices reales e iguales"<< endl;

    } else if (det > 0) {
        cout << "raices reales diferentes" << endl;
    } else {
        if (det < 0) {
            cout <<"raices complejas conjugadas"<< endl;
        }
    }
    if (det <0){
        re= real(a,b);
        img= imaginaria(a,det);
        cout << "la primer raiz es:"<<re<<"+"<<img<<"i"<< endl;
        cout << "la segunda raiz es:"<<re<<"+"<<img<<"i"<< endl;
    }
    if (det >0){
        x1= raiz1(b,det,a);
        x2= raiz2(b,det,a);
        cout << "la primer raiz es:"<<x1<<"+"<<x2<<"i"<< endl;
        cout << "la segunda raiz es:"<<x1<<"+"<<x2<<"i"<< endl;
    }

    if (det ==0){
        x1=-b/(2*a);
        cout << "las raices son" << x1 <<endl;
    }

    return 0;

}

// espacio de funciones
// aqui se sustituye el ; por {}
float real (float a, float b){
    float resultado=0;
    resultado=-b/(2*a);
    return resultado;
}

float imaginaria (float a, float det){
    float resultado=0;
    resultado = (sqrt(-det)/(2*a));
    return resultado;
}

float raiz1(float b, float det,float a){
    float resultado=0;
    resultado = -b+(sqrt(-det)/(2*a));
    return resultado;
}
float raiz2(float b, float det,float a){
    float resultado= 0;
    resultado= -b-(sqrt(-det)/(2*a));
    return resultado;
}


