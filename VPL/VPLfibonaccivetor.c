#include <stdio.h>

int main(){

    int T;
    scanf("%d", &T);
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    int var;
    int vetorCopia[60];
    
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &var);
        fib[i] = var;
        for (int i = 2; i <= var; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            vetorCopia[i] = var;
            
        }

        printf("Fib(%d) = %d\n", var,fib[var]);
        printf("Fib(%d) = %d\n",var, fib[i] );

        for (int j = 0; j <= var; j++)
        {
            if (fib[i] == vetorCopia)
            {
                printf("é igual");
            }
            else
            {
                printf("Não é");
            }
            
        
        }
        

    }
    return 0;
}