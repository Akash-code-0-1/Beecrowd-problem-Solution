#include<stdio.h>
int main()
{
    char name;
    double salary, sold, total_salary;
    scanf("%s %lf %lf", &name, &salary, &sold);
    total_salary= salary+sold*.15;
    printf("TOTAL = R$ %.2lf\n",total_salary);

    return 0;
}
