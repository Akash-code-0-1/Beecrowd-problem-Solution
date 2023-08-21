#include <iostream>
using namespace std;
int main()
{
    int n, mod;
    long int m;

    while (cin >> n >> m)
    {
        int sum = 0;
        while (m > 0)
        {
            mod = m % 10;
            sum += mod;
            m = m / 10;
        }
        if (sum % 3 == 0)
        {
            cout << sum << " sim" << endl;
        }
        else
        {
            cout << sum << " nao" << endl;
        }
    }
}