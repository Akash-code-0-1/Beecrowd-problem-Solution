#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    for (i = 0, j = 0; i < 1000; i++, j++)
    {
        printf("N[%d] = %d\n", i, j);
        if (j == t - 1)
        {
            j = -1;
        }
    }
}