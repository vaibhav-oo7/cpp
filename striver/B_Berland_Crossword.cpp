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
int n;

bool check(int u, int r, int l, int d){
    if(u>=0 && u<=n-2 && r>=0 && r<=n-2 && l>=0 && l<=n-2 && d>=0 && d<=n-2) return true;
    else return false;
}

void ab_d(){
    int U,R,D,L;

    cin>>n>>U>>R>>D>>L;
    bool flag = true ;
    for(int i = 0 ; i <= 15 ; i++){
        int u=U,d=D,l=L,r=R;
        if(i&1){
            l--;
            d--;
        }
        if((i>>1)&1){
            r--;
            d--;
        }
        if((i>>2)&1){
            r--;
            u--;
        }
        if((i>>3)&1){
            u--;
            l--;
        }
        if(check(u,r,l,d)){
            cout<<"YES"<<endl;
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"NO"<<endl; 

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