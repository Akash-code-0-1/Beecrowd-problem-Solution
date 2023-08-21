#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    float ar[n];
    for (i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%f", &ar[i]);
        for (j = 0; ar[i] > 1; j++)
        {
            ar[i] = ar[i] / 2;
            count++;
        }
        printf("%d dias\n", count);
    }
}