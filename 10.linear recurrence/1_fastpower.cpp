#include<bits/stdc++.h>

using namespace std;

int fastpow(int n, int power){
    if(power==0) return 1;
    if(power==1) return n;
    else{
        int subproblem = fastpow(n,power/2);
        if(n&1) return n*subproblem*subproblem;
        else return subproblem*subproblem;
    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,power;
    cin>>n>>power; //no of elements in array
    
    cout<<fastpow(n,power)<<endl;

    return 0;
}
