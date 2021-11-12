#include <stdio.h>

int main(void){

    // soma das idades dos 3 filhos = idadedela

    int M, A, B, C;

    scanf("%d %d %d", &M, &A, &B);

    C = M - (A + B);

    if ((C >= A) && (C > B)){
        printf("%d\n", C);
    }
    else if((B > A) && (B >= C)){
        printf("%d\n", B);
    }
    else{
        printf("%d\n", A);
    }

}