// 2 - Um programa que receba como entrada os coeficientes a,b...

#include <stdio.h>
#include <math.h>

int main(void){

    float a, b , c;
    float raiz1, raiz2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    getchar();
    printf("Digite o valor de B: ");
    scanf("%f",&b);
    getchar();
    printf("Digite o valor de C: ");
    scanf("%f",&c);
    getchar();

    // calculo das raízes
    raiz1 = (-b + sqrt(pow(b,2) - 4*a*c))/2*a ;
    raiz2 = (-b - sqrt(pow(b,2) - 4*a*c))/2*a ;

    printf("%f",raiz1);
    printf("O valor da raíz 1 é %f e o da raiz 2 é %f.", raiz1, raiz2);
    



}

