#include <stdio.h>

int main(){
    int X=0, Y=0, i = 0, cont = 0, soma = 0;
    scanf("%d %d", &X, &Y);
    
    if(X > Y){
        for( i = (X -1) ;i > Y;i--){
            if(i % 2 == 0){
            soma = soma + 0;
            }
            else{
            soma = soma + i;
            cont++;
            }
        }
    }
    else if(X <= Y) {
        for( i = X;i < Y;i++){
        if(i % 2 == 0){
        soma = soma + 0;
        }
        else{
            soma = soma + i;
            cont++;
            
        }
        }
    }
    
    
    
    printf("%d\n", soma);

    

    return 0;
}