#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = 0;

    ordered_set prev, left;
    left.insert(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int w = prev.order_of_key(arr[i]);
        int w1 = left.order_of_key(arr[i]);

        if (w == 0 && w1 != 0)
        {
            prev.insert(arr[i]);
            result++;
        }

        left.insert(arr[i]);
    }

    cout << result << endl;
}

int main()
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
