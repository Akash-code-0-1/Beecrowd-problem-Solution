#include<stdio.h>
int main()
{
    int num, hour;
    double money, salary;
    scanf("%d %d %lf", &num, &hour, &money);
    salary= hour*money;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",salary);

    return 0;
}
