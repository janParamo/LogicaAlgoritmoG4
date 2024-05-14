//Funciones
#include <iostream>
using namespace std;
#include <stdlib.h>
/*Saludar*/
void showMessage();

void showMessage(){
    cout << "Universidad Americana" << endl;
    cout << "UAM" << endl;
}


// Sumar dos numeros
void sumar();

void sumar(){
    int a;
    int b;
    cout << "Dime el primer numero: " << endl;
    cin >> a;
    cout << "Dime el segundo numero: "<< endl;
    cin >> b;
    cout << "La suma es: " << a+b << endl;
}

