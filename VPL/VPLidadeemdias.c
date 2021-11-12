// Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

#include <stdio.h>

int main (void){
    int idadeDias, ano, mes, dias;
    
    scanf("%d", &idadeDias);
    getchar();

    ano = idadeDias / 365;
    mes = (idadeDias%365)/30;
    dias = (idadeDias%365)%30;
    

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n", dias);











}