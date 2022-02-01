#include <stdio.h>

int main(){

    int N;
    int notas[100];
    int menor[] = {0,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 };
    int tamanho, quintaMenor, i, cont=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &notas[i]);
        menor[notas[i]] += 1;
        
    }
    for (i = 0; i < 11; i++)
    {   
        if (menor[i] > 0)
        {
            cont++;
            if (cont == 5)
            {
                quintaMenor = i;
            }
        }
      
    }
    
    printf("%d", quintaMenor);
    

    return 0;

}