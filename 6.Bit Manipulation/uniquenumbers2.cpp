/*
Problem Name: Unique Numbers - II
Problem Difficulty: None
Problem Constraints: n < 10^5
Problem Description:
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format: First line contains the number n. Second line contains n space separated number.
Sample Input: 4
3 1 2 1
Output Format: Output a single line containing the unique numbers separated by space
Sample Output: 2 3
*/

#include<bits/stdc++.h>
using namespace std;
int getBit(int n, int i){
    int mask = (1<<i);
    int ans = (n&mask)>0 ? 1 : 0;
    return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; 
    vector<int>arr;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans=ans^x;
        arr.push_back(x);
    }
    int dup2 = ans;
    int index = 0;
    while(ans>0){
        if((ans&1)==1){
            break;
        }
        index++;
        ans=ans>>1;
    }
    int dup1=0;
    for(int i=0;i<n;i++){
        if(getBit(arr[i],index)==1){
            dup1=dup1^arr[i];
        }
    }
    dup2 = dup2^dup1;
    cout<<min(dup2,dup1)<<" "<<max(dup1,dup2)<<endl;

    return 0;
}
