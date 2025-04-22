#include <stdio.h>

//a) Función que devuelve el cuadrado de un número
int cuadrado(int num) {
    return num * num;
}

//b) Misma función pero tipo void (por puntero)
void cuadrado_void(int num, int *resultado) {
    *resultado = num * num;
}

// c) Muestra dirección y contenido
void mostrar(int var) {
    printf("Contenido: %d\n", var);
    printf("Direccion: %p\n", (void *)&var);
}

// d) Invertir valores entre dos variables
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Ordenar dos valores
void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}


int main()
{

    int x = 4, y = 9, res;

    // a) Cuadrado
    printf("Cuadrado de %d es %d\n", x, cuadrado(x));

    // b) Cuadrado tipo void
    cuadrado_void(x, &res);
    printf("Cuadrado void de %d es %d\n", x, res);

    // c) Mostrar variable
    mostrar(x);

    // d) Invertir valores
    printf("Antes de invertir: x = %d, y = %d\n", x, y);
    invertir(&x, &y);
    printf("Despues de invertir: x = %d, y = %d\n", x, y);

    // e) Ordenar
    orden(&x, &y);
    printf("Ordenados: x = %d (menor), y = %d (mayor)\n", x, y);

    return 0;
}