#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t fastpow(int n, int power){
    if(power==0) return 1;
    if(power==1) return n;
    else{
        int subproblem = fastpow(n,power/2);
        if(power&1) return n*subproblem*subproblem;
        else return subproblem*subproblem;
    }
}
int32_t main(){

    int n,power;
    cin>>n>>power; //no of elements in array
    
    cout<<fastpow(n,power)<<endl;

    return 0;
}
