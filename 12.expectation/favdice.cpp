#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t; //no of elements in array
    while(t--){
        int n;
        cin>>n;
        double ans=0;
        for(int i=1;i<=n;i++){
            ans+=(double)((double)(1/i)*(double)(n));
        }
        printf("%.2lf\n",ans);
    }

    return 0;
}
