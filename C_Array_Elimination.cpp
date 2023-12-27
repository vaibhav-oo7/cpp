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

int countbit[31] ;

void solve(int n){
    int i = 0 ;
    while(n>0){      //1101
        if(n&1==1){
            countbit[i]++;
        }
        i++;
        n=n>>1;
    }
}

void ab_d(){
    int n ;
    cin >> n ;

    vector<int>arr(n,0);
    vector<int>ans ; 
    ans.push_back(1);
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        solve(arr[i]);
    }

    for(int i = 2 ; i <= n ; i++){
        bool flag = true ;
        for(int j = 0 ; j < 31 ; j++){
            if(countbit[j]%i!=0) {
                flag = false ;
                break ;
            }
        }
        if(flag){
            ans.push_back(i);
        }
    }

    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    w(x){
        memset(countbit,0,sizeof(countbit));
        ab_d();
    }

    return 0;
}