#include <stdio.h>
int main()
{
    int n, val, i, j, k = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%d", &val);
        for (j = 1; j <= val; j++)
        {
            if ((j % 2) != 0)
            {
                sum += 1;
            }
            else
            {
                sum += -1;
            }
        }
        printf("%d\n", sum);
    }
}