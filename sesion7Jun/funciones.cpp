#include <iostream>
#include "variables.h"
#include <string.h>

using namespace std;

CITY cities[MAX_REG];
int pos = 0;

// Funciones

void addCity(CITY *city);
CITY findCity(int id);
int findPos(int id);
void updateCity(CITY *city, int id);
void destroyCity(int id);
void pedirDatos();
void mostrarTodo();
void editar();
void eliminar();
void buscar();
int menu();
void principal();

void addCity(CITY *city)
{
    cities[pos] = *city;
    pos++;
}

CITY findCity(int id)
{
    CITY city;
    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id)
        {
            return cities[i];
        }
    }
    return city;
}

int findPos(int id)
{
    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id)
            return i;
    }
    return -1;
}

void updateCity(CITY *city, int id)
{
    int position = findPos(id);
    strcpy(cities[position].name, city->name);
    strcpy(cities[position].description, city->description);
}

void destroyCity(int id)
{
    int position = findPos(id);
    for (int i = position; i < pos - 1; i++)
    {
        cities[i] = cities[i + 1];
    }
    CITY c;
    cities[pos - 1] = c;
    pos--;
}

int menu()
{
    int op;
    cout << "Menu" << endl;
    cout << "1. Agregar" << endl;
    cout << "2. Editar" << endl;
    cout << "3. Eliminar" << endl;
    cout << "4. Mostrar todos" << endl;
    cout << "5. Buscar" << endl;
    cout << "6. Salir" << endl;
    cout << "Opcion: ";
    cin >> op;
    return op;
}

void principal()
{
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 4:
            mostrarTodo();
            break;
        case 6:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Deberias de leer mas solo hay seis opciones" << endl;
            break;
        }
    } while (op != 6);
}

void pedirDatos()
{
    CITY city;
    cout << "Datos  de la Ciudad" << endl;
    cout << "ID: ";
    cin >> city.id;
    cout << "Nombre: ";
    scanf("%[^\n]", city.name);
    cout << "Descripcion: ";
    scanf("%[^\n]", city.description);
    addCity(&city);
}

void mostrarTodo()
{
    cout << "Mostrar registros" << endl;
    for (int i = 0; i < pos; i++)
    {
        cout << cities[i].id << endl;
        cout << cities[i].name << endl;
        cout << cities[i].description << endl;
    }
}

void editar()
{
    
}