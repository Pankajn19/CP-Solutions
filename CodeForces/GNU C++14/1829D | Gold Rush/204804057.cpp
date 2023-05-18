#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<unordered_map>
#include<queue>
 
using namespace std;
void solve(){
     int n; cin>>n;
        int m; cin>>m;
        queue<int> q;
        q.push(n);
        while(q.size()){
            int x = q.front();
            q.pop();
            if(x==m){
                cout<<"Yes\n";
                return;
            }
            if(x%3==0){
                int y = x/3;
                int z = 2*y;
                q.push(y);
                q.push(z);
            } 
        }
        cout<<"NO\n";
        return;
        
 
 
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
}