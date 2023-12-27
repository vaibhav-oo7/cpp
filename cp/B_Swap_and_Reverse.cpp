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
        int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    else{
        string s_even="";
        string s_odd="";
        for(int i=0;i<s.size();i++){
            if(i%2==0)s_even+=s[i];
            else s_odd+=s[i];
        }
        sort(s_even.begin(),s_even.end());
        sort(s_odd.begin(),s_odd.end());
        string ans = "";
        int j=0;
        int k=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0)ans+=s_even[j++];
            else ans+=s_odd[k++];
        }
        cout<<ans<<endl;

    }
    }

    return 0;
}
