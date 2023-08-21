#include <iostream>
#include <string>
using namespace std;

string workerFun(string str1, string str2)
{
    for (char &ch : str1)
    {
        ch = tolower(ch);
    }
    for (char &ch : str2)
    {
        ch = tolower(ch);
    }
    string finalStr1 = "";
    bool conspc1 = false;
    for (char ch : str1)
    {
        if (finalStr1.find(ch) == string::npos)
        {
            finalStr1 += ch;
        }
        if (ch == ' ')
        {
            conspc1 = true;
        }
    }
    string finalStr2 = "";
    bool conspc2 = false;
    for (char ch : str2)
    {
        if (finalStr2.find(ch) == string::npos)
        {
            finalStr2 += ch;
        }
        if (ch == ' ')
        {
            conspc2 = true;
        }
    }
    int count = 0;
    for (int i = 0; i < finalStr1.length(); i++)
    {
        for (int j = 0; j < finalStr2.length(); j++)
        {
            if (finalStr1[i] == finalStr2[j])
            {
                count++;
            }
        }
    }
    if (conspc1 && conspc2)
    {
        cout << count + 1 << endl;
    }
    else
    {
        cout << count << endl;
    }
}

int main()
{
    string str1, str2;
    while (getline(cin, str1))
    {
        cin.ignore();
        getline(cin, str2);
        workerFun(str1, str2);
    }
}