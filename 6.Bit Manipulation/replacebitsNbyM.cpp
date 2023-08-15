#include<bits/stdc++.h>
using namespace std;

int clearbits(int n, int i, int j){
    int a = (~0)<<(i+1);
    int b = ~(0<<j);
    int mask = a|b;
    return (n&mask);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,m,i,j;
    cin>>n>>m>>i>>j; //no of elements in array
    
    int cleared_n = clearbits(n,i,j);
    int mask = m<<i;
    int ans  = cleared_n|mask;
    cout<<ans<<endl;
    return 0;
}
