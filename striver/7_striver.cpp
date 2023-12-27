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

void ab_d(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>ans(n,vector<char>(m,'.'));
    for(int i = 0 ; i < n ; i=i+2){
        for(int j=0;j<m;j++){
            ans[i][j]='#';
        }
    }
    bool flag = 1;
    for(int i = 1 ; i < n ; i=i+2){
        if(flag==0)ans[i][0]='#';
        else ans[i][m-1]='#';
        flag=!flag;
    }
    for(int i=0; i< n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<ans[i][j];
        }
        cout<<endl;
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