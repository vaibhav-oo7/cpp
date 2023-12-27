
#include <bits/stdc++.h>

using namespace std;

int main()
{
 #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
 #endif
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int k, m, n, p;
        cin >> k;
        vector<long long int> b(k);
        vector<long long int> c(k);
        long long int sum = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            sum += b[i];
        }
        for (int j = 0; j < k; j++)
        {
            cin >> c[j];
        }
        cin >> m >> n >> p;
        // vector<vector<long long int>> transform(k + 1, vector<long long int>(k + 1, 0));
        // for (int i = 0; i < k + 1; i++)
        // {
        //     if (i == 0)
        //         transform[0][i] = 1;
        //     else
        //         transform[0][i] = c[k - i];
        // }
        // for (int i = 0; i < k + 1; i++)
        // {
        //     if (i == 0)
        //         transform[k][i] = 0;
        //     else
        //         transform[k][i] = c[k - i];
        // }
        // for (int i = 1; i < k; i++)
        // {
        //     for (int j = 2; j < k + 1; j++)
        //     {
        //         if ((j - i) == 1)
        //             transform[i][j] = 1LL;
        //     }
        // }
        vector<vector<int>> transform(k + 1, vector<int>(k + 1));
    int i, j;
    for(i = 0; i <= k; i++){
        for(j = 0; j <= k; j++){
            if(i != k && i != 0){
                if(i + 1 == j) transform[i][j] = 1;
                else transform[i][j] = 0;
            }else{
                if(i == 0 && j == 0){
                    transform[i][j] = 1;
                }else if(i == k && j == 0){
                    transform[i][j] = 0;
                }else{
                    transform[i][j] = c[k - j];
                }
            }
        }
    }

        vector<vector<long long int>> matrix(k + 1, vector<long long int>(1, 0));
        for (int i = 0; i <= k; i++)
        {
            if (i == 0)
                matrix[i][0] = sum;
            else
                matrix[i][0] = b[i - 1];
        }

        vector<vector<long long int>> ansn(k + 1, vector<long long int>(1, 0));
        for (int step = 0; step < n - k; step++)
        {
            for (int i = 0; i <= k; i++)
            {
                int val = 0;
                for (int j = 0; j <= k; j++)
                {
                    val = (val + transform[i][j] * matrix[j][0]) % p;
                }
                ansn[i][0] = val;
            }
            matrix = ansn;
        }

        vector<vector<long long int>> matrix2(k + 1, vector<long long int>(1, 0));
        for (int i = 0; i <= k; i++)
        {
            if (i == 0)
                matrix2[i][0] = sum;
            else
                matrix2[i][0] = b[i - 1];
        }

        vector<vector<long long int>> ansm(k + 1, vector<long long int>(1, 0));
        for (int step = 0; step < m-n+1 ; step++)
        {
            for (int i = 0; i <= k; i++)
            {
                int val = 0;
                for (int j = 0; j <= k; j++)
                {
                    val = (val + transform[i][j] * matrix2[j][0]) % p;
                }
                ansm[i][0] = val;
            }
            matrix2 = ansm;
        }

        cout << (ansn[0][0] - ansm[0][0] + p) % p << endl;
    }
    return 0;
}