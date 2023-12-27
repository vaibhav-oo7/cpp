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
    int a,b,c;
    cin >>a>>b>>c;
    vector<int>arr1(a);
    vector<int>arr2(b);
    int sum = 0 ;
    for(int i = 0 ; i < a ; i++){
        cin>>arr1[i];
        sum+=arr1[i];
    }
    for(int i = 0 ; i < b ; i++){
        cin>>arr2[i];
    }
    int maxi2 = *max_element(arr2.begin(),arr2.end());
    int mini2 = *min_element(arr2.begin(),arr2.end());
    int maxi1 = *max_element(arr1.begin(),arr1.end());
    int mini1 = *min_element(arr1.begin(),arr1.end());
    if(c==1){
        cout<<max(sum,sum+maxi2-mini1)<<endl;
        return;
    }
    else if(c==2){
        int mini = min(mini1,mini2);
        int maxi = max(maxi1,maxi2);
        cout<<(sum+mini-maxi)<<endl;
        return;
    }
    else{
        if(a==1 && b==1){
            if(c%2==0) cout<<min(arr1[0],arr2[0])<<endl;
            else cout<<max(arr1[0],arr2[0])<<endl;
            return;
        }
        if(c%2==0){
            cout<<min(sum,sum-max(maxi2,maxi1)+min(mini2,mini1))<<endl;
        }
        else{
            cout<<max(sum,sum+max(maxi2,maxi1)-min(mini1,mini2))<<endl;
        }
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