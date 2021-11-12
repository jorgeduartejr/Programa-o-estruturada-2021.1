#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    float x1, x2, distancia, resultado;
    float y1, y2;

    //printf("Digite a coordenada x1: ");
    scanf("%f", &x1);
    //getchar();
    //printf("Digite a coordenada y1: ");
    scanf("%f",&y1);
    //getchar();
    //printf("Digite a coordenada x2: ");
    scanf("%f",&x2);
    //getchar();
    //printf("Digite a coordenada y2: ");
    scanf("%f", &y2);


    distancia = (pow((x2 - x1),2) + pow((y2 - y1),2));
    resultado = sqrt(distancia);
    //printf("A distancia entre esses dois pontos é: %0.4f\n", resultado);
    printf("%.4f", resultado);
    return 0;
}