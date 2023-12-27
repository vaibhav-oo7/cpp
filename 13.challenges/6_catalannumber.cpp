#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int dp[105];

int catalan(int n){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    else{
        int res = 0;
        for(int i=0;i<n;i++){
            res+=(catalan(n-1-i)*catalan(i));
        }
        return dp[n]=res;
    }
}
int32_t main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    int n;
    cin>>n; //no of elements in array
    memset(dp,-1,sizeof(dp));
    int cataln = catalan(n);
    cout<<cataln<<endl;
    int num=1;
    int den=1;
    // for(int i=2;i<=n;i++){
    //     num=num*(n+i);
    //     den=den*i;
    // }
    // cout<<(num/den)<<endl;

    return 0;
}
