#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    char s[100];
    cin>>s;

    int n = strlen(s);

    int maxpossible = pow(2,n);
    for(int i=0;i<(1<<n);i++){
        int x = i;
        int j=0;
        while(x>0){
            int last_bit = (x&1);
            if(last_bit){
                cout<<s[j];
            }
            j++;
            x=x>>1;
        }
        cout<<endl;
    }
    return 0;
}
