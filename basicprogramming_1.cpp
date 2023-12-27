#include<bits/stdc++.h>
#define int long long 

using namespace std;


int median (int a, int b, int c){
    vector<int>v = {a,b,c};
    sort(v.begin(),v.end());
    return v[1];
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,t;
    cin>>n>>t; //no of elements in array
    vector<int>arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    if(t==1){
        cout<<7<<endl;
    }
    else if(t==2){
        if(arr[0]==arr[1]) cout<<"Equal"<<endl;
        if(arr[0]>arr[1]) cout<<"Bigger"<<endl;
        if(arr[0]<arr[1]) cout<<"Smaller"<<endl;
    }
    else if(t==3){
        cout<<median(arr[0],arr[1],arr[2])<<endl;

    }
    else if(t==4){
        int sum =  0 ;
        for(auto it : arr) sum+=it;
        cout<<sum<<endl;
    }
    else if(t==5){
        int s =  0 ;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]%2==0)s+=arr[i];
        }
        cout<<s<<endl;
    }
    
    else if(t==6){
        string s =  "" ;
        for(int i = 0 ; i < n ; i++){
            arr[i] = arr[i]%26;
            s+=(char)(97+arr[i]);
        }
        cout<<s<<endl;

    }
    else if(t==7){
        vector<int>vis(n,0);
        int index = 0;
        while(true){
            if(index>=n || index<0){
                cout<<"Out"<<endl;
                break;                     
            } 
            if(vis[index]==1){
                cout<<"Cyclic"<<endl;
                break;
            } 
            if(index==n-1){ 
                cout<<"Done"<<endl;
                break;
            }
            vis[index]=1;
            index = arr[index]; 
        }

    }

    return 0;
}
