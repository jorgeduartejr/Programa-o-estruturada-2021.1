#include <stdio.h>


void somaRecursiva(int *p, int stop){
    int result = 0;
    while(stop > 0){
        result += *p;
        p++;
        stop--;
    }
    printf("%d\n",result);
}
int main(){

    int start, stop, i, j, vetor[50];
    scanf("%d", &start);
    for (i = 0; i < start; i++)
    {
        scanf("%d",&stop);
        for (int j = 0; j < stop; j++)
        {
            scanf("%d ", &vetor[j]);
        }
        somaRecursiva(vetor,stop);
    }
    
    return 0;
}