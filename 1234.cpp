#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string line;
    while (getline(cin,line))
    {

        int flag = 0;
        for (int i = 0; i < line.length(); i++)
        {
            if ((line[i] >= 'A') && (line[i] <= 'Z') || (line[i] >= 'a') && (line[i] <= 'z'))
            {
                flag++;
                if (flag % 2 != 0)
                {

                    line[i] = toupper(line[i]);
                }
                else
                {
                    line[i] = tolower(line[i]);
                }
            }
        }
        cout << line << endl;
    }
}