#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int p[10000005];
void seive(int n){
    for(int i=3;i<=10000000;i+=2){
        p[i]=1;
    }

    for(int i=3;i<=10000000;i+=2){
        if(p[i]==1){
            for(int j=i*i;j<=10000000;j+=i){
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
    int n;
    cin>>n; 
    vector<int>arr;
    memset(p,0,sizeof(p));
    seive(1000);
    for(int i=0;i<=n;i++){
        if(p[i]==1){
            arr.push_back(i);
            cout << i <<" ";
        }
    }
    return 0;
}
