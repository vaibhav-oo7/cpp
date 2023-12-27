#include<bits/stdc++.h>
#define int long long
using namespace std;
int p[1000005];
void seive(int n){
    for(int i=3;i<=1000000;i+=2){
        p[i]=1;
    }

    for(int i=3;i<=1000000;i+=2){
        if(p[i]==1){
            for(int j=i*i;j<=1000000;j+=i){
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[0]=p[1]=0;
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n,m;
    cin>>n>>m; 
    //vector<int>arr;
    if(j==0){
        memset(p,0,sizeof(p));
        seive(1000);
    }
    int count = 0;
    for(int i=n;i<=m;i++){
        if(p[i]==1){
            count++;
            // arr.push_back(i);
            // cout << i <<" ";
        }
    }
    cout<<count<<endl;
    }
    return 0;
}
