#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)        substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x)         cerr<<#x<<": "<<x<<" "<<endl;

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

string lexicographicallySmallest(string S, int k)
{
    string ans = "";
    int l = S.length();
    if(k==0) return S;
    stack<char> st;
    for (int i = 0; i < l; i++) {
        while (!st.empty() && k > 0 && st.top() > S[i]) {
            st.pop();
            k--;
        }
        st.push(S[i]);
    }
 
    
    while (k--)
        st.pop();
 
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    
    return ans;
}


void ab_d(){
    string s ;
    cin>>s;
    int pos ;
    cin>>pos;
    int length = s.size();
    int n = length;
    int count = 0;
    for(int i = 0 ; i <= n ; i++){
        length = n - i ;
        if(pos-length<=0) break;
        pos = pos-length;
        count++;
    }
    pos--;
    string s1 = lexicographicallySmallest(s,count);
    cout<<s1[pos];

}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    w(x)
        ab_d();

    return 0;
}