#include <bits/stdc++.h>
using namespace std;
#define int  long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            x = x*a;
        }
        if (2023 % x == 0)
        {
            cout << "YES" << endl;
            cout << 2023 / x << " ";
            for (int i = 1; i <= k - 1; i++)
            {
                cout << "1"<< " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}