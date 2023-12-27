#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int32_t fastpow(int n, int power, int mod){
    if(power==0) return 1;
    if(power==1) return n;
    else{
        int subproblem = fastpow(n,power/2,mod)%mod;
        if(power&1) return ((n*(subproblem*subproblem)%mod)%mod);
        else return (subproblem*subproblem)%mod;
    }
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        int a,n,p;
        cin>>a>>n>>p;
        int mod = 1;
        int temp = a;
        for(int i=1;i<=n;i++){
            int res = fastpow(temp,i,p)%p;
            mod *= res;
            temp=res;
        }
        cout<<mod<<endl;
    }
    

    return 0;
}
