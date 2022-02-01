#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float fib(float n){
    n = (pow(((1 + sqrt(5))/2), n) - pow(((1 - sqrt(5))/2), n)) / (sqrt(5));
    return n;
}

int main(){
    float n, resp;
    scanf("%f", &n);
    resp = fib(n);
    printf("%.1f\n", resp);

    return 0;
}