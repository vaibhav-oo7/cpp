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

bool sumtf(vector<int>& arr,int k, int i, vector<vector<int>>&dp){
    if(i==arr.size()){
        if(k==0) return true;
        else return false;
    }
    if(k==0) return true;
    if(dp[k][i]!=-1) return (dp[k][i]==1)? true : false;
    else{
        bool take = false;
        bool nottake = sumtf(arr,k,i+1,dp);
        if(arr[i]<=k) take = sumtf(arr,k-arr[i],i+1,dp);
        return dp[k][i] = ((take||nottake)==true)? 1 : 0 ;
    }
}
void ab_d(){
    //multiset<int>s;
    vector<int>arr;
    int n ;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            int x = pow(2,b);
            arr.push_back(x);
            //s.insert(x);
        }
        if(a==2){
            vector<vector<int>>dp(b+1,vector<int>(arr.size(),-1));
            bool flag = sumtf(arr,b,0,dp);
            if(flag){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
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