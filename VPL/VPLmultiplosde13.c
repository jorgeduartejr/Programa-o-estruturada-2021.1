#include <stdio.h>

int main(){

    int X=0,Y=0,soma=0;
    scanf("%d %d", &X, &Y);

    for (int i = X; i <= Y; i++)
    {
        if(i % 13 != 0 ){
            soma = soma + i;
        }
        else {
            soma = soma - i;
        }
        
    }
    
    printf("%d", soma);

    return 0;
}