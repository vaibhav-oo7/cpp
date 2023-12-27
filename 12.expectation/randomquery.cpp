#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n;
    cin>>n; //no of elements in array
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>distinct(n+1);
    distinct[0]=0;
    double sum = 0.0 ;
    vector<int>last(1000005,0); 
    for(int i=1;i<=n;i++){
        distinct[i]=distinct[i-1]+(i-last[arr[i]]);
        last[arr[i]]=i; 
        sum+=distinct[i];
    }
    double ans = 0.0;
    ans = (2*(sum - n) + n)/(n*n*1.0);
    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}
