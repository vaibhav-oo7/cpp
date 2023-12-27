#include <bits/stdc++.h>
#define int long long
using namespace std;
int X, Y, GCD;
int extendedEuclid(int a, int b)
{
    if (b == 0)
    {
        X = 1;
        Y = 0;
        GCD = a;
        return GCD;
    }
    extendedEuclid(b, a % b);
    int Cx = Y;
    int Cy = X - (a / b) * Y;
    X = Cx;
    Y = Cy;
    return GCD;
}
int Modinverse(int a, int m)
{
    if (__gcd(a, m) == 1)
    {
        int ans = extendedEuclid(a, m);
        if (X < 0)
            X = X + m;
        return X;
    }
    return 0;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, p, w, d;
        cin >> n >> p >> w >> d; // no of elements in array
        // eqn : wx+dy=p
        if ((w * n) < p)
        {
            cout << -1 << endl;
            break;
        }
        int gcd = extendedEuclid(w, d);
        if (p % gcd != 0)
        {
            cout << -1 << endl;
            break;
        }
        int p1 = p / gcd;
        int w1 = w / gcd;
        int d1 = d / gcd;
        // now i need to solve xw1+yd1=p1
        // therefore first make x term 0 by taking modulus of whole eqn with w1
        // we get yd1%w1=p1%w1 hence y can be found.
        int y = ((p1 % w1) * Modinverse(d1, w1)) % w1;
        int x = (p1 - (y * d1)) / w1;
        if ((x + y) > n)
        {
            cout << -1 << endl;
            break;
        }
        if (x < 0)
        {
            cout << -1 << endl;
            break;
        }
        int z = n - x - y;

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
