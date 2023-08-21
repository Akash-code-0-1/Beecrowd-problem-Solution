#include<stdio.h>
int main()
{
    int code, units;
    double price, total_price;
    scanf("%d %d %lf", &code, &units, &price);
    total_price=units*price;
    scanf("%d %d %lf", &code, &units, &price);
    total_price+= units*price;
    printf("VALOR A PAGAR: R$ %.2lf\n",total_price);

    return 0;
}
