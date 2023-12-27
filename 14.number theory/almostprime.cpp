#include <bits/stdc++.h>
#define int long long
using namespace std;
bitset<10000005> b;
vector<int> primes;
void seive(int n)
{
    b.set();
    for (int i = 2; i <= 10000000; i += 2)
    {
        b[i] = 0;
    }
    for (int i = 3; i <= 10000000; i += 2)
    {
        if (b[i])
        {
            for (int j = i * i; j <= 10000000; j += i)
            {
                b[j] = 0;
            }
        }
    }
    b[0] = b[1] = 0;
    b[2] = 1;
    for (int i = 0; i <= 10000000; i++)
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
    int n;
    cin >> n; // no of elements in array
    seive(1000);
    int ans = 0;

    for (int j = 1; j <= n; j++)
    {
          
            int count = 0;
            set<int>st;
            for (int i = 0; primes[i]<=j; i++)
            {
                
                if (j % primes[i] == 0)
                {
                    st.insert(primes[i]);
                }
            }
            if(st.size()==2) ans++;
        
    }
    cout<<ans<<endl;
    return 0;
}
