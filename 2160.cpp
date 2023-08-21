#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    getline(cin, line);
    if (line.length() <= 80)
    {
        cout << "YES" << endl;
    }
    else if (line.length() > 80)
    {
        cout << "NO" << endl;
    }
}