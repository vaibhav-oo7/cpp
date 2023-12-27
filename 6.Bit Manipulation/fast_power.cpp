#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,k;
    cin>>n>>k; //no of elements in array
    int ans = 1;
    while(k>0){
        int last_bit = (k&1);
        if(last_bit){
            ans=ans*n;
        }
        n=n*n;
        k=k>>1;
    }
    cout<<ans<<endl;
    return 0;
}
