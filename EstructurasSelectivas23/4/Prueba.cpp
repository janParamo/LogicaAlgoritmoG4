/* Una compañía dedicada al alquiler de automóviles, cobra $30 hasta un máximo de 500 KM de distancia recorrida. Para más de 500
KM y hasta 1,000 KM, cobra $30 más un monto adicional del 5% por cada kilómetro en exceso sobre 500. Para
más de 1,000 KM, cobra $30 más un monto adicional del 8% por cada kilómetro en exceso sobre 1,000. Los precios ya incluyen el 15% del impuesto (IVA).
Escriba un programa, que determine el monto a pagar por el alquiler de un vehículo sin impuesto, y el monto a pagar con el impuesto incluido. Dar énfasis al uso de la estructura
de decisión anidada (if-then-else, if-then-else, if…).*/
#include <iostream>
using namespace std;

int main() {
    int distancia;
    double montoSinImpuesto, montoConImpuesto;

    // Solicitar la distancia recorrida al usuario
    cout << "Ingrese la distancia recorrida en kilómetros: ";
    cin >> distancia;

    // Calcular el monto sin impuesto
    if (distancia <= 500) {
        montoSinImpuesto = 30;
    } else if (distancia <= 1000) {
        montoSinImpuesto = 30 + 0.05 * (distancia - 500);
    } else {
        montoSinImpuesto = 30 + 0.08 * (distancia - 1000) + 0.05 * (1000 - 500);
    }

    // Calcular el monto con impuesto (IVA)
    montoConImpuesto = montoSinImpuesto * 1.15;

    // Mostrar resultados
    cout << "Monto a pagar sin impuesto: $" << montoSinImpuesto << endl;
    cout << "Monto a pagar con impuesto (IVA): $" << montoConImpuesto << endl;

    return 0;
}
