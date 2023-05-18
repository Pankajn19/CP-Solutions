#include<iostream>
#include<algorithm>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    vector<long long> pre(n+1,0);
    for(int i=0;i<n;i++) pre[i+1] = pre[i] + a[i];
    long long ans = 0;
    for(int i=0;i<=k;i++)  ans = max(ans,pre[n-(k-i)]-pre[2*i]);
    cout<<ans<<endl;
 
}
 
int main()
{
    int t; cin>>t;
    while(t--) solve();
}