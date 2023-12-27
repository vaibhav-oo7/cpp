#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define range(a, b) substr(a, b - a + 1)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define trace(x) cerr << #x << ": " << x << " " << endl;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void ab_d()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }

    vector<int> more;

    for (auto it : count)
    {
        if (it.second >= 2)
        {
            more.push_back(it.first);
        }
    }

    // if(more.size()==1 && count[more[0]]==3){
    //     //vector<int>ans;
    //     int count = 1 ;
    //     bool two = true ;
    //     for(int i = 0 ; i < n ; i++){
    //         if(more[0]==arr[i]){
    //             if(count==1) arr[i] = count++;
    //             else if(count==2) arr[i] = count++;
    //             else if(count==3) arr[i] = count;
    //         }
    //         else arr[i] = 1 ;
    //     }

    //     for(auto it : arr){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    //     return;
    // }

    if (more.size() <= 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        vector<int> ans;
        bool one = true;
        bool two = true;
        for (int i = 0; i < n; i++)
        {
            if (more[0] == arr[i])
            {
                if (one)
                {
                    ans.push_back(2);
                    one = !one;
                }
                else
                    ans.push_back(1);
            }
            else if (more[1] == arr[i])
            {
                if (two)
                {
                    ans.push_back(3);
                    two = !two;
                }
                else
                    ans.push_back(1);
            }
            else
            {
                ans.push_back(1);
            }
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    w(x)
        ab_d();

    return 0;
}