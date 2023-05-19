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
        string s2 = "aba";
        string s3 = "bab";
        if (s.size() == 1)
        {
            cout << "NO" << endl;
        }
        else if (s[0] != s[1] || s[(s.size()) - 2] != s[(s.size()) - 1])
        {
            cout << "NO" << endl;
        }
 
        else if (s.find(s2) != std::string::npos)
        {
            cout << "NO" << endl;
        }
 
        else if (s.find(s3) != std::string::npos)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}