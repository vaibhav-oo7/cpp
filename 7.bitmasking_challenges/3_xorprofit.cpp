
// Problem Name: XOR Profit Problem
// Problem Difficulty: 2
// Problem Constraints: l <= r <= 1000
// Problem Description:
// We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

// Input Format: We are given two integers x and y
// Sample Input: 5
// 6
// Output Format: Print the maximum value of a XOR b
// Sample Output: 3
#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    //brute approach
    // int a,b;
    // cin>>a>>b; //no of elements in array
    // int ans=0;
    // for(int i=a;i<=b;i++){
    //     for(int j=a;j<=b;j++){
    //         ans=max(ans,i^j);
    //     }
    // }
    // cout<<ans<<endl;

    long long a,b;
    cin>>a>>b;
    if(a==b) {
        cout<< 0<<endl;
        return 0;
    }
    else{
        long long xored = a^b;
        long long msb=0;
        while(xored>0){
            msb++;
            xored=xored>>1;
        }
        cout<<(1LL<<msb)-1<<endl;
    }
    return 0;
}
