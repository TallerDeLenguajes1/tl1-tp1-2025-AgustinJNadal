#include <stdio.h>

int main() {
    int s = 12;
    int *puntero = &s;

    printf("El contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &s);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamanio de memoria utilizado por la variable: %d bytes\n", sizeof(s));

    
    return 0;
}