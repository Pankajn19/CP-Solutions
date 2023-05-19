#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a, b, c;
        cin >> a >> b >> c;
        if (x == 1)
        {
            if (!a)
            {
                cout << "NO" << endl;
            }
            else if (a == 2)
            {
                if (!b)
                {
                    cout << "NO" << endl;
                }
                else
                    cout << "YES" << endl;
            }
            else
            {
                if (!c)
                {
                    cout << "NO" << endl;
                }
                else
                    cout << "YES" << endl;
            }
        }
        else if (x == 2)
        {
            if (!b)
            {
                cout << "NO\n";
            }
            else if (b == 3)
            {
                if (!c)
                {
                    cout << "NO" << endl;
                }
                else
                    cout << "YES" << endl;
            }
            else
            {
                if (!a)
                {
                    cout << "NO\n";
                }
                else
                    cout << "YES" << endl;
            }
        }
        else
        {
            if (!c)
            {
                cout << "NO" << endl;
            }
            else if (c == 1)
            {
                if (!a)
                {
                    cout << "NO" << endl;
                }
                else
                    cout << "YES" << endl;
            }
            else
            {
                if (!b)
                {
                    cout << "NO" << endl;
                }
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}