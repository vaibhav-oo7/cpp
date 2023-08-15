#include<bits/stdc++.h>

using namespace std;
int decimaltobin(int n){
    int p=1;
    int ans=0;
    while(n>0){
        int last = n&1;
        ans+=p*last;
        p=p*10;
        n = n>>1;
    }
    return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; //no of elements in array
    cout<<decimaltobin(n)<<endl;
    return 0;
}
