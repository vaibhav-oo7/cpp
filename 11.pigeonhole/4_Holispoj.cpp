#include<bits/stdc++.h>
#define int long long
using namespace std;

int ans,n;
vector<vector<pair<int,int>>>adj(100005);
int dfs(int node,int par){
    int count = 1;
    for(auto it : adj[node]){
        int adjnode = it.first;
        int wt = it.second;
        if(adjnode==par) continue;
        else{
            int countnbr=dfs(adjnode,node);
            count+=countnbr;
            ans+=2*min(n-countnbr,countnbr)*wt;
        }
    }
    return count;
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>n; //no of elements in array
        for (int i = 1; i <= n; i++) adj[i].clear();
        for(int i=1;i<n;i++){
            int x,y,z;
            cin>>x>>y>>z;
            adj[x].push_back({y,z});
            adj[y].push_back({x,z});
        }

        ans=0;
        int x = dfs(1,-1);
        cout<<"Case #"<<k<<": "<<ans<<endl;

    }
    return 0;
}
