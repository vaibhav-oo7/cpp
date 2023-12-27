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
    int n;
    cin>>n; //no of elements in array
    int ans = INT_MAX ;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int smallans = x ;
        if(y%2==0){
            smallans+=((y-2)/2);
        }
        else{
            smallans+=(y/2);
        }
        ans=min(ans,smallans); 
    }
    cout<<ans<<endl;
}

    return 0;
}
