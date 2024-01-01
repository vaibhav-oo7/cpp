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

int nb,ns,nc,pb_,ps_,pc_;
int money;
int b=0;
int s=0;
int c=0;

bool isPossible(int m){
    int req_s = (max(0LL,(m*s-ns)));
    int req_c = (max(0LL,(m*c-nc)));
    int req_b = (max(0LL,(m*b-nb)));
    int total = (req_b*pb_)+(req_c*pc_)+(req_s*ps_);
    if(total<=money) return true;
    else return false ;
}
void ab_d(){
    string seq ;
    cin>>seq;
    
    cin>>nb>>ns>>nc;
    cin>>pb_>>ps_>>pc_;
    
    cin>>money;
    
    for(auto &it : seq ){
        if(it=='B')b++;
        if(it=='S')s++;
        if(it=='C')c++;
    }
    
    int left = 0 ;
    int right = 1e14;
    int burgers = 0 ; 
    while(left<=right){
        int mid = left + (right - left)/2;
        if(isPossible(mid)){
            burgers = mid ;
            left = mid+1 ;
            //cout<<left<<" ";
        }
        else{
            right = mid - 1 ;
            //cout<<right<<endl;
        }
        //cout<<left<<" "<<right<<endl;
    }

    cout<<burgers<<endl;
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