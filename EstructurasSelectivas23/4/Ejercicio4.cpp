/* El director de una escuela, está organizando un viaje de estudios, y requiere determinar, cuánto debe cobrar a cada alumno, y cuánto debe pagar a la compañía de 
viajes por el servicio. La forma de cobrar es la siguiente: si son 100 alumnos o más, el
costo por cada alumno es de $60.00; de 50 a 99 alumnos, el costo es de $70.00; de 30 a 49, de $100.00; y si son menos de 30, el costo de la renta del autobús es de
$4,500.00, sin importar el número de alumnos. Escriba un programa que permita determinar el pago a la compañía de autobuses y lo que debe pagar cada alumno por el
viaje. Dar énfasis al uso de la estructura de decisión múltiple (switch-case). Además, utiliceun menú de opciones por consola con sus respectivas funciones (módulos).*/

#include <iostream>
using namespace std;

void calcularCostoAlumno(int numAlumnos) {
    double costoAlumno;

    
    switch (numAlumnos) {
        case 0 ... 29:
            costoAlumno = 4500.0 / numAlumnos;
            break;
        case 30 ... 49:
            costoAlumno = 100.0;
            break;
        case 50 ... 99:
            costoAlumno = 70.0;
            break;
        default:
            costoAlumno = 60.0;
            break;
    }

    cout << "El costo por alumno es: $" << costoAlumno << endl;
}


void calcularPagoCompania(int numAlumnos) {
    double pagoCompania;

    
    switch (numAlumnos) {
        case 0 ... 29:
            pagoCompania = 4500.0;
            break;
        case 30 ... 49:
            pagoCompania = 3000.0;
            break;
        case 50 ... 99:
            pagoCompania = 3500.0;
            break;
        default:
            pagoCompania = 6000.0;
            break;
    }

    cout << "El pago a la compania de autobuses es: $" << pagoCompania << endl;
}

int main() {
    int opcion, numAlumnos;

    do {
        cout << "\nMenu de opciones:" << endl;
        cout << "1. Calcular costo por alumno" << endl;
        cout << "2. Calcular pago a la compania de autobuses" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularCostoAlumno(numAlumnos);
                break;
            case 2:
                cout << "Ingrese el número de alumnos: ";
                cin >> numAlumnos;
                calcularPagoCompania(numAlumnos);
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Inténtelo de nuevo." << endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}
