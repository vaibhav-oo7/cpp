#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //given 2n+1 numbers where n are duplicate find the unique element
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    //logic: two identical number's xor is 0 and xor is associative end up giving zero of n duplicate numbers and 0 ka zero with any other number will give that unique number itself.
    cout<<ans<<endl;
}
