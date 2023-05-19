#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int a[26] = {};
        for (int i = 0; i < n; i++)
        {
            int j = (int(s[i]) - 65);
            a[j]++;
        }
 
        for (int i = 0; i < 26; i++)
        {
 
            if (a[i] == 1)
            {
                cnt += 2;
            }
            else if (a[i] >= 2)
            {
                cnt += a[i] + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}