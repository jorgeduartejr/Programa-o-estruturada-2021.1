#include <stdio.h>
#include <string.h>


int main(){
    char first[50], second[50];
    int i, j,x,y, quant = 0, final = 0;
    fgets(first,50,stdin);
    fgets(second,50,stdin);

    for (int i = 0; first[i] != '\0'; i++)
    {
        if (first[i] == second[0])
        {
            quant = 0;
            x = i;
            y = 0;
        
        while (first[x] == second[y] && (first[x] != '\0' && second[y] != '\0'))
        {
            quant++;
            x++;
            y++;
        }
        if (quant == strlen(second) || quant == strlen(second) -1)
        {
            final += 1;
        }
        }
    }
    if (strlen(second)>strlen(first))
    {
        final =0;
    }
    printf("%d", final);
    return 0;
}