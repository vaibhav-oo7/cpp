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
    string s;
    cin>>s;
    int one = 0 ;
    int three = s.size()-1;
    int i=0;
    while(i<=three){
        if(s[i]=='1'){
            swap(s[one],s[i]);
            one=one+2;
            i=i+2;
        }
        else if(s[i]=='3'){
            swap(s[i],s[three]);
            three=three-2;
        }
        else if(s[i]=='2'){
            i=i+2;
        }
    }
    cout<<s<<endl;
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