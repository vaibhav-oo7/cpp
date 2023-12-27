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

int dp[100005][6];
// we don't require the number of moves left as a state parameter of dp since it is constantly decreasing irrespective we move left or right and we just need to check when it is zero therefore only no. of lefts at a particular moment and the index at which we are gives us the state parameters


int solve(vector<int>&arr, int i, int prev, int moves, int left)
{
    if(i>=arr.size() || i<0)
    {
        return 0;
    }
    if(moves==0)
    {
        return 0;
    }
    if(dp[i][left]!=-1)
    {
        return dp[i][left];
    }
    else
    {
        int ans = 0 ;
        int one = 0;
        if(left>0 && prev!=1)
        {
            if(i>=0) one = arr[i] + solve(arr,i-1,1,moves-1,left-1);
        }
        if(i<arr.size())
        {
            ans = arr[i] + solve(arr,i+1,0,moves-1,left);
        } 
        return dp[i][left] = max(ans,one);
    }
}

void ab_d()
{
    int n,k,z;
    cin>>n>>k>>z;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    memset(dp,-1,sizeof(dp));

    cout<<arr[0]+solve(arr,1,-1,k,z)<<endl;
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