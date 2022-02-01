#include <stdio.h>


int fatorial(int f){
    if (f < 2)
    {
        return 1;
    }
    else
    {
        return(f*fatorial(f-1)); // não é ponteiro, apenas uma multiplição
    }
    
    
}
int main(){

    int a,b;
    scanf("%d",&a);
    b = fatorial(a);
    printf("%d\n",b);
    return 0;
}