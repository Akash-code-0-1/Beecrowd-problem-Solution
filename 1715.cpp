#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    int goals[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> goals[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool ans = true;
        for (int j = 0; j < m; j++)
        {
            if (goals[i][j] == 0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            count++;
        }
    }

    cout << count << endl;
}
