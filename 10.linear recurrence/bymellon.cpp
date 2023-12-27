#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string S;
	cin >> S;
	int N = S.length();
	unsigned long long sumOfExp = 0;

	// Generate all possible subset
	// of indices iteratively
	for (int i = 0; i < pow(2, N - 1); i++)
	{
		// Stores sum of
		// current expressions
		unsigned long long ans_sub = 0;

		// Stores numbers of
		// current expressions
		string subst = string(1, S.at(0));

		// Traverse the string at insert + at
		// current subset of indices
		for (int j = 0; j < N - 1; j++)
		{
			// If current index exists
			// in the current subset
			if (((i >> j) & 1) == 1)
			{
				// Update ans_sub
				ans_sub += stoull(subst);

				// Update subset
				subst = string(1, S.at(j + 1));
			}
			else
				// Update subset
				subst += S.at(j + 1);

			// + can't be inserted after
			// the last index
			if (j == N - 2)
				ans_sub += stoull(subst);
		}

		// Update ans
		sumOfExp += ans_sub;
	}
	// Base case
	if (N == 1)
		cout << S;
	else

		// Print answer
		cout << sumOfExp;

	return 0;
}
