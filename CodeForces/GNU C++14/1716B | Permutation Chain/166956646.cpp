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
        vector<int> permu;
 
        for (int i = 0; i < n; i++)
        {
            permu.push_back(i + 1);
        }
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << permu[i] << " ";
        }
        cout << endl;
 
        for (int i = 0; i < n - 1; i++)
        {
            swap(permu[i], permu[i + 1]);
            for (int j = 0; j < n; j++)
            {
                cout << permu[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}