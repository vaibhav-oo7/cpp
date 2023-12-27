#include <bits/stdc++.h>
#define int long long
using namespace std;
//vector<int> dp(1000000005, 0);

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t; // no of elements in array
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>dp(n,0);
        dp[1] = 2;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + (i * 2) + (i - 1);
        }
        vector<int>::iterator point;
        point = lower_bound(dp.begin(), dp.end(), n);
        int index = point - dp.begin();
        if (dp[index] > n)
            index--;
        int count = 0;
        for(int i=index;i>=1;i--){
            n=n-dp[index];
            if(n<0) break;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
