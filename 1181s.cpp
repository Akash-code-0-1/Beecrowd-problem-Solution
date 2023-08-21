#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;

    double ar[12][12];
    double sum = 0.0, count = 0.0;
    cin >> n;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ar[i][j];
            sum += ar[i][j];
            count++;
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