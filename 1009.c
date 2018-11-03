#include<stdio.h>
int main()
{
    double A,B;
    char n;
    scanf("%s %lf %lf", &n, &A, &B);

    printf("TOTAL = R$ %.2f\n",0.15*B+A);
    return 0;
}

