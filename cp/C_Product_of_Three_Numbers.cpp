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
    vector<pair<int,int>>factors;
    for(int i=0;(arr[i]*arr[i])<=n;i++){
        int prime = arr[i];
        if(n%prime==0){
            int count = 0;
            while(n%prime==0){
                count++;
                n=n/prime;
            }
            factors.push_back({prime,count});
        }
    }
    if(n>1) factors.push_back({n,1});

    if(factors.size()==1){
        if(factors[0].second>=6){
            cout<<"YES"<<endl;
            int x = factors[0].first;
            int a = x;
            int b = x*x;
            int c = pow(x,factors[0].second-3);
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    if(factors.size()==2){
        if(factors[0].second+factors[1].second>=4){
            cout<<"YES"<<endl;
            int x = factors[0].first;
            int y = factors[1].first;
            int z = 1;
            for(int i=0;i<factors.size();i++){
                z*=(pow(factors[i].first,factors[i].second-1));
            }
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    if(factors.size()>=3){
        cout<<"YES"<<endl;
        int x = pow(factors[0].first,factors[0].second);
        int y = pow(factors[1].first,factors[1].second);
        int z = 1;
        for(int i=2;i<factors.size();i++){
            z*=(pow(factors[i].first,factors[i].second));
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    memset(p,0,sizeof(p));
    seive(1000);
    for(int i=0;i<1000000;i++){
        if(p[i]==1){
            arr.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; //no of elements in array
        primefactor(n);
    }
    
}
