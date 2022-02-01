#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int vetor[N];
    int var;
    int temp;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &var);
        vetor[i] = var;
        temp = 0;
        for (int j = 0; j < i; j++){
            if (vetor[i] == vetor[j]){
            temp++;
            } 
        }
        
        if (temp != 0)
        {
            i--;
        } else
        {
            printf("%d ", vetor[i]);
        }
        
    }

    return 0;
}