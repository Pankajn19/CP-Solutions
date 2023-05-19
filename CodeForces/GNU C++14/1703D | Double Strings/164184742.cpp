#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[n];
 
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        unordered_set<string> pair;
        for (int i = 0; i < n; i++)
        {
            pair.insert(s[i]);
        }
        int a[n] = {};
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                string pref = s[i].substr(0, j);
                string suff = s[i].substr(j, s[i].length() - j);
                if (pair.find(pref) != pair.end() && pair.find(suff) != pair.end())
                {
                    a[i] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}