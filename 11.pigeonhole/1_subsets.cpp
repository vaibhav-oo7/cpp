#include <bits/stdc++.h>

using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n; // no of elements in array
        long long int arr[100005];
        memset(arr, 0, sizeof(arr));
        long long int sum = 0;
        arr[0] = 1;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            sum += x;
            sum = sum % n;
            sum = (sum + n) % n;

            arr[sum]++;
        }
        long long int ans = 0;
        for (long long int i = 0; i < n; i++)
        {
            long long int m = arr[i];
            ans += (m) * (m - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
