#include <stdio.h>

int main(){
    int N=0;
    int menorNota=11, primeiraNota=11,segundaNota=11,segundaMenor=11;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        primeiraNota = menorNota;
        scanf("%d", &primeiraNota);
        if (primeiraNota >= 0 && primeiraNota <= 10){
            if (primeiraNota < menorNota){
                segundaMenor = menorNota;
                menorNota = primeiraNota;    
            }
            else if (segundaMenor > primeiraNota && primeiraNota > menorNota)
            {
                segundaMenor = primeiraNota;
            }
            
            
        } //end if
    } // end for
    printf("%d",segundaMenor);
    

    return 0;
}