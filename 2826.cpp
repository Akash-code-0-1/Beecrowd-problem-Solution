#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    if (a.length() == b.length())
    {
        char aNew = a[0];
        char bNew = b[0];
        if (aNew <= bNew)
        {
            cout << a << endl;
            cout << b << endl;
        }
        else
        {
            cout << b << endl;
            cout << a << endl;
        }
    }
    else if (a.length() < b.length())
    {

        char aNew = a[0];
        char bNew = b[0];
        if (aNew <= bNew)
        {
            cout << a << endl;
            cout << b << endl;
        }
        else
        {
            cout << b << endl;
            cout << a << endl;
        }
    }
    else if (a.length() > b.length())
    {

        char aNew = a[0];
        char bNew = b[0];
        if (aNew <= bNew)
        {
            cout << b << endl;
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
            cout << a << endl;
        }
    }
}