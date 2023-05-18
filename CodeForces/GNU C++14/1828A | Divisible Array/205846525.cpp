#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    if(n%2){
     for(int i=1;i<=n;i++) cout<<i<<" ";
     cout<<endl;
     return;
    }
    for(int i=1;i<=n;i++) cout<<2*i<<" ";
    cout<<endl;
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}