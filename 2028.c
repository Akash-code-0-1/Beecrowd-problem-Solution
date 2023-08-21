#include <stdio.h>
int main()
{
    int n, k, count = 0;
    while (scanf("%d", &n) != EOF)
    {
        int sum = 0, i, j;
        int ar[1000];
        for (i = 0; i <= n; i++)
        {
            j = i;
            for (k = 0; k < j; k++)
            {
                ar[i] = j;
                sum++;
            }
        }
        count++;
        if (sum + 1 < 2)
        {
            printf("Caso %d: %d numero\n", count, sum + 1);
        }
        else
        {
            printf("Caso %d: %d numeros\n", count, sum + 1);
        }
        printf("0");
        for (i = 0; i <= n; i++)
        {
            j = i;
            for (k = 0; k < j; k++)
            {
                printf(" %d", ar[j]);
            }
        }
        printf("\n");
        printf("\n");
    }
}