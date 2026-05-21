#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n; cin >> n;
	if (n == 1)
			return (0);
	for (long long x = 2; x <= n; x++)
	{
		int f = 0;
		for (long long z = 2; z < x; z++)
			if (x % z == 0)
				f = 1;
		if (!f)
			cout << x << ' ';
		f = 0;
	}
	cout << '\n';
	return (0);
}