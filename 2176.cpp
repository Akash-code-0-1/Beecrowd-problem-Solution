#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char lv;
    cin >> s;
    int count = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        lv = '0';
    }
    else
    {
        lv = '1';
    }
    cout << s + lv << endl;
}