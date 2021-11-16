#include <stdio.h>

int main(){
    int X, f1 = 0, f2 = 1, f3, soma = 0;

    scanf("%d", &X);
    

    while (f2 < X)
    {
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
        
        if (f3 % 2 == 0)
        {
            soma = soma + f3;
        }
        
    }
    printf("%d \n", soma);

    return 0;
}
    


    