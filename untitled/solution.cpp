#include<bits/stdc++.h>
#include<algorithm>
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
vector<int>arr;
void ab_d(){
    int x;
    cin>>x;
    vector<int>a;
    for(int i = 1 ; i <= x ; i++){
        a.push_back(i);
        
    }
    while(next_permutation(a.begin(), a.begin() + x)){
        for(int i = 0 ; i < x ; i++){
            arr.push_back(a[i]);
        }
    }

    // for(auto it : arr){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int i = 0 ; 
    int j = 0 ;
    int sum=0;
    int count = 0 ;
    int e = x*(x+1)/2;
    while(i<arr.size() && j<arr.size()){
        while(j-i+1<=x && j<arr.size()){
            sum+=arr[j];
            j++;
        }
        if(sum==e) count++;
        if(j>arr.size())break;
        sum-=arr[i];
        i++;

    }
    cout<<count<<endl;


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