#include <stdio.h>
int main()
{
    int m, n;
    unsigned long long int result;
    while (scanf("%d", &m) && scanf("%d", &n) != EOF)
    {
        long long int fact1 = 1;
        for (int i = 1; i <= m; i++)
        {
            fact1 = fact1 * i;
        }
        long long int fact2 = 1;
        for (int j = 1; j <= n; j++)
        {
            fact2 = fact2 * j;
        }
        result = fact1 + fact2;
        printf("%llu\n", result);
    }
}