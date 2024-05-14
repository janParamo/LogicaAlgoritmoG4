/*Escriba un programa que pida al usuario ingresar numeros enteros positivos y calcule la suma de todos
los numeros ingresados hasta que el usuario ingrese un numero negativo*/

#include <iostream>

using namespace std;

int main()
{
    int num = 0, suma = 0;

    while (num >= 0)
    {
        suma += num;
        cout << "Dime un #: ";
        cin >> num;
    }

    cout << "La suma es:" << suma << endl;

    return 0;
}
