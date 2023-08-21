#include <stdio.h>
int main()
{
    int N, i = 1;
    scanf("%d", &N);
    int ar[N];
    while (i <= N)
    {
        scanf("%d", &ar[i]);
        int flag = 0;
        for (int j = 2; j <= ar[i] / 2; j++)
        {
            if (ar[i] % j == 0)
            {
                printf("%d nao eh primo\n", ar[i]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d eh primo\n", ar[i]);
        }
        i++;
    }
}