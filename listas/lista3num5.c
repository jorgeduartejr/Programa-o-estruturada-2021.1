#include <stdio.h>

int main (void){
    int num1, num2, num3;

    printf("Insira o valor do primeiro número: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Insira o valor do segundo número: ");
    scanf("%d", &num2);
    fflush(stdin);
    printf("Insira o valor do terceiro número: ");
    scanf("%d", &num3);
    

    printf("O valor das variáveis são: \n%d\n%d\n%d.\n", num1, num2, num3);

    
}   