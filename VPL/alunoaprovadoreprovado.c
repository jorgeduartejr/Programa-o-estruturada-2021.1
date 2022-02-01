#include <stdio.h>

int main()
{
    char nome[51], sobrenome[51];
    float nota1, nota2, media;
    int i, entrada;
    FILE *archive;
    archive = fopen("arquivo.txt", "r");
    for (int i = 0; fscanf(archive, "%s %s;", nome, sobrenome) != EOF; i++)
    {
        fscanf(archive, "%f;", &nota1);
        fscanf(archive, "%f;", &nota2);
        media = (nota1 + nota2) / 2;
        if (media >= 5)
        {
            printf("%s %s %.1f %.1f %.1f aprovado\n", nome, sobrenome, nota1, nota2, media);
        }
        else
        {
            printf("%s %s %.1f %.1f %.1f reprovado\n", nome, sobrenome, nota1, nota2, media);
        }
    }
    fclose(archive);

    return 0;
}