#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    double n;
    cin>>n;
    double p = 1;
    double num = 365;
    double denom= 365;
    int people = 0; //no of elements in array
    while(p>(1-n)){
        p*=(double)(num/denom);
        num--;
        people++;
    }
    cout<<people<<endl;
    return 0;
}
