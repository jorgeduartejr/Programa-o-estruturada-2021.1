#include <stdio.h>

int main(){
    int vetor[60];
    int i, tamanho, last;
    scanf("%d", &tamanho);
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    last = vetor[tamanho - 1];
    for (i = tamanho - 1; i > -1; i--)
    {
        vetor[i + 1] = vetor[i];
    }
    vetor[0] = last;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d",vetor[i]);

    }
    

    return 0;
}