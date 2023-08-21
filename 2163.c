#include <stdio.h>
int main()
{
    int ans1 = 0, ans2 = 0;
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int ar[r][c];
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &ar[i][j]);
            if (ar[i][j] == 42 && i > 1 && i < r && j > 1 && j < c)
            {
                if ((ar[i][j - 1] == 7 && ar[i][j + 1] == 7) && (ar[i - 1][j - 1] == 7 && ar[i - 1][j + 1] == 7) && (ar[i + 1][j - 1] == 7 && ar[i + 1][j + 1] == 7))
                {
                    ans1 = i;
                    ans2 = j;
                    break;
                }
            }
        }
    }
    printf("%d %d\n", ans1, ans2);
}