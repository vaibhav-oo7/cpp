#include <bits/stdc++.h>
#define int long long
using namespace std;
int n = 100000;
bitset<100005> b;
vector<int> primes;
void seive()
{
    b.set();
    for (int i = 2; i <= n; i += 2)
    {
        b[i] = 0;
    }
    for (int i = 3; i <= n; i += 2)
    {
        if (b[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                b[j] = 0;
            }
        }
    }
    b[0] = b[1] = 0;
    b[2] = 1;
    for (int i = 0; i <= n; i++)
    {
        if (b[i])
            primes.push_back(i);
    }
}


int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n; // no of elements in array
        seive();
        int segment[n - m + 1];
        for (int i = 0; i < n-m+1; i++)
        {
            segment[i] = 0;
        }
        for (auto x : primes)
        {

            if ((x * x) > n)
                break;
            
            int start = (m / x) * x;
            if(x>=m && x<=n){
                start=(x*2);
            }
            for (int i = start; i <= n; i = i + x)
            {
                if (i < m)
                    continue;
                
                segment[i - m] = 1;
            }
        }

        for (int i = m; i <= n; i++)
        {
            if (segment[i - m] == 0 && i != 1)
            {
                cout << i << endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
