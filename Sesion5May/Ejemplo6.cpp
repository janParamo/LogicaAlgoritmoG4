/*Leer un numero y dame la tabla de multiplicacion de dicho numero*/

#include <iostream>

using namespace std;

int main()
{
    int num, i = 0;
    cout << "Dime un numero:";
    cin >> num;

    while (i <= 12)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}
