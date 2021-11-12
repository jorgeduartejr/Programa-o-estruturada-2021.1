#include <stdio.h>

int main(void){


    int segundos, minutos, horas, resto;
    printf("Insira o tempo em segundos: ");
    scanf("%d", &segundos);
    getchar();

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = segundos / 60;
    segundos = resto % 60;

    printf("%d horas\n", horas);
    printf("%d minutos\n", minutos);
    printf("%d segundos\n", segundos);


    

}