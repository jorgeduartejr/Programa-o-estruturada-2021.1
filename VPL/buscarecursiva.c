#include <stdio.h>

int main(){

    int busca, tamanho, i, stop = -1;
    scanf("%d", &busca);
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for ( i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        if (busca == vetor[i])
        {
            stop = i;
            break;
        }
        
    }
    printf("%d",stop);
    return 0;
}