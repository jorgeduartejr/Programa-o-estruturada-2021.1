#include <stdio.h>

int main(){

    int N=0;
    int notaturma=0, cont=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &notaturma);
        if (notaturma >= 0 && notaturma <=10)
        {
            if (notaturma >= 5)
            {
                cont++;
            }
            
        }
    
    } // end for

    printf("%d", cont);

    return 0;
}