#include <stdio.h>

int main(){
    char string[30];
    int i;
    scanf("%s", &string);
    if (string[0] >= 'a' && string[0] <= 'z')
    {
        string[0] = string[0] - 'a' + 'A';
    }
    for ( i = 1; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] - 'A' + 'a';
        }
        
    }
    
    printf("%s ",string);

    return 0;
}