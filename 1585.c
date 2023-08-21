#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int area = 0;
        scanf("%d %d", &x, &y);
        area = x * y / 2;
        printf("%d cm2\n", area);
    }
}