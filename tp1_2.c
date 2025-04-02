#include <stdio.h>

void cuadradoNum(int num);
void direcContenido(int *num);
void invertir(int *num, int *num2);
void ordenados(int *num, int *num2);

int main() {
    int num;
    int num2;
    
    printf("Ingrese num: ");
    scanf("%d", &num);
    printf("Ingrese num2: ");
    scanf("%d", &num2);

    cuadradoNum(num);
    direcContenido(&num);
    invertir(&num, &num2);
    ordenados(&num, &num2);

    return 0;
}

void cuadradoNum(int num){
    int cuadrado;
    cuadrado = num * num;
    printf("\nEl cuadrado de num es: %d\n", cuadrado);
}

void direcContenido(int *num) {
    printf("\nDireccion de num: %p\n", num);
    printf("Contenido de num: %d\n", *num);
}

void invertir(int *num, int *num2){
    int vaux;
    vaux = *num;
    *num = *num2;
    *num2 = vaux;
    printf("\nValores invertidos: num = %d y num2 = %d", *num, *num2);
}

void ordenados(int *num, int *num2){
    if (*num > *num2)
    {
        int vaux;
        vaux = *num;
        *num = *num2;
        *num2 = vaux;
    }
    printf("\nValores ordenados: num (menor)= %d y num2 (mayor)= %d", *num, *num2);
}