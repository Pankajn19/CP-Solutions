#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n <= 99)
        {
            cout << n % 10 << endl;
        }
        else
        {
            long long smallest = n % 10;
            long long reminder;
            while (n > 0)
            {
                reminder = n % 10;
                if (smallest > reminder)
                {
                    smallest = reminder;
                }
                n = n / 10;
            }
            cout << smallest << endl;
        }
    }
    return 0;
}