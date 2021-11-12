#include <stdio.h>


int main(){

    int N = 0, d = 0, cont = 0;
    scanf("%d", &N);
    
    for (d = 1; d <= N; d++){
        if (N%d == 0){
            cont++; // armazena quantas vezes foi divisivel
        }    
    } 
    if(cont == 2)
        printf("primo\n");
    else{
        printf("nao\n");
    }
        

    return 0;
}