#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
// ques revolves around selecting n marbles and having r different marbles
        // we first take k different marbles now n-k spaces can be filled with any combination
        // selecting (m=n-k) m stars and k-1 bars as k different color balls which can be repeated
        // and n-k to be selected applying n+r-1Cr-1 we get ans as n-1Ck-1
        // read stars and bars online
        // ans = n-1Cr-1 = n-1!/r-1! * n-r!
        //               = n-1*n-2...n-r+1*/r-1*r-2....1

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        // if(n-r < r-1) {
        //     r=n-r+1;
        // }
        //doing this to reduce the length of loop as nCr=nCn-r work w/o this as well
        if (r == 1)
        {
            cout << 1 << endl;
        }
        
        else{
            int ans = 1;
            for (int i = n - 1; i >= (n - r + 1); i--)
            {
                ans *= i;
                ans /= (n - i);
            }
            cout << ans << endl;
        }
    }


    return 0;
}
