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


/* #solution sistum https://www.youtube.com/watch?v=ZuZh5iDe2_0 */


int n,l,k;
int dp[505][505];
int solve(int i, int k, vector<int>&pos, vector<int>&speed){
    if(i==n){
        return 0 ;
    }
    if(dp[i][k]!=-1) return dp[i][k];
    else{
        int ans = INT_MAX;
        for(int j=i+1 ; j <= n ; j++){
            if(j-i<=k+1)ans = min(ans,(pos[j]-pos[i])*speed[i]+solve(j,k+1+i-j,pos,speed));
        }

        return dp[i][k] = ans;
    }
}
void ab_d(){
    
    cin>>n>>l>>k;

    vector<int>pos(n);
    vector<int>speed(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>pos[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>speed[i];
    }
    pos.push_back(l);
    pos.push_back(0);

    memset(dp,-1,sizeof(dp));

    cout<<solve(0,k,pos,speed)<<endl;

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












// int take  = 0 ;
//         int nottake = INT_MAX ;
//         if(i==n-1)take = (l - pos[i])*speed[i]  + solve(i+1,k,pos,speed);
//         else take = (pos[i+1] - pos[i])*speed[i] + solve(i+1,k,pos,speed);
//         if(k>0 && i!=0) {
//             if(i==n-1) nottake = (l-pos[i])*speed[i-1] + solve(i+1,k-1,pos,speed);
//             else nottake = (pos[i+1] - pos[i])*speed[i-1] + solve(i+1,k,pos,speed);
//         }