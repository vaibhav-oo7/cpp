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
vector<int>req;
vector<int>haiga;
int ingredients;
int magic ;

bool isPossible(int m){
    int total  = 0 ;
    for(int i = 0 ; i < ingredients ; i++){
        total += max(0LL,(m*req[i]) - haiga[i]);
    }
    //cout<<"total is "<<total<<endl;
    if(total<=magic){
        return true ;
    }
    else return false ;

}
void ab_d(){
    cin>>ingredients>>magic;
    for(int i = 0 ; i < ingredients ; i++){
        int x ;
        cin>>x;
        req.push_back(x);
    }

    for(int i = 0 ; i < ingredients ; i++){
        int y ;
        cin>>y;
        haiga.push_back(y);
    }

    int left = 0 ;
    int right = 10000 ;

    int cookies = 0 ;

    while(left<=right){
        int mid = left  + (right-left)/2 ;
        if(isPossible(mid)){
            cookies = mid ;
            left = mid + 1 ; 
        }
        else{
            right = mid - 1 ;
        }
       // cout<<left<<" "<<right<<endl;
    }

    cout<<cookies<<endl;

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