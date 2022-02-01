#include <stdio.h>

int main(){

    int N = 0;
    scanf("%d", &N);
    int vetor[N];
    int menorValor = 999;
    int posicao = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] < menorValor)
        {
            menorValor = vetor[i];
            posicao = i;
        }
        
      
    }
    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d", posicao);
    return 0;
}