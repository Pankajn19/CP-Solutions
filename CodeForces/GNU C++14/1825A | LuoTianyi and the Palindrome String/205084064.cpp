#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<queue>
#include<stack>
 
 
using namespace std;
void solve(){
    string s; cin>>s;
    string t = s;
    reverse(s.begin(), s.end());
    int n = s.size();
        int i=0;
        while(i<n-1 && s[i]==s[i+1]) i++;
        if(i==n-1) cout<<-1<<endl;
        else cout<<n-1<<endl;
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve(); 
    return 0;
}