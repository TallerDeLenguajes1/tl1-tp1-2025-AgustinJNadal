#include <stdio.h>

int cuadradoNum(int num);

int main() {
    int num = 19;
    int cuadrado;

    cuadrado = cuadradoNum(num);

    printf("El cuadrado de %d es: %d\n", num, cuadrado);

    return 0;
}

int cuadradoNum(int num){
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}