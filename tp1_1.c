#include <stdio.h>

int main(){
    // printf("Hola Mundo");
    int variable = 3;
    int *punt;

    punt = &variable;

    printf("El contenido del puntero: %d \n", *punt);
    printf("La direccion de memoria almacenada del puntero: %p \n", punt);
    printf("La direccion de memoria de la variable: %p \n", &variable);
    printf("Direccion de memoria del puntero: %p \n", &punt);
    printf("El tamaño de memoria: %d \n", sizeof(variable));
}