#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int vetor[1000];
    int var;
    int freq[1000];
   

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&var);
        vetor[i] = var; 
    }

    for (int i = 0; i <= 10; i++){
        freq[i] = 0;
        for (int j = 0; j < N; j++){

            if (i == vetor[j])
            {
                freq[i] = freq[i] + 1;
            }
        }  
        printf("%d ", freq[i]);
    }
    return 0;
}