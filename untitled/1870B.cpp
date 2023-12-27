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

int getbiti(int n ,int i){
    if(i==0){
        return (n&1);
    }
    else{
        int count = 0 ;
        while(n>0){
            if(count==i) return (n&1);
            else {
                count++;
                n=n>>1;
            }
        }
        return 0 ;
    }
}


int clearibit(int n, int i){
    int mask = ~(1<<i); 
    int ans = n & mask;
    return ans;
}

int setibit(int n, int i){
    int mask = 1;
    while(i>0){
        mask=mask<<1;
        i--;
    }
    n = n | mask;
    return n;

}
void ab_d(){
    int m,n;
    cin>>n>>m;
    vector<int>arr1;
    vector<int>arr2;
    for(int i= 0; i < n ; i++){
        int x;
        cin>>x;
        arr1.pb(x);
    }

    for(int i= 0 ; i< m ; i++){
        int x ;
        cin>>x;
        arr2.pb(x);
    }
    int xr = 0 ;
    for(int i = 0; i < n ; i ++){
        xr = xr ^ arr1[i];
    }
    int maxi=0,mini=0;
    if(n%2==0){
        maxi=xr;
        int temp = xr;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < 30 ; j++){
                if(getbiti(arr2[i],j)){
                    temp = clearibit(temp,j);
                }
            }
        }
        mini = temp;
    }
    else{
        mini = xr;
        int temp = xr ; 
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < 30 ; j++){
                if(getbiti(arr2[i],j)){
                    temp = setibit(temp,j);
                }
            }
        }
        maxi = temp;
    }
    cout<<mini<<" "<<maxi<<endl;
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