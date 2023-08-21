#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        if (line == "*")
        {
            break;
        }
        bool flag = false;
        char match_elm = tolower(line[0]);

        for (int i = 0; i < line.length() - 1; i++)
        {
            if (line[i] == ' ' && tolower(line[i + 1]) != match_elm)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "N" << endl;
        }
        else
        {
            cout << "Y" << endl;
        }
    }
}