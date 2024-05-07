/*Leer un numero y decir si es primo o no*/

#include <iostream>

using namespace std;

int main()
{
    int num,  cont = 0;
    int i = 1;
    cout << "Dime un numero:";
    cin >> num;
    while (i <= num)
    {
        
        if (num % i == 0)
        {
            cont++;
            cout << i << endl;
        }
        i++;
    }

    if (cont == 2)
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }

    return 0;
}
