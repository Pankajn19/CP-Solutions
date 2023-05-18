#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
 
using namespace std;
void solve(){
    string s; cin>>s;
    int cnt = 0;
    string y = "codeforces";
    for(int i=0;i<s.size();i++){
        if(s[i]!=y[i]) cnt++;
    }
    cout<<cnt<<endl;
 
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
}