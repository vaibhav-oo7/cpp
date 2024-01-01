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
    int n ;
    string s;
    cin>>n;
    cin>>s;
    vector<int>vis(n+1);
    
    string t;

    vector<int>mp(27);
    for(auto it : s){
        mp[it-'a']++;
    }

    for(int i = 0 ; i < n ; i++){
        char maxi = 'a';
        for(char ch = 'a' ; ch <= 'z' ; ch++){
            if(mp[ch-'a']>0){
                maxi = ch;
            }
        }

        if(s[i]==maxi){
            vis[i]=1;
            t.push_back(maxi);
        }

        mp[s[i]-'a']--;
    }
    int ans = 0 ;

    for(int i = 25 ; i >= 0 ; i--){
        if(count(t.begin(),t.end(),i+'a')>0){
            ans-=count(t.begin(),t.end(),i+'a');
            break;
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(vis[i]){
            s[i]=t.back();
            t.pop_back();
            ans++;
        }
    }

    if(is_sorted(s.begin(),s.end())){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }

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