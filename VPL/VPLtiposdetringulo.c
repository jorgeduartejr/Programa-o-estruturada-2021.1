#include <stdio.h>

int main(){
    double A,B,C, temp;
    scanf("%lf %lf %lf", &A, &B,&C);


    if (B >= A) {
        temp = A;
        A = B;
        B = temp;
    }
    if (C >= A){
        temp = A;
        A = C;
        C = temp;
    }
    if (C >= B){
        temp = B;
        B = C;
        C = temp;
    } // termina ordenação

    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((A*A) == (B*B) + (C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((A*A) > (B*B) + (C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((A*A) < (B*B) + (C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    


    if(A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A == B || A == C || B == C){
        printf("TRIANGULO ISOSCELES\n");
    } 
    
    
  return 0;
} 



