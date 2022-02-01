#include <stdio.h>

int main(){
    int notas[30];
    int menor[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tamanho, i, fifty, cont=0, xfinal;
    scanf("%d", &tamanho);
    scanf("%d",&xfinal);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d",&notas[i]);
        menor[notas[i]] += 1;
    }
    for (int i = 0; i < 12; i++)
    {
        if (menor[i] > 0)
        {
            cont++;
            if (cont == xfinal)
            {
                fifty = i;
            }
        }
        
    }
    printf("%d",fifty);
    

    return 0;
}