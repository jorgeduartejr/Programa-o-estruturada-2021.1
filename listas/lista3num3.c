#include <stdio.h>

int main(void){

    int nota1, nota2;
    printf("Digite a nota 1: ");
    scanf("%d", &nota1);
    fflush(stdin);
    printf("Digite a nota 2: ");
    scanf("%d", &nota2);

    nota1 = nota2;
    nota2 = nota1;

    printf("O valor de nota1 será %d  e o valor de nota2 %d.", nota1,nota2);
    





    
}