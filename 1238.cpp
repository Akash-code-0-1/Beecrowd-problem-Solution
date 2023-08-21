#include <iostream>
using namespace std;

string Combiner(string str1, string str2)
{
    string combinedStr = "";
    int maxLength = max(str1.length(), str2.length());

    for (int i = 0; i < maxLength; i++)
    {
        if (i < str1.length())
        {
            combinedStr += str1[i];
        }
        if (i < str2.length())
        {
            combinedStr += str2[i];
        }
    }

    return combinedStr;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        size_t spacePos = line.find(' ');

        string str1 = line.substr(0, spacePos);
        string str2 = line.substr(spacePos + 1);

        string combinedString = Combiner(str1, str2);
        cout << combinedString << endl;
    }

    return 0;
}
