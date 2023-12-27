// Problem Name: Playing With Bits
// Problem Difficulty: 1
// Problem Constraints: Q,a,b are integers.
// Problem Description:
// Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive) 

// Input Format: Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.
// Sample Input: 2
// 1 1
// 10 15
// Output Format: Q lines, each containing an output for your query.
// Sample Output: 1
// 17

#include<bits/stdc++.h>

using namespace std;
int countsetbits(int i){
    int ans=0;
    while(i>0){
        i=i&(i-1);
        ans++;
    }
    return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t; //no of elements in array
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        int ans=0;
        for(int i=a;i<=b;i++){
            ans+=countsetbits(i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
