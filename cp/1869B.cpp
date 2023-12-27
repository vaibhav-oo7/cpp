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
#define trace(x) cerr << #x << ": " << x << " " << endl;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void ab_d()
{
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<int, int>> citi;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            citi.push_back({x, y});
        }
        pair<int, int> src = citi[a - 1];

        pair<int, int> dest = citi[b - 1];

        if (n == 2)
        {
            int cost1 = abs(dest.first - src.first) + abs(dest.second - src.second);
            cout << cost1 << endl;
            continue;
        }
        if (a <= k && b <= k)
        {
            cout << 0 << endl;
            continue;
        }
        if (a <= k)
        {
            int minidest = INT_MAX;
            for (int i = 0; i < k; i++)
            {
                minidest = min(minidest, (abs(dest.first - citi[i].first) + abs(dest.second - citi[i].second)));
            }
            cout << minidest << endl;
            continue;
        }
        if (b <= k)
        {
            int minisrc = INT_MAX;
            for (int i = 0; i < k; i++)
            {
                minisrc = min(minisrc, (abs(src.first - citi[i].first) + abs(src.second - citi[i].second)));
            }
            cout << minisrc << endl;
            continue;
        }
        else
        {

            int cost1 = abs(src.first - dest.first) + abs(src.second - dest.second);
            int cost3 = 4e9 + 1;
            int minisrc = 4e9 + 1;
            int minidest = 4e9 + 1;
            for (int i = 0; i < k; i++)
            {
                minisrc = min(minisrc, (abs(src.first - citi[i].first) + abs(src.second - citi[i].second)));

                minidest = min(minidest, (abs(citi[i].first - dest.first) + abs(citi[i].second - dest.second)));
            }
            for (int i = k; i < n; i++)
            {
                cost3 = min(cost3, (abs(src.first - citi[i].first) + abs(src.second - citi[i].second) + abs(citi[i].first - dest.first) + abs(citi[i].second - dest.second)));
            }

            int cost2 = minisrc + minidest;
            cout << min(cost1, min(cost2, cost3)) << endl;
            continue;
        }
    }

    return 0;
}