#include <stdio.h>

void quantfatorial(int N){
    int fatorial[10];
    int quant = 0, anterior = 0, i,j;
    fatorial[0] = 1;
    for (i = 1; i <= 9; i++)
    {
        fatorial[i] = i * fatorial[i - 1];
    }
    for (j = i; j > -1; j--)
    {
        if (fatorial[j] > N)
        {
            anterior = i - 1;
        }
    }
    for (i = anterior; i > -1; i--)
    {
        quant += N/fatorial[i];
        N = N % fatorial[i];
    }
    printf("%d\n", quant);
    
    
    
}



int main(){
    int N;
    scanf("%d", &N);
    // chamar função
    quantfatorial(N);
    
    return 0;
}