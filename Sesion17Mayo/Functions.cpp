#include <iostream>
#include "Variables.h"
using namespace std;

int menu();
void start();
void addGrade();
void showGrades();
void lowGrade();
void highGrade();
void promedio();

int menu()
{
    int option;
    system("cls || clear");
    cout << "1. Ingresar notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> option;
    return option;
}

void start()
{
    int option;
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingresar notas" << endl;
            addGrade();
            system("pause");
            break;
        case 2:
            showGrades();
            break;
        case 3:
            highGrade();
            break;
        case 4:
            lowGrade();
            break;
        case 5:
            promedio();
            break;

        case 6:
            cout << "Salir" << endl;
            system("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
        }
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas" << endl;
    }
}

void showGrades()
{
    for (int i = 0; i < position; i++)
    {
        cout << "Nota " << i + 1 << ": " << grades[i] << endl;
    }
    system("pause");
}

void lowGrade()
{
    int low = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] < low)
        {
            low = grades[i];
        }
    }
    cout << "La nota mas baja es: " << low << endl;
    system("pause");
}

void highGrade()
{
    int high = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > high)
        {
            high = grades[i];
        }
    }
    cout << "La nota mas alta es: " << high << endl;
    system("pause");
}

void promedio()
{
    int sum = 0;
    for (int i = 0; i < position; i++)
    {
        sum += grades[i];
    }
    cout << "El promedio es: " << sum / position << endl;
    system("pause");
}