#include <stdio.h>

int main(){
    long long int num = 600851475143;
    int i = 2;
    // scanf("%d", &num);

    while (i * i <= num)
    {
        if (num%i == 0){
            num = (num / i);
        }
        else
        {
            i += 1;
        }
        
    
    }

    printf("%lld",num);
    
    return 0;
}