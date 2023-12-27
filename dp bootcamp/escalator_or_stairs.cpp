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

int solve(int i, int j,vector<int>&a,vector<int>&b,int c,vector<vector<int>>&dp){
    if(i==1) 
        if(j==1) return dp[i][j]=c ;
        else return dp[i][j]=0;
    if(dp[i][j]!=-1) return dp[i][j] ;
    else{
        // 0 = stairs   1 = elevators
        int ans = (int)(1e9);
        if(j==1){
            ans = b[i-1]+c+solve(i-1,0,a,b,c,dp);
            ans = min(ans,b[i-1]+solve(i-1,1,a,b,c,dp));
        }
        else{
            ans = a[i-1]+solve(i-1,1,a,b,c,dp);
            ans = min(ans,a[i-1]+solve(i-1,0,a,b,c,dp));
        }
        return dp[i][j] = ans;
    }
}



void ab_d(){
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    vector<int>b(n);
    vector<vector<int>>dp(n+1,vector<int>(3,-1));
    for(int i = 1 ; i < n ; i++){
        cin>>a[i];
    }

    for(int i = 1 ; i < n ; i++){
        cin>>b[i];
    }

    solve(n,0,a,b,c,dp);
    solve(n,1,a,b,c,dp);

    for(int i = 1 ; i <= n  ; i++){
        cout<<min(dp[i][0],dp[i][1])<<" ";
    }
    
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