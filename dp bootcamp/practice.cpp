#include<bits/stdc++.h>

using namespace std;
long long minIncrementOperations(vector<int>& nums, int k) {
        long long ans = 0;
        //if(nums.size()<3) return 0;
        vector<int>dp(nums.size()+2,0);
        if(nums[0]<k) dp[0] = k-nums[0];
        if(nums[1]<k) dp[1] = k-nums[1];
        
        for(int i = 2 ; i < nums.size() ; i++){
            int maxi = max(k-nums[i],max(nums[i-1]+dp[i-1],nums[i-2]+dp[i-2]));
            cout<<maxi<<endl;
            if(maxi<k){
                int x = min(dp[i-1],min(dp[i-2],k-maxi));
                cout<<x<<endl;
                ans = ans + x;
            }
            if(nums[i]<k) dp[i]=k-nums[i];
        }
        
        return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,k;
    cin>>n>>k; //no of elements in array
    vector<int>arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<minIncrementOperations(arr,k)<<endl;
    return 0;
}
