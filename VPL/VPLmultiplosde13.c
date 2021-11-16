#include <stdio.h>

int main(){

    int X=0,Y=0,soma=0;
    scanf("%d %d", &X, &Y);

    if (X < Y)
    {
        for (int i = X; i <= Y; i++){
        if(i % 13 != 0 ){
            soma = soma + i;
        }  
        }
    }
    else {
        for (int i = Y; i <= X; i++){
        if(i % 13 != 0 ){
            soma = soma + i;
        }
        }
    }
    
    
    

    printf("%d\n", soma);

    return 0;
}