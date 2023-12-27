#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;
int count(int n, int p)
{   
    int ratio=0;
    int i = p;
    while ((p) <= n)
    {
        ratio += (n / p);
        p = p * i;
    }
    return ratio;
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
        int n, r;
        cin >> n >> r; // no of elements in array
        if(n==1){
            cout<<0<<endl;
        }
        map<int, int> mp;
        while (r % 2 == 0)
        {
            r = r / 2;
            mp[2]++;
        }
        for (int i = 3; i <= sqrt(r); i = i + 2)
        {
            while (r % i == 0)
            {
                r = r / i;
                mp[i]++;
            }
        }
        if (r > 2)
        {
            mp[r]++;
        }
        int mini = INT_MAX;
        for (auto it : mp)
        {
            int p = it.first;
            int k = it.second;
            int ratio = count(n,p);
            
            mini = min(mini, ratio);
        }

        cout << mini << endl;
    }
    return 0;
}
