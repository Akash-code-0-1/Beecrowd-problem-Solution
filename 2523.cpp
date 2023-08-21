#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line))
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            char res = line.at(arr[i] - 1);
            printf("%c", res);
        }
        cin.ignore();
        cout << endl;
    }
}