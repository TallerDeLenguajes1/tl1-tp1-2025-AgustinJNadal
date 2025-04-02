#include <stdio.h>

void cuadradoNum(int num);
void direcContenido(int *num);
void invertir(int *num, int *num2);
void ordenados(int *num, int *num2);

int main() {
    int num;
    int num2;
    int pares;

    printf("Cantidad de pares de numeros que desea ingresar: ");
    scanf("%d", &pares);
    
    for (int i = 0; i < pares; i++) {
        int par; 
        par = i + 1;
        printf("\nPar %d\n", par);
        printf("Ingrese num: ");
        scanf("%d", &num);
        printf("Ingrese num2: ");
        scanf("%d", &num2);

        cuadradoNum(num);
        direcContenido(&num);
        invertir(&num, &num2);
        ordenados(&num, &num2);
    }
    return 0;
}

void cuadradoNum(int num){
    int cuadrado;
    cuadrado = num * num;
    printf("\nEl cuadrado de num es: %d\n", cuadrado);
}

void direcContenido(int *num) {
    printf("Direccion de num: %p\n", num);
    printf("Contenido de num: %d\n", *num);
}

void invertir(int *num, int *num2){
    int vaux;
    vaux = *num;
    *num = *num2;
    *num2 = vaux;
    printf("Valores invertidos: num = %d y num2 = %d\n", *num, *num2);
}

void ordenados(int *num, int *num2){
    if (*num > *num2)
    {
        int vaux;
        vaux = *num;
        *num = *num2;
        *num2 = vaux;
    }
    printf("Valores ordenados: num (menor)= %d y num2 (mayor)= %d\n", *num, *num2);
}