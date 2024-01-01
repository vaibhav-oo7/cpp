#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define range(a, b) substr(a, b - a + 1)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define trace(x) cerr << #x << ": " << x << " " << endl;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int countbit[33];
vector<int> min2;

void setbit(int n)
{
    int i = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            min2.push_back(1 << i);
        }
        i++;
        n = n >> 1;
    }
}

void ab_d()
{
    int n, k;
    cin >> n >> k;
    
    queue<int>q;
    map<int,int>mp;

    for(int i = 0 ; i <=30  ; i++){
        if(n & (1<<i)){
            if(i>0) q.push(1<<i);
            mp[1<<i]++;
        }
    }

    if(mp.size()>k){
        cout<<"NO"<<endl;
        return;
    }

    int count = mp.size() ;

    while(count<k && !q.empty()){
        int curr = q.front();
        q.pop();
        mp[curr]--;
        mp[curr/2]+=2;
        if(curr/2>1){
            q.push(curr/2);
            q.push(curr/2);
        }
        count++;
    }

    if(count<k){
        cout<<"NO"<<endl;
        return;
    }

    else{
        cout<<"YES"<<endl;
        for(auto x : mp){
            for(int i = 0 ; i < x.second ; i++){
                cout<< x.first << " ";
            }
        }
        cout<<endl;
    }


}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ab_d();

    return 0;
}