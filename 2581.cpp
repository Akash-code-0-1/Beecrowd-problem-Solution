#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    int c;
    cin >> c;
    cin.ignore();
    for (int i = 0; i < c; i++)
    {
        getline(cin, line);
        cout << "I am Toorg!" << endl;
    }
}