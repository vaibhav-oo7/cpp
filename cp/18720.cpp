#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int maxi = max(a,b);
        int less = (maxi==a) ? b : a;
        if(a==b){
            cout<<0<<endl;
            continue;;
        }
        if(c>maxi){
            cout<<1<<endl;
            continue;
        }
        int ans = 0 ;
        while(maxi>less){
            maxi-=c;
            less+=c;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
