#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1 = "";
        string s2 = "";
        string s3 = "  1 0";
        string s4 = "  0 1";
        if (m % 4 == 0)
        {
            for (int i = 0; i < m / 4; i++)
            {
                s1 = s1 + "1 0 0 1 ";
            }
        }
        else
        {
            for (int i = 0; i < m / 4; i++)
            {
                s1 += "1 0 0 1 ";
            }
            s1 += "1 0 ";
        }
        if (m % 4 == 0)
        {
            for (int i = 0; i < m / 4; i++)
            {
                s2 = s2 + "0 1 1 0 ";
            }
        }
        else
        {
            for (int i = 0; i < m / 4; i++)
            {
                s2 += "0 1 1 0 ";
            }
            s2 += "0 1 ";
        }
 
        if (n == 2 && m == 2)
        {
            cout << "1 0" << endl
                 << "0 1" << endl;
        }
 
        else if (n == 2)
        {
            cout << s1 << endl
                 << s2 << endl;
        }
        else if (m == 2)
        {
            if (n % 4 == 0)
            {
                for (int i = 0; i < n / 4; i++)
                {
                    cout << s3 << endl
                         << s4 << endl
                         << s4 << endl
                         << s3 << endl;
                }
            }
            else
            {
                for (int i = 0; i < n / 4; i++)
                {
                    cout << s3 << endl
                         << s4 << endl
                         << s4 << endl
                         << s3 << endl;
                }
                cout << s3 << endl
                     << s4 << endl;
            }
        }
        else
        {
 
            if (n % 4 == 0)
            {
                for (int i = 0; i < n / 4; i++)
                {
                    cout << s1 << endl
                         << s2 << endl
                         << s2 << endl
                         << s1 << endl;
                }
            }
            else
            {
                for (int i = 0; i < n / 4; i++)
                {
                    cout << s1 << endl
                         << s2 << endl
                         << s2 << endl
                         << s1 << endl;
                }
                cout << s1 << endl
                     << s2 << endl;
            }
        }
    }
    return 0;
}