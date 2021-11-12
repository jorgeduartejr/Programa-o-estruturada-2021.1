#include <stdio.h>

int main(){
    double temperatura;

    printf("Digite uma temperatura: ");
    scanf("%lf", &temperatura);

    printf("A temperatura é de:\n%012.3lf\n",temperatura);


    return 0;
}