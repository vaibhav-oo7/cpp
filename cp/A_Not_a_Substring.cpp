#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define endl "\n"
#define fi first
#define se second
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define in insert
#define ub upper_bound
#define lb lower_bound
#define int long long
#define vi vector<int>
#define bs binary_search
#define pii pair<int, int>
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int result = 0;

    ordered_set A, B;
    B.insert(a[0]);

    for (int i = 1; i < n; i++)
    {
        int w = A.order_of_key(a[i]);
        int w1 = B.order_of_key(a[i]);

        if (w == 0 && w1 != 0)
        {
            A.insert(a[i]);
            result++;
        }

        B.insert(a[i]);
    }

    cout << result << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
