// Leer 5 numeros y mostararlos
#include <iostream>

using namespace std;

#define MAX 5

int numeros [MAX];
int fila;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


void agregar(int num){
    if(fila >= MAX){
        cout << "No se puede agregar mas numeros" << endl;
    } else{
        numeros[fila] = num;
    }
}

void mostrar(){
    if(fila == 0){
        cout << "No hay elementos" << endl;
    } else{
        for(int i = 0; i <fila; i++){
            cout << numeros [i] << endl;
        }
    }
}