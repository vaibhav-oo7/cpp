#include<bits/stdc++.h>
#define int long long
using namespace std;
//int p[10000005];
// void seive(int n){
//     for(int i=3;i<=10000000;i+=2){
//         p[i]=1;
//     }

//     for(int i=3;i<=10000000;i+=2){
//         if(p[i]==1){
//             for(int j=i*i;j<=10000000;j+=i){
//                 p[j]=0;
//             }
//         }
//     }
//     p[2]=1;
//     p[0]=p[1]=0;
// }

int factor(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return 1;
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;
    //seive(t);
    while(t--){
        int l,r;
        cin>>l>>r;
        if((l==1 && r==3) || (l==2 && r==2)|| (l==2 && r==3)){
            cout<<-1<<endl;
            continue;
        }
        if(l%2==0 && l/2!=1){
            cout<<(l-2)<<" "<<(2)<<endl;
            continue;
        }
        if(r%2==0 && r/2!=1){
            cout<<(r-2)<<" "<<(2)<<endl;
            continue;
        }
        if(r-l>1){
            l++;
            cout<<(l-2)<<" "<<(2)<<endl;
            continue;
        }
        if(l==r){
            int x = factor(l);
            if(x==1){
                cout<<-1<<endl;
                continue;
            }
            else{
                int one = l-x;
                //x--;
                cout<<one<<" "<< (x)<<endl;
            }
        }

    }
    

    return 0;
}
