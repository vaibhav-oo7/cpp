#include<bits/stdc++.h>

using namespace std;

int fastmodpower(int a, int b, int m){
    int res=1;
    while(b>0){
        if(b&1){
            res=((res*a)%m); 
        }
        a=((a*a)%m);
        b=b>>1;
    }
    return res;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    string s;
    cin>>s;
    int m ;
    cin>>m;
    int res=0;
    int power=s.size()-1;
    for(int i=0;i<s.size();i++){
        int digit = s[i]-'0';
        int modbigpow = fastmodpower(10,power,m);
        power--;
        res = (res+ (modbigpow*(digit%m))%m)%m;
    }
    cout<<res<<endl;
    return 0;
}
