#include <stdio.h>

int main()
{
    char lista[60];
    int i;
    
    fgets(lista, 60, stdin);
    
    if(lista[0] >= 'a' && lista[0] <= 'z')
    {
        lista[0] = lista[0] - 'a' + 'A';
    }
    for(i = 0; lista[i] != '\0'; i++)
    {
        if(lista[i] == ' ' && lista[i + 1] >= 'a' && lista[i + 1] <= 'z')
        {
            lista[i + 1] = lista[i + 1] - 'a' + 'A';
        }
    }
    
    puts(lista);
    
    return 0;
}