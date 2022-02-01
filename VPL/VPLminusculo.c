#include <stdio.h>
#include <ctype.h>

int main(){

    char nome[200];
    char nomeMaisculo[200];
    fgets(nome,200, stdin);

    int i = 0;
    while (nome[i] != '\0')
    {
        nomeMaisculo[i] = tolower(nome[i]);
        i++;
        
    }
    printf("%s \n", nomeMaisculo);


    return 0;
}