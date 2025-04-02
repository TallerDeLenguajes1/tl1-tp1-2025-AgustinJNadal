#include <stdio.h>

void cuadradoNum(int num);

int main() {
    int num = 12;
    cuadradoNum(num);

    return 0;
}

void cuadradoNum(int num){
    int cuadrado;
    cuadrado = num * num;
    printf("El cuadrado de %d es: %d\n", num, cuadrado);
}