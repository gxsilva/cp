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

	long long x, y; cin >> x >> y;
	long long r = 0;
	for (long long i = 1; i <= min(x, y); i++)
		if (x % i == 0 && y % i == 0)	
			r = i;
	cout << r << '\n';
	return (0);
}