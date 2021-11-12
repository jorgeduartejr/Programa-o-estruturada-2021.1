#include <stdio.h>

int main(){

    int N, i;
    float nota1,nota2,nota3, media=0, resp= 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%f %f %f", &nota1,&nota2,&nota3);
        media = ((nota1*2) + (nota2*3) + (nota3*5))/(10);
        resp = media;
        
        printf("%.1f\n", resp);
        
    }
   
    return 0;
}