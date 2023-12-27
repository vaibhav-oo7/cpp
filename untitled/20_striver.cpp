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

int solve(vector<int>arr,int k){
    int n = arr.size();
    vector<int> dp(n, 0);
    
    for (int i = 0; i < n; ++i) {
        int maxi = INT_MIN;
        for (int j = i; j >= 0; --j) {
            int gain = (j > 0 ? arr[i] - arr[j - 1] : arr[i]) - k;
            if (j > 0) {
                gain += dp[j - 1]; 
            } 
            maxi = max(maxi, gain);
        }
        dp[i] = maxi;
    }
    
    return *max_element(dp.begin(), dp.end());
}

void ab_d(){
    int n,k;
    cin>>n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    //cout<<solve(arr,k)<<endl;
    for(int i = 0 ; i < n ; i++){
        
    }
    vector<int>arr(n,1);
    for(int i = 0 ; i < n ; i++){

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