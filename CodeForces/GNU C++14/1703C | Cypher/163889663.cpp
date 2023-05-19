#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int j = 0;
        int b[n];
 
        for (int k = 0; k < n; k++)
        {
            cin >> b[k];
            string s;
            cin >> s;
 
            for (int i = b[k] - 1; i >= 0; i--)
            {
                if (s[i] == 'D' && a[k] == 9)
                {
                    a[k] = 0;
                }
                else if (s[i] == 'U' && a[k] == 0)
                {
 
                    a[k] = 9;
                }
                else if (s[i] == 'U')
                {
                    a[k]--;
                }
                else if (s[i] == 'D')
                {
                    a[k]++;
                }
            }
 
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}