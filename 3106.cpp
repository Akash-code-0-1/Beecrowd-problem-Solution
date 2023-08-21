#include <iostream>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    int ar1[n];
    int ans = 0;
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];

        ans += ar1[i];

        if (ar1[i] % 3 != 0)
        {
            ans2 += ar1[i] % 3;
        }
    }
    cout << ans - ans2 << endl;
}