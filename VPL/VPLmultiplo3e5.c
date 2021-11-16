#include <stdio.h>

int main(){
    int X, soma3 = 0, soma5 =0, soma =0;
    scanf("%d", &X);

    for (int i = 1; i < X; i++)
    {
      if (i % 3 == 0)
      {
          soma3 = soma3 + i;
      }
      else if (i % 5 == 0)
      {
          soma5 = soma5 + i;
      }
      
      
    }
    soma = soma3 + soma5;
    printf("%d\n", soma);
    

    return 0;
}