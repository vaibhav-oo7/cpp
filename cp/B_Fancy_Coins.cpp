#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int t;
   cin>>t;
   while(t--){
    long long n , k , a, b;
    cin>>n>>k>>a>>b;  
    if(n < a){
        cout<<0<<endl;
    }
    else if(k*b == n){
         cout<<0<<endl; 
    }
    else {
        long long req = ceil((double)(n - a)/k);
        if(req*k > n) req--;
        if(req <= b){
          cout<<((a >= (n - (req)*k))?0:(n - (req)*k) - a)<<endl;
        }
        else{
          cout<<req - b + ((a >= (n - (req)*k))?0:(n - (req)*k) - a)<<endl;
        }
    }
   }
 
   return 0;
}

// int main2(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,v,a,b;
//         cin>>n>>v>>a>>b;
//         if(n<a){
//             cout<<0<<endl;
//         }
//         else if(v*b==n){
//             cout<<0<<endl;
//         }
//         else{
//         long long x = ceil((double)(n-a)/v);
//         if(v*x>n) x--;
//         if(x<=b){
//             if(a>=(n-(x)*v)) cout<<0<<endl;
//             else cout<<((n-(x)*v)-a)<<endl;
//         }
//         else{
//             int ans = x-b;
//             if(a>=(n-(x)*v)) ans=ans+0;
//             else ans=ans+(n-(x)
//             cout<<x-b+((b >= (n - (x)*v))?0:(n - (x)*v) - b)<<endl;
//         }
//         }

//     }
// }