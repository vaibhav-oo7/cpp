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

void ab_d()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> arr[i][j];
            if (j == 0)
                x = x ^ arr[i][j];
        }
    }

    if (x > 0)
    {
        cout << "TAK" << endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout << 1 << " ";
        }
        return;
    }
    int ans_r = -1, ans_c = -1;
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        int f = arr[i][0];
        for (int j = 1; j < m; j++)
        {
            /* code */
            if (arr[i][j] != f)
            {
                ans_c = j;
                ans_r = i;
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "TAK" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == ans_r)
                cout << ans_c+1 << " ";
            else
                cout << 1 << " ";
        }
    }
    else
    {
        cout << "NIE" << endl;
        return;
    }
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