#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    float x = 1;
    int people = 0;
    float num = 365;
    float den = 365;
    float prob;
    cin>>prob;
    while(x>1-prob){
        x=x*num/den;
        num--;
        people++;

    }
    cout<<people<<endl;


    return 0;
}
