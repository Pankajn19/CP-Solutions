#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
 
using namespace std;
void solve(){
    int  n; cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        int x; 
        cin>>x;
        s[i] = x;
    }
    int countOfOne = 0;
        int maxCountOfOneS = 0;
 
        // Iterating through whole array.
        for(int i=0;i<n;i++){
 
            // Taking count of 1 ( as countOfOne) untill 0 or end of array comes.
            if(s[i] == 0){
                countOfOne++;
            } 
 
        // If 0 comes or end of array we take the max of our one's count(countOfOne) as maxCountOfOneS.
            if(s[i]==1 || i == n-1){
             maxCountOfOneS = max(maxCountOfOneS,countOfOne);
             countOfOne = 0;
            }
        }
 
        cout<<maxCountOfOneS<<endl;
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
}