/*Escribe un programa que solicite al usuario un número entero positivo y luego
imprima todos los números desde 1 hasta ese número.*/

#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int i  = 1;


        cout << "Dime un numero entero positivo: ";
        cin >> num;
    while (i <= num)
    {
     cout << i << endl;
     i++;  
       
    }
;
    return 0;
}
