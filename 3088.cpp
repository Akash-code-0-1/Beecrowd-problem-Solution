#include <iostream>
#include <string>
using namespace std;

string correctstr(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] == ',' || str[i] == '.') && (str[i - 1] == ' '))
        {

            str.erase(i - 1, 1);
            i--;
        }
    }
    return str;
}

int main()
{

    string line;
    while (getline(cin, line))
    {
        cout << correctstr(line) << endl;
    }
}
