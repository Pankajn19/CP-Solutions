#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
void solve(){
     int n; cin>>n;
     vector<string> v1(n),v2(n),v3(n);
     for(int i=0;i<n;i++) cin>>v1[i];
     for(int i=0;i<n;i++) cin>>v2[i];
     for(int i=0;i<n;i++) cin>>v3[i];
     int p1 = 0, p2 = 0, p3 = 0;
     unordered_map<string,int> mp12,mp23,mp13;
     for(int i=0;i<n;i++){
          mp12[v1[i]]++;
          mp12[v2[i]]++;
     }
     for(int i=0;i<n;i++){
          if(mp12[v3[i]]==1) p3++;
          else if(!mp12[v3[i]]) p3+=3; 
     }
     for(int i=0;i<n;i++){
          mp23[v3[i]]++;
          mp23[v2[i]]++;
     }
     for(int i=0;i<n;i++){
          if(mp23[v1[i]]==1) p1++;
          else if(!mp23[v1[i]]) p1+=3; 
     }
      for(int i=0;i<n;i++){
          mp13[v3[i]]++;
          mp13[v1[i]]++;
     }
     for(int i=0;i<n;i++){
          if(mp13[v2[i]]==1) p2++;
          else if(!mp13[v2[i]]) p2+=3; 
     }
 
 
 
 
     cout<<p1<<" "<<p2<<" "<<p3<<endl;
 
}
int main(){
     int t; cin>>t;
     while(t--) solve();
     return 0;
}