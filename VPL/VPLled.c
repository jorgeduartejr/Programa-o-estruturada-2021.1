#include <stdio.h>

int main(){

    int N,j;
    int leds = 0;
    char vetor[1000];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", vetor);
        j = 0;
        leds = 0;

        while (1)
        {
            if(vetor[j] == '\0') break;
            if(vetor[j] == '1') leds += 2;
            if(vetor[j] == '2') leds += 5;
            if(vetor[j] == '3') leds += 5;
            if(vetor[j] == '4') leds += 4;
            if(vetor[j] == '5') leds += 5;
            if(vetor[j] == '6') leds += 6;
            if(vetor[j] == '7') leds += 3;
            if(vetor[j] == '8') leds += 7;
            if(vetor[j] == '9') leds += 6;
            if(vetor[j] == '0') leds += 6;

            j++;
        }
        printf("%d leds\n", leds);
    }
    


    return 0;
}