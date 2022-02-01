#include <stdio.h>

int main()
{
    char result[11]; 
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int entrada, number, i = 0, j;
    scanf("%d", &entrada);
    while(entrada > 0)
    {
        number = entrada%16;
        if(number >= 10 && number <= 15)
        {
            result[i] = letters[number - 10];
        }
        else
        {
            result[i] = number + '0';
        }
        i++;
        entrada /= 16;
    }
    for(j = i; j > -1; j--)
    {
        if(result[j] >= '0' && result[j] <= '9')
        {
            printf("%d", result[j] - '0');
        }
        else if(result[j] >= 'A' && result[j] <= 'F')
        {
            printf("%c", result[j]);
        }
    }
    return 0;
}