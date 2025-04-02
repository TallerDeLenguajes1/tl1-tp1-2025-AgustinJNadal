#include <stdio.h>

void cuadradoNum(int num);
void direcContenido(int *num);

int main() {
    int num;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    cuadradoNum(num);
    direcContenido(&num);

    return 0;
}

void cuadradoNum(int num){
    int cuadrado;
    cuadrado = num * num;
    printf("El cuadrado de %d es: %d\n", num, cuadrado);
}

void direcContenido(int *num) {
    printf("Direccion de num: %p\n", num);
    printf("Contenido de num: %d\n", *num);
}