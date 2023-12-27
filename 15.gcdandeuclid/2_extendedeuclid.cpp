#include<bits/stdc++.h>

using namespace std;

int x,y,GCD;
void extendedEuclid(int a, int b){
    if(b==0){
        x=1;
        y=0;
        cout<<x<<" "<<y<<endl;
        GCD=a;
        return;
    }
    else{
        extendedEuclid(b,a%b);
        // acx + bcy = gcd (b,a%b)
        int Cx = y;
        int Cy = x - (a/b)*y;

        x=Cx;
        y=Cy;
        cout<<x<<" "<<y<<endl;

    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,m;
    cin>>n>>m; //no of elements in array
    extendedEuclid(n,m);
    cout<<x<<" "<<y<<endl;

    return 0;
}
