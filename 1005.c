#include<stdio.h>
int main()
{
    double A, B,C, result;
    scanf("%lf %lf %lf", &A, &B, &C);
    result=(A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %.1lf\n",result);

    return 0;
}
