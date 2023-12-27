#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    long long int n,a,b;
    cin>>n>>a>>b; //no of elements in array
    vector<long long int>arr;

    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    long long int count=0;
    for(int i=0;i<(1<<n);i++){
        long long int x = i;
        long long int j=0;
        long long int sum=INT_MAX;
        while(x>0){
            long long int last_bit = (x&1);
            if(last_bit){
                if(sum==INT_MAX) sum=arr[j];
                else sum+=arr[j];
            }
            j++;
            x=x>>1;
        }
        if(sum>=a && sum<=b) count++;
    }
    cout<<count+1<<endl;
}
