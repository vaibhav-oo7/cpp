
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod0 1000000007
#define mod1 998244353
#define inf 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define print(x) cout << x << "\n"
#define fr(i, a, b) for (int i = a; i < b; i++)
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define ai(a, n)                      \
    for (int ele = 0; ele < n; ele++) \
        cin >> a[ele];
#define ain(a, lb, rb)                   \
    for (int ele = lb; ele <= rb; ele++) \
        cin >> a[ele];
#define ao(a, n)                            \
    {                                       \
        for (int ele = 0; ele < (n); ele++) \
        {                                   \
            if (ele)                        \
                cout << " ";                \
            cout << a[ele];                 \
        }                                   \
        cout << '\n';                       \
    }
#define aout(a, lb, rb)                          \
    {                                            \
        for (int ele = (lb); ele <= (rb); ele++) \
        {                                        \
            if (ele > (lb))                      \
                cout << " ";                     \
            cout << a[ele];                      \
        }                                        \
        cout << '\n';                            \
    }
#define getunique(v)                      \
    {                                     \
        sort(all(v));                     \
        v.erase(unique(all(v)), v.end()); \
    }
#define readgraph(list, edges)      \
    for (int i = 0; i < edges; i++) \
    {                               \
        int a, b;                   \
        cin >> a >> b;              \
        a--;                        \
        b--;                        \
        list[a].pb(b);              \
        list[b].pb(a);              \
    }
#define has_bits(bit_mask, x) ((bit_mask) & (1ULL << (x)))
#define turn_on_bit(bit_mask, x) (bit_mask |= (1ULL << (x)))
#define turn_off_bit(bit_mask, x) (bit_mask &= (~(1ULL << (x))))
#define smallest_on_bit(bit_mask) (__builtin_ctzll(int)((bit_mask) & (~(bit_mask))))
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pll> vpl;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;                // greater<int> for descending set, also less_equal<int> which is ascending multiset

// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- /
// DEBUG
#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x) ;
#endif
    void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
void _print(pbds v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
void _print(ordered_set v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- /
    ll MSB(ll n) { return 63 - __builtin_clzll(n); }
ll getIthbit(ll n, ll i) { return (n & (1 << i)) == 0 ? 0 : 1; }
void setIthBit(ll &n, ll i) { n = n | (1 << i); }
void clearIthBit(ll &n, ll i) { n = n & (~(1 << i)); }
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} // pass an arry of size1 3
ll mminv(ll a, ll m)
{
    ll arr[3];
    extendgcd(a, m, arr);
    if (arr[2] != 1)
    {
        return -1;
    }
    arr[0] = (arr[0] % m + m) % m;
    return arr[0];
} // Modulo Inverse Exist only if gcd(a,m)=1;
ll mminvprime(ll a, ll m)
{
    ll ans = expo(a, m - 2, m);
    ans = (ans % m + m) % m;
    return ans;
} // If a,m are Coprime
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll phin(ll n)
{
    ll number = n;
    if (n % 2 == 0)
    {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
} // O(sqrt(N))
bool revsort(ll a, ll b) { return a > b; }
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
    ll val1 = fact[n];
    ll val2 = ifact[n - r];
    ll val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
void google(int t) { cout << "Case #" << t << ": "; }
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
ll getRandomNumber(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- - /
#ifndef ONLINE_JUDGE
    const ll N = 1e4 + 5;
#else
    const ll N = 1e5 + 5;
#endif

void solve()
{

    int n,k;
    cin >> n>>k;
    vector<int>arr(n);
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    for(int i=n;i>0;i--){
        if(k>0){
            if(arr[n-i]!=i){
            int current_index = n - i;
            int correct_index = mp[i];
            
            swap(arr[current_index], arr[correct_index]);

            mp[arr[current_index]] = current_index;
            mp[arr[correct_index]] = correct_index;
            
            k--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------/
int main()
{
    fast;
    auto start1 = high_resolution_clock::now();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
    return 0;
}

// #include <stdio.h>
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag,
//              tree_order_statistics_node_update>
//     pbds;
// int squaresum(int x){
//     return ((x*(x-1)*(2*x-1))/6);
// }
// int main()
// {
//     int t;
//     cin>>t;
//     //vector<int>minis;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n==2){
//             cout<<2<<endl;
//             continue;
//         }
//         else{
//             vector<int>v(n);
//             for(int i=0;i<n;i++) v[i]=i+1;
//             int maxi=-1;
//             for(int i=0;i<n;i++){
//                 reverse(v.begin()+i,v.end());
//                 vector<int>arr(n);
//                 int local=0;
//                 int sum=0;
//                 for(int i=0;i<n;i++) {
//                     arr[i]=v[i]*(i+1);
//                     local=max(local,arr[i]);
//                     sum+=arr[i];
//                 }
//                 sum-=local;
//                 maxi=max(sum,maxi);
//                 reverse(v.begin()+i,v.end());
//             }
//             cout<<maxi<<endl;
//         }

//     }
//    return 0;
// }