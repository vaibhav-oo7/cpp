#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    
    while(t--) {
        int x,y,n;
    cin>>x>>y>>n;
    int sum = (n-1)*(n)/2;
    if(sum>(y-x)){
        cout<<-1<<endl;
    }
    else{
        vector<int>ans(n);
        ans[0]=x;
        ans[n-1]=y;
        int count=1;
        for(int i=n-2;i>=1;i--){
            ans[i]=ans[i+1]-count;
            count++;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}
