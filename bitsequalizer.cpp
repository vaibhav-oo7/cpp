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


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x;
    cin >> x;
    for (int k = 1; k <= x; k++)
    {
        string s, t;
        cin >> s >> t;
        int count1 = 0;
        int count2 = 0;
        int q  = 0 ;
        for (auto it : s)
        {
            if (it == '1')
                count1++;
            if (it == '?')
                q++;
        }
        for (auto it : t)
        {
            if (it == '1')
                count2++;
        }

        if (count1 > count2)
        {
            cout <<"Case "<<k<<": "<<-1<<endl;
            continue ;
        }
        int ans = 0;
        if (count1 <= count2)
        {
            int dikkat = 0;
            int dikkat2 = 0 ;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i]=='0' && t[i]=='1')
                    dikkat++;
                if(s[i]=='1' && t[i]=='0'){
                    dikkat2++;
                }
            }
            ans = max(dikkat,dikkat2) + q ;
            cout <<"Case "<<k<<": "<<ans<<endl;
        }
    }

    return 0;
}