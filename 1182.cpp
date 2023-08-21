#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;

    double ar[12][12];
    double sum = 0.0;
    cin >> n;
    cin >> c;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ar[i][j];
            if (j == n)
            {
                sum += ar[i][j];
            }
        }
    }
    if (c == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else
    {
        printf("%.1lf\n", sum / 12.0);
    }
}