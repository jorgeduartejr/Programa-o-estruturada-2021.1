#include <stdio.h>

int main(){

    int N = 5, maiorValor=0, primeiroValor=0, cont = 1;

    for (int i = 1; i <= N; i++)
    {
        scanf("%d",&primeiroValor); // vai receber o 1 valor
        
        if (primeiroValor >= maiorValor){
            
            maiorValor = primeiroValor;
            cont = i;
        }
        
        

        
    }

    printf("%d\n", maiorValor);
    printf("%d\n", cont);

    return 0;
}