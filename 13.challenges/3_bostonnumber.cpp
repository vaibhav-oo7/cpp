#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    int n1;
    cin>>n;
    n1=n; 
    vector<int> primes;
    int sum2 = 0;
    while(n%2==0){
        n=n/2;
        sum2+=2;
        primes.push_back(2);
    }
    for(int i=3;i<=sqrt(n);i=i+2){
        while(n%i==0){
            primes.push_back(i);
            int div=i;
            while(div>0){
                sum2+=(div%10);
                div=div/10;
            }
            n=n/i;
        }
    }
    if(n>2){
        while(n>0){
            sum2+=(n%10);
            n=n/10;
        }
        primes.push_back(n);
    }
    int sum1 = 0;
    while(n1>0){
        sum1+=(n1%10);
        n1=n1/10;
    }
    if(sum1==sum2) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
