#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
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
    if(n>=130) cout<<"Yes"<<endl;
    else{
        bool flag = 0;
        set<int> s(arr.begin(), arr.end());
        vector<int>arr2;
        for(auto it: s){
            arr2.push_back(it);
        }
        n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int x = arr2[i]^arr2[j]^arr2[k];
                    if(binary_search(arr2.begin(),arr2.end(),x)==true) {
                        flag=1;
                    }
                }
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}

