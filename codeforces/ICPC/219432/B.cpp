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

	long long x; cin >> x;
	int cc = 0;

	for (int i = 1; i <= x; i++)
		if (i % 2 == 0)
		{
			cc++;
			cout << i << '\n';
		}
	if (cc == 0)
		cout << "-1\n"; 
	return (0);
}