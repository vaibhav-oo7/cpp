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
    vector<vector<int>>carpet(n,vector<int>(m));
    int arr[4] = {'v'-'a','i'-'a','k'-'a','a'-'a'};
    int ch = 0;
    int row=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            carpet[i][j]=x-'a';
        }
    }
    
    while(row<m){
        for(int j=0;j<n;j++){
            if(carpet[j][row]==arr[ch]){
                ch++;
                break;
            }
        }
        row++;
    }
    
    if(ch==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
        ab_d(); 

    return 0;
}