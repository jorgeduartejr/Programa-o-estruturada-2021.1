#include <stdio.h>

int main(void){

    float a,b,c;
    float resultado;

    printf("Digite um valor A: ");
    scanf("%f", &a);
    getchar();
    printf("Digite um valor B: ");
    scanf("%f", &b);
    getchar();
    printf("Digite um valor C: ");
    scanf("%f", &c);
    getchar();

    if (a <= b || b <= c)
    {
        printf("Saída = 1\n");
    }
    else{
        printf("Saída = 0\n");
    }
    
    




    
}