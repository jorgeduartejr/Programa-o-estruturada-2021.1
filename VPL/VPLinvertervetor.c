#include <stdio.h>


int main(){
    
    int N;
    int vetor[1000];
    int inverteVetor[1000];
    scanf("%d", &N);
    int var;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
        
    }
    for (int i = 0; i < N; i++)
    {
        inverteVetor[i] = vetor[N - i -1]; 
        printf("%d ", inverteVetor[i]); 
    }
    
    
    return 0;
}