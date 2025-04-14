#include <stdio.h>

int cuadrado(int num);
void cuadrado2(int num);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);


int main(){
int num;
printf("Ingrese un num: \n");
scanf("%d", &num);

int cuadradoNum = cuadrado(num);
printf("El cuadrado: %d \n", cuadradoNum);

cuadrado2(num);

printf("La direccion de num: %p \n El contenido de num: %d \n", &num, num);

int a, b;
printf("Ingrese 2 numeros: \n");
scanf("%d %d", &a, &b);

int *aAux, *bAux;
aAux = &a;
bAux = &b;

invertir(aAux, bAux);
printf("El numero a: %d, el numero b: %d \n", *aAux, *bAux);

ordenar(aAux, bAux);

return 0;
}

int cuadrado(int num){
return (num*num);
}

void cuadrado2(int num){
num = num*num;
printf("El cuadrado 2: %d \n", num);
}

void invertir(int *a, int *b){
int aux;
aux = *a;
*a = *b;
*b = aux;
}

void ordenar(int *a, int *b){
    int mayor = (*a > *b) ? *a : *b;
    int menor = (*a > *b) ? *b : *a;
    printf("El numero mayor: %d, el numero menor: %d \n", mayor, menor);
}