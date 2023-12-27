#include <bits/stdc++.h>

using namespace std;
void solve()
{
     int n;
     cin >> n; // no of elements in array
     // int arr[100005]={0};
     int sum = 0;
     vector<int> premod(n, 0);
     int ind = -1;
     int someWhereGettingSumZero = -1;

     for (int i = 0; i < n; i++)
     {
          int x;
          cin >> x;
          if (x % n == 0)
          {
               ind = i;
          }
          sum += x;
          sum = sum % n;
          premod[i] = sum;
          if (sum == 0)
          {
               someWhereGettingSumZero = i;
          }
     }
     if (ind != -1)
     {
          cout << 1 << endl;
          cout << ind + 1 << endl;
          return;
     }
     if (someWhereGettingSumZero != -1)
     {
          cout << someWhereGettingSumZero + 1 << endl;
          for (int i = 0; i <= someWhereGettingSumZero; i++)
          {
               cout << i + 1 << " ";
          }
          cout << endl;
          return;
     }
     set<int> st;
     int last = 0;
     int same = 0;
     int i = 0;
     int first = 0;
     for (i = 0; i < n; i++)
     {
          if (st.find(premod[i]) == st.end())
               st.insert(premod[i]);
          else
          {
               same = premod[i];
               last = i;
               break;
          }
     }

     if (i == n)
          cout << -1 << endl;
     else
     {
          for (i = 0; i < n; i++)
          {
               if (premod[i] == same)
               {
                    first = i;
                    break;
               }
          }
          cout << last - first << endl;
          for (int k = first + 1; k <= last; k++)
          {
               cout << k + 1 << " ";
          }
          cout << endl;
     }
}
int main()
{
     // #ifndef ONLINE_JUDGE
     //     freopen("input.txt","r",stdin);
     //     freopen("output.txt","w",stdout);
     // #endif
     int t;
     cin >> t;
     while (t--)
     {
          solve();
     }
     return 0;
}