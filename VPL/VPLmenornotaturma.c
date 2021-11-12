#include <stdio.h>

int main(){

    int N =0, menorNota=11, primeiraNota=11, cont = 0;
    scanf("%d", &N);

    for (int i = 0; i <= N -1; i++)
    {   
        primeiraNota = menorNota;
        scanf("%d", &primeiraNota);
        if(primeiraNota >= 0 && primeiraNota <= 10){
            if (primeiraNota < menorNota){
            menorNota = primeiraNota;
            }
        }
        

    }
    
    printf("%d\n ", menorNota);
    

    return 0;
}