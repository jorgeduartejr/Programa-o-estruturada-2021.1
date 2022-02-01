#include <stdio.h>

int main()
{
    int start, i, control;
    scanf("%d ", &start);
    
    control = start/1000;
    start -= control*1000;
    
    while(control > 0)
    {
        printf("M");
        control--;
    }
    
    
    control = start/100;
    start -= control*100;
    
    while(control > 0)
    {
        if (control == 9)
        {
            printf("CM");
            control = 0;
        }
        if (control < 9 && control >= 5)
        {
            printf("D");
            control -= 5;
        }
        if (control < 5 && control > 0)
        {
            printf("C");
            control--;
        }
    }
    
    control = start/10;
    start -= control*10;
    
    while(control > 0)
    {
        if (control == 9)
        {
            printf("XC");
            control = 0;
        }
        if (control < 9 && control >= 5)
        {
            printf("L");
            control -= 5;
        }
        if (control < 5 && control > 0)
        {
            printf("X");
            control--;
        }
    }
    
    control = start;
    
    while(control > 0)
    {
        if (control == 9)
        {
            printf("IX");
            control = 0;
        }
        if (control < 9 && control >= 5)
        {
            printf("V");
            control -= 5;
        }
        if (control < 5 && control > 0)
        {
            printf("I");
            control--;
        }
    }
    
    start -= start;

    printf("\n");
    return 0;
}