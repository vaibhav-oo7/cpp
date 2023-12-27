#include<bits/stdc++.h>

using namespace std;

int x,y;
int extendedeuclid(int a, int b){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    else{
        int ans = extendedeuclid(b,a%b);
        int temp1 = y;
        int temp2 = x-(a/b)*y;
        x=temp1;
        y=temp2;
        return ans;
    }
}

int multiplicativemoduloinverse(int a, int m){
    if(__gcd(a,m)==1){
        int ans = extendedeuclid(a,m);
        return (x+m)%m;
    }
    return 0;
}
int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    int n;
    cin>>n; 
    vector<int>mod(n);
    vector<int>rem(n);
    int product = 1;
    for(int i=0;i<n;i++){
        cin>>mod[i];
        product*=mod[i];
    }

    for(int i=0;i<n;i++){
        cin>>rem[i];
    }

    int ans = 0 ;
    for(int i=0;i<n;i++){
        int ppi = (product/mod[i]);
        ans=ans+((ppi*rem[i]*multiplicativemoduloinverse(ppi,mod[i]))%product);
    }
    cout<<ans%product<<endl;
    return 0;
}
