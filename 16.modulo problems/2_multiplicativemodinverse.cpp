#include<bits/stdc++.h>

using namespace std;
int x,y,GCD;
int extendedEuclid(int a,int b){
    if(b==0){
        x=1;
        y=0;
        GCD=a;
        return GCD;
    }
    extendedEuclid(b,a%b);
    int Cx=y;
    int Cy=x-(a/b)*y;
    x=Cx;
    y=Cy;
    //cout<<x<<endl;
    return GCD;
}
int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    int n,m;
    cin>>n>>m; //no of elements in array
    cout<<extendedEuclid(n,m)<<endl;
    cout<<(x+m)%m<<endl;
    return 0;
}
