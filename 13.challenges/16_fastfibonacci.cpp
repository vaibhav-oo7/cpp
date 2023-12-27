#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int mod = (int)1e9+7;
vector<vector<int>> multiply(vector<vector<int>>a,vector<vector<int>>b){
    vector<vector<int>> ans (a.size(),vector<int>(b[0].size(),0));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b[0].size();j++){
            ans[i][j] = 0;
  
            for (int k = 0; k < a[0].size(); k++) {
                ans[i][j] += ((a[i][k]%mod * b[k][j]%mod)%mod);
            }
        }
    }
    return ans;

}
vector<vector<int>> matpow(vector<vector<int>>transform, int n){
    if(n==1){
        return transform;
    }
    vector<vector<int>> subproblem = matpow(transform,n/2);
    if (n&1){
        return (multiply(multiply(subproblem,subproblem),transform)); 
    }
    else return multiply(subproblem,subproblem);

}

int compute(int n){
    vector<vector<int>> transform = {{0,1},{1,1}};
    vector<vector<int>> t = {{1},{1}};
    if(n==1 || n==2){
        return 1;
    }
    else{
        vector<vector<int>> transformpow = matpow(transform,n-2);
        vector<vector<int>> ans = multiply(transformpow,t);
        return (ans[ans.size()-1][0]%mod);
    }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    cout<<((compute(m+2)%mod-compute(n+1)%mod)+mod)%mod<<endl;
    
    }
    return 0;
}
