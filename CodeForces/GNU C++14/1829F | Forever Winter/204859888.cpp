#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<unordered_map>
#include<queue>
 
using namespace std;
 
 
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> adj[n+1];
        for(int i=0;i<m;i++){
            int x; cin>>x;
            int y; cin>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt = 0;
        unordered_map<int,int> s;
        for(int i=1;i<=n;i++){
            if(adj[i].size()>1) s[adj[i].size()]++;
        } 
        int node;
        int edge;
        if(s.size()==1){ 
            for(auto i : s) node = i.first;
            edge = m/node - 1;
            
        }
        else{
            for(auto i : s){
                if(i.second>1) edge = i.first-1;
                node = m/(edge+1);
            }
            
        }
        
        cout<<node<<" "<<edge<<endl;
 
        
    }
    return 0;
}