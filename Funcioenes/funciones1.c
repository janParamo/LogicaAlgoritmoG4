/*Obtener el producto de dos numeros*/
#include<stdio.h>

/*Prototipo de funcion*/
int producto(int num1, int num2);

int main(int argc, char const *argv[])
{
    /*Llamada a la funcion*/
    pantalla();   
    return 0;
}

/*funcion*/
int producto(int num1, int num2){
    return num1*num2;
}

void pantalla(){
    int n1, n2, mult;
    printf("Digita el primer numero:");
    scanf("%d", &n1);
    printf("Digita el segundo numero:");
    scanf("%d", &n2);
    mult = producto(n1, n2);
    printf("%d * %d = %d\n", n1, n2, mult);
}