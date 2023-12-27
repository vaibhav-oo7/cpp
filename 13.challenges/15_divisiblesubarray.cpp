#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[100005];
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t ;
    cin>>t;
    while(t--){
    int n;
    cin>>n; //no of elements in array
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        sum=(sum+n)%n;
        arr[sum]++;
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        int m = arr[i];
        ans+=(m*(m-1)/2);
    }
    cout<<ans<<endl;
    }

    return 0;
}
