#include <iostream>
#include <string>
 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string S;
        cin >> S;
        int flag;
        int i = 1;
        while (i < S.size())
        {
            if (S[i] == S[0])
            {
                S.erase(0, 1);
                i = 1;
            }
            else
                i++;
        }
        cout << S << endl;
 
        t--;
    }
 
    return 0;
}