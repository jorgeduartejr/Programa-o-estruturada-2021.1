#include <stdio.h>

#include <stdio.h>

int main()
{
    char first[50], second[50];
    int i, j, x, y, quant = 0, final = 0;

    fgets(first, 50, stdin);
  
    fgets(second, 50, stdin);
  
   
        
        for(i = 0; first[i] != '\0'; i++)
        {
            for(j = 0; second[j] != '\0'; j++)
            {
                if(first[i] == second[j])
                {
                    quant = 0;
                    x = i;
                    y = j;
                    while(first[x] == second[y] && (first[x] != '\0' && second[y] != '\0'))
                    {
                        quant++;
                        x++;
                        y++;
                    }
                    if(quant > final)
                    {
                        final = quant;
                    }
                }
            }
        }
        
        printf("%d ", final);
    
    return 0;
}