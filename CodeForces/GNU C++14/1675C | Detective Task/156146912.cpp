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
        int num1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                num1++;
            }
        }
 
        int i = 0;
        while (i < s.size() && s[i] != '0')
        {
            i++;
        }
 
        if (i < s.size())
        {
            int j = i - 1;
            while (j >= 0 && s[j] != '1')
            {
                j--;
            }
            if (j >= 0)
            {
                cout << i - j + 1 << endl;
            }
            else
                cout << i + 1 << endl;
        }
        else if (num1 == 0)
        {
            cout << s.size() << endl;
        }
        else if (num1 > 0)
        {
            int k = s.size() - 1;
            int x = 0;
            while (k >= 0 && s[k] != '1')
            {
                k--;
                x++;
            }
            cout << x + 1 << endl;
        }
    }
    return 0;
}