/*Escribir un programa que lea los tres lados
de un triángulo. Determinar el tipo de triángulo:
equilátero, si tiene tres lados iguales; o isósceles, si tiene
dos lados iguales. Dar énfasis al uso de la estructura de
decisión doble (if-then-else)*/

#include<iostream>
using namespace std;

void DefTrian(int lado1, int lado2, int lado3); 

main(){
    int lado1;
    int lado2;
    int lado3;
    cout << "Dime la medida del primer lado:";
    cin >> lado1;
    cout << "Dime la medida del segundo lado:";
    cin >> lado2;
    cout << "Dime la medida del tercer lado:";
    cin >> lado3;
    DefTrian(lado1, lado2, lado3);
    return 0;
}

void DefTrian(int lado1, int lado2, int lado3){
    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "El triangulo es equilatero";

    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        cout << "El triangulo es isosceles";

    } else {
        cout << "El triangulo es escaleno ";
    }
    
    
}