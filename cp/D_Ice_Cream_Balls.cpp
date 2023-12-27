#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n; //no of elements in array

    int count = 2;
    int sum=1;
    while(sum<n){
        int x = count-1;
        sum=(x*(x+1)/2);
        count++;
    }
    cout<<count<<endl;
    }

    return 0;
}
