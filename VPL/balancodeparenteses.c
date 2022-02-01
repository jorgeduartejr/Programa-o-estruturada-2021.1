#include <stdio.h>

int main(){

    int i;
    char expressao[1001];
    while (scanf("%s",expressao) != EOF)
    {
        int left = 0, right = 0;
        for(i = 0; expressao[i] != '\0';i++)
        {
            if (expressao[i] == '(')
            {
                left++;
            } else if (expressao[i] == ')')
            {
                right++;
            }
            if (right > left)
            {
                break;
            }
        }
        if (left == right)
        {
            printf("correct\n");
        }
        else
        {
            printf("incorrect\n");
        }
        
    }
    


    return 0;
}