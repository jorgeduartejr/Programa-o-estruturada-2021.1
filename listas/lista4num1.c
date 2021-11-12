/*Faça um programa que receba o primeiro nome de uma pessoa

*/

#include <stdio.h>

int main(){

    char nome[21];
    char nomecompleto[101];
    
    
    printf("Digite o seu primeiro nome:\n");
    scanf("%s", nome);
    getchar();


    printf("Digite o seu nome completo: ");
    
    fgets(nomecompleto,100,stdin);
    

    printf("Seu nome é:\n");
    puts(nome);
    printf("Seu nome completo é : %s\n", nomecompleto);
    
    

 




    





    return 0;
}