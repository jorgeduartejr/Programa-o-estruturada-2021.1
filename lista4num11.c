#include <stdio.h>

int main(void){

    float perimetro, area, diametro, raio;

    printf("Digite o perímetro do círculo: ");
    scanf("%f", &perimetro);
    getchar();

    diametro = perimetro / 3.14;
    raio = diametro / 2;

    area = 3.14 * raio * raio;

    printf("A área do círculo é: %f", area);






}