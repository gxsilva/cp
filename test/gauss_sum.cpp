 #include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long r = 0;

	int idx_f = 12;
	
	// ------ i^1 ---------

	//O(N)
	for(int i = 0; i < idx_f; i++)
		r += 1 + i;
	cout << r << '\n';

	//O(1) - polynomial function
	cout << ((idx_f + 1) * idx_f) / 2 << '\n';

	// ------ i^2 ---------
	r = 0;
	
	//O(N)
	for (int i = 0; i < idx_f; i++)
		r += pow(1 + i, 2);
	cout << r << '\n';

	//O(1) - polynomial function
	cout << ((idx_f +1) * idx_f * (2 * idx_f + 1)) / 6 << '\n';

	return (0);
}