#include <stdio.h>

int main(){
    int baias[] = {2,3,5,7,11,13,17,19,23,29,37,41,43,47};
    int i,j,cavalos, minor=0,madeira, start;
    for (int i = 0; baias[i] != '\0'; i++)
    {
        cavalos = 0;
        madeira = baias[i] + 19;
        for (int j = i; baias[j] != '\0'; j++)
        {
            if (baias[j] >= baias[i] && baias[j] <= madeira)
            {
                cavalos++;
            }
            
            
        }
        if (cavalos > minor)
        {
            minor = cavalos;
            start = i;
        }
        
    }
    printf("Maior = %d inicio = %d\n",minor,start);
    return 0;
}