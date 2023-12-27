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

// int solve(int i, int k, vi &first, vi &two,vector<vector<int>>&dp){
//     if(k==0) return 0LL;
//     if(i==first.size()) return (*max_element(two.begin(),two.end()))*k;
//     if(dp[i][k]!=-1) return dp[i][k];
//     else{
//         int next = first[i] + solve(i+1,k-1,first,two,dp);
//         int back = 0 ;
//         for(int j = 0 ; j < i ; j++){
//             back = max(two[j]+solve(i,k-1,first,two,dp),back);
//         } 
//         return dp[i][k] = max(next,back);
//     }
// }


void ab_d(){
    int n,k;
    cin>>n>>k;
    int k1 = k ;
    vi first(n,0);
    vi two (n,0);
    //vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    for(int i = 0 ; i < n ; i++){
        cin>>first[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin>>two[i];
    }
    // if(n==1){
    //     cout<<(k-1)*two[0]+first[0]<<endl;
    //     return;
    // }

    int ans = 0 ;
    int tmp = 0 ;
    vi prefix(n,0);
    prefix[0] = two[0] ;
    for(int i= 1; i < n ; i++){
        prefix[i] = max(two[i],prefix[i-1]);
    }
    int x = min(n,k);
    for(int i = 0 ; i < x ; i++){
        ans+=first[i];
        k--;
        int abhi = ans + k * prefix[i];
        tmp = max(abhi,tmp);
    }

    cout<<tmp<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    w(x)
        ab_d();

    return 0;
}