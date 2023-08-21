#include <iostream>
#include <string>
using namespace std;

string worker(string str)
{
    string newstr;

    for (int i = 0; i < str.length(); i++)
    {

        int count = 0;

        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            newstr += str[i];
        }
    }
    string finalString = "";
    for (char ch : newstr)
    {
        if (finalString.find(ch) == string::npos)
        {
            finalString += ch;
        }
    }
    return finalString;
}

int main()
{
    int n;
    string line;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, line);

        string res = worker(line);

        if (res.length() == 26)
        {
            cout << "frase completa" << endl;
        }
        else if (res.length() >= 13)
        {
            cout << "frase quase completa" << endl;
        }
        else
        {
            cout << "frase mal elaborada" << endl;
        }
    }
}