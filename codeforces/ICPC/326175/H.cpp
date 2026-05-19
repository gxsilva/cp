#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <iomanip>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout << setprecision(10);

	long long n, k, a; cin >> n >> k >> a;

	if ((n * k) % a == 0)
	{
		if (((n * k) / a) >= INT_MIN && ((n * k) / a) <= INT_MAX)
			cout << "int\n";
		else
			cout << "long long\n";
	}
	else
		cout << "double\n";
	return (0);
}