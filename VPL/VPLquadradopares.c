#include <stdio.h>

int main(){

    int N = 0, count = 0, saida=0;
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {   
            saida = i * i;
            printf("%d^2 = %d\n",i,saida);
            
        }

        
    }
    

    return 0;
}