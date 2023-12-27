#include<bits/stdc++.h>
#define int long long

using namespace std;

int fastMODpower(int a, int b, int m){
    int res = 1;
    while(b>0){
        if(b&1){
            res=((res*a)%m);
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}


int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        int a,b,m;
        cin>>a>>b>>m; 
        cout<<fastMODpower(a,b,m)<<endl;
    }
    return 0;
}
