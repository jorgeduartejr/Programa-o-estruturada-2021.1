#include <stdio.h>

int main(void){
    int var1;
    float var2;
    char var3;

    printf("Digite um número inteiro: ");
    scanf("%d", &var1);
    fflush(stdin);
    printf("Digite um número real: ");
    scanf("%f", &var2);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c", &var3);
    var3 = getchar();



    printf("A variável 1 = %d, variável 2 = %0.2f e variável 3 = %c.\n", var1, var2, var3);


}