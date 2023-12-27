#include<bits/stdc++.h>
#define int long long
using namespace std;
bitset<10000005>b;
vector<int>primes;
void seive(int n){
    b.set();
    for(int i=2;i<=10000000;i+=2){
        b[i]=0;
    }
    for(int i=3;i<=10000000;i+=2){
        if(b[i]){
            for(int j=i*i;j<=10000000;j+=i){
                b[j]=0;
            }
        }
    }
    b[0]=b[1]=0;
    b[2]=1;
    for(int i=0;i<=10000000;i++){
        if(b[i])primes.push_back(i);
    }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; //no of elements in array
    seive(1000);
    bool flag = 1;
    if(n<=10000000){
        if(b[n]==0) flag=0;
    }
    else{
    for(int i=2;i<primes[i]*primes[i];i++){
        if(n%i==0){
            flag=0;
            break;
        };
    }
    }
    if(flag) cout<<"Prime"<<endl;
    else cout<<"non-prime"<<endl;
    return 0;
}
