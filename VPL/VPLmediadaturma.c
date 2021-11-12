#include <stdio.h>

int main(){
    int N, nota=0, soma=0, var=0;
    float  media=0;
    scanf("%d", &N);

    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nota);
        if (nota < 0 || nota > 10){
            var++;
        }
        else{
            soma = soma + nota;
        }


    }
    media = (float)soma /(N - var);
    

    printf("%.1f\n", media);

    

    return 0;
}