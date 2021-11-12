#include <stdio.h>

int main(void){
    char cadeia1[19];
    char cadeia2[19];

    printf("Digite algo: ");
    gets(cadeia1);

    printf("Digite algo: ");
    gets(cadeia2);

    printf("(%s,%s)\n",cadeia1,cadeia2);


}