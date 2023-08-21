#include <iostream>
using namespace std;
int main()
{
    int l, c;
    int type1 = 0;
    int type2 = 0;

    cin >> l >> c;

    type1 = ((l * c) + (l - 1) * (c - 1));
    type2 = (((l - 1) * 2) + ((c - 1) * 2));

    cout << type1 << endl
         << type2 << endl;
}