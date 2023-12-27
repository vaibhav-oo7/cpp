#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)        substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x)         cerr<<#x<<": "<<x<<" "<<endl;

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

 
/*

int solve (int i, int total, vector<int>&coins){
    if(total==0) return 1;
    if(i>=n) return 0 ;
    if(dp[i][total]!=-1) return dp[i][total];
    else{
        int take = 0 ; 
        int nottake = solve(i+1,total,coins)%mod;
        if(coins[i]<=total) take = solve(i,total-coins[i],coins)%mod;
        return dp[i][total] = (take+nottake)%mod ;
    }
}

correct approach but gives memory limit exceeded on dp of 100*1000000 therefore we need to change it to O(n) complexity we will check for each coin which all amounts are possible by iterating over the states : 

*/

void ab_d(){
    int n,x;
    cin>>n>>x;
    vector<int>coins(n);
    for(int i = 0 ; i < n ; i++) cin>>coins[i];
    vector<int>ways(x+1,0);
    ways[0]=1;
    for(int i = 0  ; i < n ; i++){
        int c = coins[i] ; 
        for(int j = 0 ; j <= x-c ; j++){
            (ways[j+c] += ways[j])%=mod;
        }
    }
    cout<<ways[x]<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ab_d();

    return 0;
}






 