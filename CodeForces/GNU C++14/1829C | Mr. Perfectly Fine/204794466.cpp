#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<unordered_map>
 
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            int len; cin>>len;
            string y; cin>>y;
            if(mp.find(y)==mp.end()) mp[y] = len;
            else mp[y] = min(mp[y],len);
        }
        int x = mp["11"];
        int y = mp["01"];
        int  z = mp["10"];
        if(x==0){
            if(y==0 || z==0) cout<<-1<<endl;
            else cout<<y+z<<endl;
        }
        else if(y==0 || z==0){
            if(x==0) cout<<-1<<endl;
            else cout<<x<<endl;
        }
        else cout<<min(mp["01"]+mp["10"],mp["11"])<<endl;
    }
}