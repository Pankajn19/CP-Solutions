#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = (int(s[0]) - 96);
        int y = (int(s[1]) - 96);
        if (x < y)
        {
            cout << (((x - 1) * 25) + (y - 1)) << endl;
        }
        else
            cout << (((x - 1) * 25) + (y)) << endl;
    }
    return 0;
}