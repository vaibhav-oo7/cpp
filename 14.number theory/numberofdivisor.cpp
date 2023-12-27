#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int>arr;
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

void primefactor(int n){
    vector<int>factors;
    for(int i=0;(arr[i]*arr[i])<=n;i++){
        int prime = arr[i];
        if(n%prime==0){
            int count = 0;
            while(n%prime==0){
                count++;
                n=n/prime;
            }
            factors.push_back(prime);
        }
    }
    if(n>1) factors.push_back(n);
    
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; //no of elements in array
    memset(p,0,sizeof(p));
    seive(1000);
    for(int i=0;i<1000000;i++){
        if(p[i]==1){
            arr.push_back(i);
        }
    }
    
    primefactor(n);
}
