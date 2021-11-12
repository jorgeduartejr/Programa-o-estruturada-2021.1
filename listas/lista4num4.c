#include <stdio.h>

int main (){

    char palavra1[9];
    char palavra2[9];
    char palavra3[9];
    printf("Digite uma palavra: ");
    scanf("%s", palavra1);
    printf("Digite uma palavra: ");
    scanf("%s", palavra2);
    printf("Digite uma palavra: ");
    scanf("%s", palavra3);


    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s %s %s\n", palavra1, palavra2, palavra3);


    return 0;
}