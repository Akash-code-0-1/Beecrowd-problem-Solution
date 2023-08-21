#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, a;
    string st = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    cin >> a;

    for (i = 0; i < a; i++) 
    {
        cout << st[i];
    }
    cout << endl;

    return 0;
}
