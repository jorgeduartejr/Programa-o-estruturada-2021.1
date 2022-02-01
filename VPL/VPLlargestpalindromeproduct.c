#include <stdio.h>

int main(){

    int x, y, produto, produtoReverso,reverso, max = 0;

    for (x = 1; x < 1000; x++)
    {
        for (y = 1; y < 1000; y++)
        {
            produtoReverso = produto = x * y;
            reverso = 0;

            while (produtoReverso > 0){
            reverso = reverso * 10 + (produtoReverso % 10);
            produtoReverso /= 10;
            }
            if (reverso == produto && produto > max){
            max = produto;
            }
        }
        
    }
    printf("%d", max);
    
    return 0;
}