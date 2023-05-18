#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<unordered_map>
#include<queue>
 
using namespace std;
 
int bfs(int i, int j ,vector<vector<int>>& vis, vector<vector<int>>& g, int n, int m){
    vis[i][j] = 1;
    int ans = 0;
    queue<pair<int,int>> q;
    q.push(make_pair(i,j));
    vector<vector<int>> mov = {{0,1},{1,0},{0,-1},{-1,0}};
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        ans+=g[x][y];
        for(int k=0;k<4;k++){
            int nr = x + mov[k][0];
            int nc = y + mov[k][1];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && g[nr][nc]!=0){
                q.push(make_pair(nr,nc));
                vis[nr][nc] = 1;
            }                  
        }
 
 
    } 
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<vector<int>> g(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x; cin>>x;
                g[i][j] = x;
            }
        }
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && g[i][j]!=0) ans = max(ans,bfs(i,j,vis,g,n,m));
            }
        }
        cout<<ans<<endl;
    }
}