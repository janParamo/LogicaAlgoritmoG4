/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja.*/

#include <iostream>

using namespace std;

int main()
{
    int numeros[5];
    int aux;
    int i = 0;
    int j = 0;

    while (i < 5)
    {
        cout << "Dime un numero entero: ";
        cin >> numeros[i];
        while (j < 5)
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
            j++;
        }
        i++;
    }

    cout << "Los numeros ordenados son: ";
    for (i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
