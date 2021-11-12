#include <stdio.h>
#include <math.h>


int main(void){

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = ((B*B) - 4*A*C);
    if (delta < 0){
        printf("Impossivel calcular");
    }
    else if(A == 0){
        printf("Impossivel calcular");
    }
    else{
    double R1 = ((-B + sqrt(delta))/(2*A));
    double R2 = ((-B - sqrt(delta))/(2*A));
    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);

    }
    
}