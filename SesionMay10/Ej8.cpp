/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares*/

#include <iostream>

using namespace std;

int numeros[10];
int pares = 0;
int impares = 0;
int i = 0;

int main(int argc, char const *argv[])
{
    while (i < 10)
    {
        cout << "Dime un numero entero: ";
        cin >> numeros[i];
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        i++;
    }
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;
    
    return 0;
}
