#include <iostream>

using namespace std;

int main()
{
    int num;
    int punteroFalso;
    int *puntero; // El nombre del puntero puede ser cualquiera, lo que debe de llevar siempre es el asterisco
    puntero = &num;
    punteroFalso = num;

    num = 90;


    printf("%d: %d \n", num, puntero);
    printf("%d: %d \n", num, *puntero); // Valor del puntero
    printf("%d: %d \n", &num, &puntero);
    printf("%d: %d \n", num, &puntero); // La forma correcta de imprimirlo es con un ampersan
    printf("%d: %d \n", num, &punteroFalso);
    printf("%d\n", punteroFalso);


    *puntero = 50;

    printf("%d: %d \n", &num, &puntero);
    printf("%d: %d \n", num, *puntero); // Valor del puntero
    printf("%d: %d \n", num, punteroFalso);

    return 0;
}
