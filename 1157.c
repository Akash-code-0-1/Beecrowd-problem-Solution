#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 1000; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
}