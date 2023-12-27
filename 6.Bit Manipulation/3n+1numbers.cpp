#include<bits/stdc++.h>

using namespace std;
int decimaltobin(int n){
    int p=1;
    int ans=0;
    while(n>0){
        int last = n&1;
        ans+=p*last;
        p=p*10;
        n = n>>1;
    }
    return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n1;
    cin>>n1; //no of elements in array
    vector<int>arr;

    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>sum(64);
    for(int i=0;i<n1;i++){
        int n =arr[i];
        int ans = decimaltobin(arr[i]);
        int index=0;
        while(n>0){
            sum[index]+=(n&1);
            n=n>>1;
            index++;
        }
    }
    for(int i =0;i<64;i++){
        sum[i]=sum[i]%3;
    }
    int num = 0;
    for(int i=0;i<64;i++){
        num+=(sum[i]*pow(2,i));
    }
    cout<<num<<endl;
    return 0;
}
