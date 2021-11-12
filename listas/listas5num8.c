#include <stdio.h>

int main(void){

    int centimetros, metros, decimetros, resto;

    printf("Digite um valor em centímetros: ");
    scanf("%d", &centimetros);
    getchar();

    metros = centimetros / 100;
    decimetros = centimetros / 10;

    printf("%d metros \n %d decimetros\n %d centimetros\n", metros, decimetros,centimetros);
    







}