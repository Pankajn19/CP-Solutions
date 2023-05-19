#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long a, b;
        a = int(s[0]) + int(s[1]) + int(s[2]);
        b = int(s[3]) + int(s[4]) + int(s[5]);
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}