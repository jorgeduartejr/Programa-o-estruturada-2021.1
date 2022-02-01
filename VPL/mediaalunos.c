#include <stdio.h>

int main(){
    char nomes[51],sobrenomes[51];
    float nota1,nota2;
    int i,entrada;
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");
    fscanf(arquivo,"%d",&entrada);
    for (int i = 0; fscanf(arquivo, "%s %s",nomes,sobrenomes) != EOF; i++)
    {
        fscanf(arquivo, "%f", &nota1);
        fscanf(arquivo, "%f", &nota2);

        if ((nota1 + nota2)/2 > 7.0)
        {
            printf("%s %s\n", nomes,sobrenomes);
        }
        
    }
    fclose(arquivo);

    return 0;
}