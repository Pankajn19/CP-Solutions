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
        int r1 = s.find('r');
        int g1 = s.find('g');
        int b1 = s.find('b');
        int r2 = s.find('R');
        int g2 = s.find('G');
        int b2 = s.find('B');
        if (r1 < r2 && g1 < g2 && b1 < b2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
 
    return 0;
}