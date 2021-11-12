#include <stdio.h>

int main(void){

    printf("(p -> q) ^ (q -> r)\n");
    printf("-------------------------------------------------");
    printf("\np\tq\t\t(p->q)\t\t(q->r)\t(p->q)^(q->r)\n");
    printf("0\t0\t\t1\t\t1\t\t1\n");
    printf("0\t1\t\t1\t\t1\t\t1\n");
    printf("1\t0\t\t0\t\t0\t\t0\n");
    printf("1\t1\t\t1\t\t1\t\t1\n");
    printf("--------------------------------------------------");






}