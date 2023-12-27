#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n; //no of elements in array
    vector<int>arr;
    arr.push_back(n);
    if(n%2==1) {
        arr.push_back(--n);
    }
    while(n!=2){
        int power_2=1;
        while(n%(power_2*2)==0){
            power_2=power_2*2;
        }
        if(power_2==n) power_2/=2;
        n-=power_2;
        arr.push_back(n);
    }
    arr.push_back(1);
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
