#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define range(a, b) substr(a, b - a + 1)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define trace(x) cerr << #x << ": " << x << " " << endl;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int solve (string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
    if(i==s1.size() || j==s2.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s1[i]==s2[j]) {
        return dp[i][j] = 1 + solve(s1,s2,i+1,j+1,dp);
    }
    else{
        int one  = solve(s1,s2,i+1,j,dp);
        int two = solve(s1,s2,i,j+1,dp);
        return dp[i][j] = max(one,two);
    }
}

void ab_d()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    
    // for (int i = 0; i <= n; i++)
    // {
    //     dp[i][0] = 0;
    // }
    // for (int i = 0; i <= m; i++)
    // {
    //     dp[0][i] = 0;
    // }

    

    int len = solve(s1,s2,0,0,dp);;
    for (int ind1 = 0; ind1 <= n; ind1++)
    {
        for (int ind2 = 0; ind2 <= m; ind2++)
        {
            if (dp[ind1][ind2]==-1)
                dp[ind1][ind2] = 0; 
        }
    }
    int i = n;
    int j = m;

    int index = len - 1;
    string str = "";
    for (int k = 1; k <= len; k++)
    {
        str += "$"; // dummy string
    }

    while (i >=0 && j >=0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            str[index] = s1[i - 1];
            index--;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
            j--;
    }
    cout << str;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ab_d();

    return 0;
}