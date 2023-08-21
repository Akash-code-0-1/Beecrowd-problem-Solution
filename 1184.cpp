#include <iostream>
using namespace std;
int main()
{
    char O;

    double ar[12][12];
    double sum = 0.0, count = 0.0;
    cin >> O;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> ar[i][j];
            if (j < i)
            {
                sum += ar[i][j];
                count++;
            }
        }
    }
    if (O == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else
    {
        printf("%.1lf\n", sum / count);
    }
}