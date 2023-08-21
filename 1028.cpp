#include <stdio.h>
#include <math.h>

int main()
{
    int n, n1, n2, resto;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &n1, &n2);
        resto = n1 % n2;
        while (resto != 0)
        {
            n1 = n2;
            n2 = resto;
            resto = n1 % n2;
        }
        printf("%d\n", n2);
    }

    return 0;
}