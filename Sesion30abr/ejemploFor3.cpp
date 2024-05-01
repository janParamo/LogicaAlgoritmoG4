//Mostrar los numeros impares de x hasta y
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Ingresa el primer numero: ";
    cin >> x;
    cout << "Ingresa el segundo numero: ";
    cin >> y; 


    if (x < y) {
        for (int i = x; i <= y; i++) {
            if (i % 2 != 0) {
               cout << i << endl;
            }
        }
    } else {
        for (int i = y; i <= x; i++) {
            if (i % 2 != 0) {
               cout << i << endl;
            }
        }
    }

    return 0;
}

