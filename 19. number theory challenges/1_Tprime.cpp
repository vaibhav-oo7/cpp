#include<bits/stdc++.h>

using namespace std;
void T_prime(int a){
    bool flag = 1;
    for(int i = 2 ; i <= sqrt(a); i++){
        if(a%i==0 && i==sqrt(a)){
            cout<<"YES"<<endl;
            flag=!flag;
            break;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }

}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; //no of elements in array
    vector<int>arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    for(int i = 0 ; i < n ; i++){
        T_prime(arr[i]);
    }

    return 0;
}
