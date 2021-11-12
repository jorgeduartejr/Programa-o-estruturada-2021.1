#include <stdio.h>

int main(void){
    
    
    
    int N, horas, minutos, segundos, resto;
    printf("minutos: ");
    scanf("%d", &N);
    getchar();


    horas = N / 3600;
    resto = N % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);


}