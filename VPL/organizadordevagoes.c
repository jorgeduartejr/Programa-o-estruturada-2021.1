#include <stdio.h>

int ordena(int *v){
    int swap = 0;
    for (int i = 0; v[i] != '\0'; i++)
    {
        if (v[i] > v[i + 1] && v[i + 1] != '\0')
        {
            v[i] = v[i] + v[i + 1];
            v[i + 1] = v[i] - v[i + 1]; // ordena os valores no vetor
            v[i] - v[i] - v[i + 1];

            swap++;
        }
    }
    return swap;
}



int main(){

    int casos, vagoes, swaps;
    int trem[50];
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++)
    {
        scanf("%d", &vagoes);
        for (int j = 0; j < vagoes; j++)
        {
            scanf("%d", &trem[j]);
        }
        // swap = ordenação do trem;
        swaps = ordena(trem);
        printf("Optimal train swapping takes %d swaps.\n", swaps);

    }
    


    return 0;
}