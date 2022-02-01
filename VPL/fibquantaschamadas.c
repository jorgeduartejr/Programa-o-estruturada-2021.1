#include <stdio.h>
#include <stdlib.h>

int cont;

int fib(int f)
{
    cont++;
    if (f<2)
    {
        return f;
    }
    else
    {
        return (fib(f-1)+fib(f-2));
    }
    
    
}
int main(){
    int S, resp;
    scanf("%d", &S);
    int a[S];
    for (int i = 0; i < S; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < S; ++i)
    {
        resp = fib(a[i]);
        printf("fib(%d) = %d calls = %d\n",a[i],cont-1,resp);
        cont=0;
    }
    
    
    return 0;
}