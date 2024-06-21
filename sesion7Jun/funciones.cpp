#include <iostream>
#include "variables.h"
#include <string.h>
#include <fstream>
#include <cstdlib>

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

// Manejo de archivos
int loadCities();
void writeFile(const CITY &city);
void editFile(const CITY &city, int id);
void deleteFile();

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
    pos = loadCities();
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 2:
            editar();
            break;
        case 3:
            eliminar();
            break;
        case 4:
            mostrarTodo();
            break;
        case 5:
            buscar();
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
    scanf(" %[^\n]", city.name);
    cout << "Descripcion: ";
    scanf(" %[^\n]", city.description);
    addCity(&city);
    writeFile(city);
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
    CITY city;
    int id;
    cout << "ID: ";
    cin >> id;
    city = findCity(id);
    cout << "Nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Descripcion: ";
    scanf(" %[^\n]", city.description);
    updateCity(&city, id);
    cout << "Registro actualizado...\n";
    editFile(city, id);
}

void eliminar()
{
    int id;
    cout << "ID: ";
    cin >> id;
    destroyCity(id);
    cout << "Eliminado...\n";
    deleteFile();
}

void buscar()
{
    int id;
    cout << "Dime el ID: ";
    cin >> id;
    CITY city = findCity(id);
    cout << "ID: " << city.id << endl;
    cout << "Nombre: " << city.name << endl;
    cout << "Descripcion: " << city.description << endl;
}

int loadCities()
{
    ifstream archivo("cities.txt");
    if (archivo.fail())
    {
        return 0;
    }
    int i = 0;
    while (archivo >> cities[i].id)
    {
        archivo.ignore();
        archivo.getline(cities[i].name, 30);
        archivo.getline(cities[i].description, 100);
        i++;
    }
    archivo.close();
    return i;
}
void writeFile(const CITY &city)
{
    ofstream archivo;

    archivo.open("cities.txt", ios::app);

    if (archivo.fail())
    {
        cout << "El arhivo no se pudo abrir" << endl;
        exit(1);
    }

    archivo << city.id << endl;
    archivo << city.name << endl;
    archivo << city.description << endl;
    archivo.close();
}

void editFile(const CITY &city, int id)
{
    ifstream archivo("cities.txt");
    ofstream temp("temp.txt");
    CITY c;
    while (archivo >> c.id)
    {
        archivo.ignore();
        archivo.getline(c.name, 30);
        archivo.getline(c.description, 100);
        if (c.id == id)
        {
            temp << city.id << endl;
            temp << city.name << endl;
            temp << city.description << endl;
        }
        else
        {
            temp << c.id << endl;
            temp << c.name << endl;
            temp << c.description << endl;
        }
    }
    archivo.close();
    temp.close();
    remove("cities.txt");
    rename("temp.txt", "cities.txt");
}
void deleteFile()
{
    ifstream archivo("cities.txt");
    ofstream temp("temp.txt");
    CITY c;
    int id;
    cout << "ID: ";
    cin >> id;
    while (archivo >> c.id)
    {
        archivo.ignore();
        archivo.getline(c.name, 30);
        archivo.getline(c.description, 100);
        if (c.id != id)
        {
            temp << c.id << endl;
            temp << c.name << endl;
            temp << c.description << endl;
        }
    }
    archivo.close();
    temp.close();
    remove("cities.txt");
    rename("temp.txt", "cities.txt");
}