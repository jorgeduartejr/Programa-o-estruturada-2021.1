#include <stdio.h>

int main(void){

    float entrada;
    scanf("%f", &entrada);
    if (entrada < 0 || entrada > 100){
        printf("Fora de intervalo");

    }
    else if(entrada >= 0 && entrada <= 25 ){
        printf("Intervalo [0,25]");
    }
    else if(entrada > 25 && entrada < 50){
        printf("Intervalo (25,50]");
    }
    else if( entrada >= 50 && entrada < 75){
        printf("Intervalo (50,75]");
    }
    else if( entrada >= 75 && entrada <= 100){
        printf("Intervalo (75,100]");
    }

}