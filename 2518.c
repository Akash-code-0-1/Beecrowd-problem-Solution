#include <stdio.h>
#include <math.h>
int main()
{
    int n, h, c, l;

    while (scanf("%d", &n) != EOF)
    {
        double otvj = 0;
        double height = 0;
        double darea = 0;
        double farea = 0;
        int sum = 0;
        scanf("%d %d %d", &h, &c, &l);
        sum = (h * h) + (c * c);
        otvj = sqrt(sum);
        height = otvj * n;
        darea = height * l;
        farea = (darea / 10000);
        printf("%.4lf\n", farea);
    }
}