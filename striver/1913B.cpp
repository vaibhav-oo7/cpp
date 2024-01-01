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
    string s ;
    cin>>s;
    int c1=0;
    int c0=0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='1') c1++;
        if(s[i]=='0') c0++;
    }
    string ans = "";
    int cost = s.size() ;
    int index = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='1'){
            if(c0!=0) {
                ans[index++] = '0';
                c0--;
                cost--;
            }
            else break;
        }
        else if(s[i]=='0'){
            if(c1!=0) {
                c1--;
                cost--;
            }
            else break;
        }
    }

    cout<<cost<<endl;
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