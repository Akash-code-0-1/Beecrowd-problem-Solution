#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == 1 && b == 1 && c == 1 || a == 0 && b == 0 && c == 0)
        {
            cout << "*" << endl;
        }
        if (a == b && c != a)
        {
            cout << "C" << endl;
        }
        if (a == c && c != b)
        {
            cout << "B" << endl;
        }
        if (b == c && c != a)
        {
            cout << "A" << endl;
        }
    }
}