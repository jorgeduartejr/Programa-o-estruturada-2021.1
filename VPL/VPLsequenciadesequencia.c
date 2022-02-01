#include <stdio.h>

int funcao(int N){
    int quantidade;
    if (N == 0)
    {
        return 1;
    }
    else
    {
        quantidade = N;
        return(quantidade + funcao(N - 1));
    }
    
    
}


int main(){

    int N,i,j,k;
    scanf("%d", &N);
    int entrada[30];
    int sequencia[100];
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequencia[i]); 
        entrada[i] = funcao(sequencia[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (sequencia[i] == 0)
        {
            printf("Caso %d: %d numero\n", i + 1, entrada[i]);
            printf("%d\n", sequencia[i]);

        }
        else
        {
            printf("Caso %d: %d numeros\n", i + 1,entrada[i]);
            printf("0 ");
            for (j = 1; j <= sequencia[i]; j++)
            {
                for (k = 0; k < j; k++)
                {
                    printf("%d ", j);
                }
                
            }
            printf("\n"); 
        }
     
    }

    return 0;
}  


