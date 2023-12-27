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

bitset<100000000> b;
vector<int> primes;
int n = 100000000;

void seive()
{
    b.set();

    for (int i = 2; i < n; i += 2)
    {
        b[i] = 0;
    }

    for (int i = 3; i < n; i += 2)
    {
        if (b[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                b[j] = 0;
            }
        }
    }
    b[0] = b[1] = 0;
    b[2] = 1;
    for (int i = 2; i <= n; i++){
        if (b[i]){
            primes.push_back(i);
            //cout<<i<<endl;
        }
    }
}

void ab_d(){
    seive();
    //cout<<primes.size()<<endl;
    int q;
    cin>>q;
    while(q--){
        int k ;
        cin>>k;
        cout<<primes[k-1]<<endl;
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