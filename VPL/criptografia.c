#include <stdio.h>

int main()
{
    char lista[60];
    int i, tamanho = 0, j, entrada;
    scanf("%d", &entrada);
    while(entrada > 0)
    {
        scanf("%s", lista);
        tamanho = 0;
        for(i = 0; lista[i] != '\0'; i++)
        {
            tamanho++;
            if(lista[i] >= 'a' && lista[i] <= 'z' || lista[i] >= 'A' && lista[i] <= 'Z')
            {
                lista[i] += 3;
            }
        }
        j = tamanho - 1;
        for(i = 0; i < tamanho/2; i++)
        {
            lista[i] = lista[i] + lista[j];
            lista[j] = lista[i] - lista[j];
            lista[i] = lista[i] - lista[j];
            j--;
        }
        for(i = tamanho/2; i < tamanho; i++)
        {
            lista[i] -= 1;
        }
        entrada--;
        printf("%s\n", lista);
    }
    return 0;
}