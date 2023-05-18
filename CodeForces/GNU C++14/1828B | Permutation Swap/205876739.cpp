#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int arr[n+1] = {};
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        mp[arr[i]] = i;
    }
    int ans = abs(mp[1] - 1);
    for(int i=2;i<=n;i++){
        ans  = __gcd(ans,abs(mp[i]-i));
    }
    cout<<ans<<endl;
 
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}