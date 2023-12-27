#include<bits/stdc++.h>

using namespace std;
int grcd (int a, int b){
    return (b==0)? a : grcd(b,a%b);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a,b;
    cin>>a>>b; //no of elements in array
    cout<<grcd(a,b)<<endl;

    return 0;
}
