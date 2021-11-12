#include <stdio.h>

int main(void){


    float f, c, resultado;
    printf("Digite a temperatura em F°: ");
    scanf("%f", &f);
    getchar();
    
    c = (f-32)/1,8 ;

    printf("A temperatura %.1fF° em C° é %.1fC°.", f,c);






}