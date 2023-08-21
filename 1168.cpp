#include <iostream>
#include <string>
using namespace std;

int count_leds(const string &number)
{
    static const int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int total_leds = 0;
    for (char c : number)
    {
        total_leds += leds[c - '0'];
    }
    return total_leds;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string number;
        getline(cin, number);
        int leds = count_leds(number);
        cout << leds << " leds" << endl;
    }
    return 0;
}