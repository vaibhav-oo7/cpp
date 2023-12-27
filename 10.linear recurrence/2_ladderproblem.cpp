#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,k;
    cin>>n>>k; //no of elements in array
    vector<int>arr(k,0);

    for(int i=1;i<=k;i++){
        arr.push_back(i);
    }
    vector<vector<int>>transform(k+1,vector<int>(k+1,0));
    for(int i=0;i<n;i++){
        if(i==0)transform[0][0]=1;
    }

    return 0;
}
