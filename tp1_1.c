#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    int numero = 10;
    int *puntero = &numero;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion almacenada en el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &numero);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamanio de la variable (bytes): %lu\n", sizeof(numero));

    return 0;
}