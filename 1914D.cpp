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
    int n;
    cin>>n;
    vi a(n,0);
    vi b(n,0);
    vi c(n,0);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin>>c[i];
    }

    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    sort(c.begin(),c.end(),greater<int>());
    int ans = 0 ;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                if(a[i]!=b[j] && a[i]!=c[k] && b[j]!=c[k]){
                    ans = max(ans,(a[i]+b[j]+c[k]));
                }
            }
        }
    }

    cout<<ans<<endl;

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