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

int n, h;
vector<int> arr;

bool check(int mid)
{
    int total = 0;
    for (int i = 0; i < n - 1; i++)
    {
        total = total + min(arr[i + 1] - arr[i], mid);
    }
    total += mid;
    if (total >= h)
        return true;
    else
        return false;
}
void ab_d()
{
    cin >> n >> h;
    arr.clear();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int l = 0;
    int r = 1e18;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid))
        {
            r = mid - 1;
            ans = mid;
            //cout<<mid<<endl;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
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
    w(x)
        ab_d();

    return 0;
}