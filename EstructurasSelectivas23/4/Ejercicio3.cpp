/* Una compañía dedicada al alquiler de automóviles, cobra $30 hasta un máximo de 500 KM de distancia recorrida. Para más de 500
KM y hasta 1,000 KM, cobra $30 más un monto adicional del 5% por cada kilómetro en exceso sobre 500. Para
más de 1,000 KM, cobra $30 más un monto adicional del 8% por cada kilómetro en exceso sobre 1,000. Los precios ya incluyen el 15% del impuesto (IVA).
Escriba un programa, que determine el monto a pagar por el alquiler de un vehículo sin impuesto, y el monto a pagar con el impuesto incluido. Dar énfasis al uso de la estructura
de decisión anidada (if-then-else, if-then-else, if…).*/

#include <iostream>
using namespace std; 

main(){
    int distancia;
    float alqSin;
    float alqCon;

    cout << "Dime la distancia recorrida:";
    cin >> distancia;

    if (distancia <= 500)
    {
        alqSin = 30;
    } else if (distancia <= 1000)
    {
        alqSin = (distancia*0.05)+30;
    } else{
        alqSin = (distancia*0.08)+30;
    }
    
    alqCon = alqSin+(alqSin*0.15);

    cout<< "El monto a pagar sin impuesto es de: $"<<alqSin<<"\n";
    cout<< "El monto a pagar con impuesto es de: $"<<alqCon<<"\n";
}