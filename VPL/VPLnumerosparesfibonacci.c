#include <stdio.h>

int main(){
    long long int X, f1 = 0, f2 = 1, f3 = 0, soma = 0;

    scanf("%lld", &X);
    

    while (f2 <= X)
    {
        if (f3 % 2 == 0){
            soma = soma + f3;
        }
        
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
    }
    
    printf("%lld \n", soma);

    return 0;
}
    


    