#include <bits/stdc++.h>

using namespace std;

int main()
{
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
    long long t;
    cin >> t; // no of elements in array
    while (t--)
    {
        long long n;
		long long ans = 0;
        cin >> n;
        long long max_mask = 1LL<<8-1LL;
        for (long long i = 1; i <= max_mask; i++)
        {
            long long denominator = 1LL;
            long long setbits = __builtin_popcount(i);
            for (int j = 0; j <= 7; j++)
            {
                if (i & (1 << j))
                {
                    denominator = denominator * primes[j];
                }
            }
            if (setbits & 1)
                ans += n / denominator;
            else
                ans -= n / denominator;
        }
        cout << ans << endl;
    }

    return 0;
}
