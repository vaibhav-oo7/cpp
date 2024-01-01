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


int lds(vector<int>&s, int index, int prev, vector<vector<int>> &dp){
    if(index==s.size()) return 0;
    if(dp[index][prev]!=-1) return dp[index][prev];
    else{
        int nottake = lds(s,index+1,prev,dp);
        int take = 0 ;
        if(prev==-1 || s[index]<s[prev]){
            take = 1 + lds(s,index+1,index,dp);
        }
        return dp[index][prev] = max(take,nottake);
    }
}
void ab_d(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<int>>dp(5+1,vector<int>(5+1,-1));
    vector<int>arr= {5,4,3,2,1} ;
    int x = lds(arr,0,-1,dp);
    //lds(s,0,-1,dp);
    if(x==1) cout<<-1<<endl;
    else cout<<x-1<<endl;
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