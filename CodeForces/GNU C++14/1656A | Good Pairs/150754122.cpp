#include <iostream>
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
        int smallest = 0;
        int largest = 0;
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        for (int k = 1; k < n; k++)
        {
            if (a[k] > a[largest])
            {
                largest = k;
            }
        }
        cout << smallest + 1 << " " << largest + 1 << endl;
    }
 
    return 0;
}